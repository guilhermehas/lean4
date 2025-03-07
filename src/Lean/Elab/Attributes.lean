/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
import Lean.Parser.Attr
import Lean.Attributes
import Lean.MonadEnv
import Lean.Elab.Util
namespace Lean.Elab

structure Attribute where
  kind  : AttributeKind := AttributeKind.global
  name  : Name
  stx   : Syntax := Syntax.missing

instance : ToFormat Attribute where
  format attr :=
   let kindStr := match attr.kind with
     | AttributeKind.global => ""
     | AttributeKind.local  => "local "
     | AttributeKind.scoped => "scoped "
   Format.bracket "@[" f!"{kindStr}{attr.name}{toString attr.stx}" "]"

instance : Inhabited Attribute where
  default := { name := arbitrary }

/-
  ```
  attrKind := leading_parser optional («scoped» <|> «local»)
  ```
-/
def toAttributeKind [Monad m] [MonadResolveName m] [MonadError m] (attrKindStx : Syntax) : m AttributeKind := do
  if attrKindStx[0].isNone then
    return AttributeKind.global
  else if attrKindStx[0][0].getKind == ``Lean.Parser.Term.scoped then
    if (← getCurrNamespace).isAnonymous then
      throwError "scoped attributes must be used inside namespaces"
    return AttributeKind.scoped
  else
    return AttributeKind.local

def mkAttrKindGlobal : Syntax :=
  Syntax.node ``Lean.Parser.Term.attrKind #[mkNullNode]

def elabAttr {m} [Monad m] [MonadEnv m] [MonadResolveName m] [MonadError m] [MonadMacroAdapter m] [MonadRecDepth m] (attrInstance : Syntax) : m Attribute := do
  /- attrInstance     := ppGroup $ leading_parser attrKind >> attrParser -/
  let attrKind ← toAttributeKind attrInstance[0]
  let attr := attrInstance[1]
  let attr ← liftMacroM <| expandMacros attr
  let attrName ←
    if attr.getKind == ``Parser.Attr.simple then
      pure attr[0].getId.eraseMacroScopes
    else
      match attr.getKind with
      | Name.str _ s _ => pure <| Name.mkSimple s
      | _ => throwErrorAt attr  "unknown attribute"
  unless isAttribute (← getEnv) attrName do
    throwError "unknown attribute [{attrName}]"
  /- The `AttrM` does not have sufficient information for expanding macros in `args`.
     So, we expand them before here before we invoke the attributer handlers implemented using `AttrM`. -/
  pure { kind := attrKind, name := attrName, stx := attr }

def elabAttrs {m} [Monad m] [MonadEnv m] [MonadResolveName m] [MonadError m] [MonadMacroAdapter m] [MonadRecDepth m] (attrInstances : Array Syntax) : m (Array Attribute) := do
  let mut attrs := #[]
  for attr in attrInstances do
    attrs := attrs.push (← elabAttr attr)
  return attrs

-- leading_parser "@[" >> sepBy1 attrInstance ", " >> "]"
def elabDeclAttrs {m} [Monad m] [MonadEnv m] [MonadResolveName m] [MonadError m] [MonadMacroAdapter m] [MonadRecDepth m] (stx : Syntax) : m (Array Attribute) :=
  elabAttrs stx[1].getSepArgs

end Lean.Elab
