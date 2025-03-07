/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Parser.Basic
namespace Lean.Parser

def isQuotableCharForStrInterpolant (c : Char) : Bool :=
  c == '{' || isQuotableCharDefault c

partial def interpolatedStrFn (p : ParserFn) : ParserFn := fun c s =>
  let input     := c.input
  let stackSize := s.stackSize
  let rec parse (startPos : Nat) (c : ParserContext) (s : ParserState) : ParserState :=
    let i     := s.pos
    if input.atEnd i then
      s.mkUnexpectedErrorAt "unterminated string literal" startPos
    else
      let curr := input.get i
      let s    := s.setPos (input.next i)
      if curr == '\"' then
        let s := mkNodeToken interpolatedStrLitKind startPos c s
        s.mkNode interpolatedStrKind stackSize
      else if curr == '\\' then
        andthenFn (quotedCharCoreFn isQuotableCharForStrInterpolant) (parse startPos) c s
      else if curr == '{' then
        let s := mkNodeToken interpolatedStrLitKind startPos c s
        let s := p c s
        if s.hasError then s
        else
          let pos := s.pos
          andthenFn (satisfyFn (· == '}') "expected '}'") (parse pos) c s
      else
        parse startPos c s
  let startPos := s.pos
  if input.atEnd startPos then
    s.mkEOIError
  else
    let curr  := input.get s.pos;
    if curr != '\"' then
      s.mkError "interpolated string"
    else
      let s := s.next input startPos
      parse startPos c s

@[inline] def interpolatedStrNoAntiquot (p : Parser) : Parser := {
  fn   := interpolatedStrFn p.fn,
  info := mkAtomicInfo "interpolatedStr"
}

def interpolatedStr (p : Parser) : Parser :=
  withAntiquot (mkAntiquot "interpolatedStr" interpolatedStrKind) $ interpolatedStrNoAntiquot p

end Lean.Parser
