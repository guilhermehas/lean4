// Lean compiler output
// Module: Lean.Meta.Match.Match
// Imports: Init Lean.Util.CollectLevelParams Lean.Util.Recognizers Lean.Compiler.ExternAttr Lean.Meta.Check Lean.Meta.Closure Lean.Meta.Tactic.Cases Lean.Meta.Tactic.Contradiction Lean.Meta.GeneralizeTelescope Lean.Meta.Match.Basic Lean.Meta.Match.MVarRenaming Lean.Meta.Match.CaseValues
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1;
lean_object* l_Lean_Meta_Match_Example_applyFVarSubst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__3___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__2(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isNatLit(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___boxed(lean_object*);
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__6(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1(uint8_t);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__1(lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(lean_object*, lean_object*);
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_List_get___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone___boxed(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_format_unicode___closed__1;
uint8_t l_Std_AssocList_contains___at_Lean_Meta_FVarSubst_contains___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6;
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__1(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern_match__1(lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___boxed(lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1;
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1;
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_Match_instantiateAltLHSMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition_match__1(lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instantiateBetaRevRange_visit___closed__1;
uint8_t l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1(uint8_t, uint8_t);
lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_isAltVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2;
lean_object* l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6;
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__1(lean_object*);
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_substCore___spec__2___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__3(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___boxed(lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition_match__1(lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1;
extern lean_object* l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_dependsOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Match_Unify_occurs(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1;
extern lean_object* l_Std_PersistentHashMap_root___default___closed__2;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constructorApp_x3f(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13954____closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAlt;
extern lean_object* l_instInhabitedNat;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___boxed(lean_object*);
extern lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___closed__4;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3;
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues(lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2;
extern lean_object* l_Lean_Meta_assumption___closed__1;
lean_object* l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13;
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6;
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar___boxed(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar___boxed(lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1(lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Meta_Match_mkMatcher_match__1(lean_object*);
lean_object* l_List_map___at_Lean_Meta_Match_mkMatcher___spec__6(lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1;
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4;
lean_object* l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__1(lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2;
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop(lean_object*);
extern lean_object* l_instReprBool___closed__2;
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2;
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1___boxed(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern_match__1(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_State_fvarSubst___default;
extern lean_object* l_Lean_levelZero;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1(uint8_t, lean_object*);
extern lean_object* l_instReprBool___closed__4;
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_UInt32_add(uint32_t, uint32_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_unify_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Match_Match___hyg_8372_(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher_match__2(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern(lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition(lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1(uint8_t, lean_object*);
lean_object* l_Std_mkHashSet___at_Lean_Meta_Match_State_used___default___spec__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2;
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts(lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__2(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern_match__1(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3;
extern lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
lean_object* l_Lean_Meta_Match_Pattern_toMessageData(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_unify_match__1(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___rarg___closed__3;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__3;
lean_object* l_Lean_Meta_Match_Pattern_toExpr_visit(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1___boxed(lean_object**);
lean_object* l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_isCurrVarInductive___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
lean_object* l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern(lean_object*);
extern lean_object* l_Lean_Meta_evalNat_visit___closed__19;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search_match__1(lean_object*);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getArrayArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__2(lean_object*);
extern lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4;
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_53____spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4;
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
extern lean_object* l_Lean_Meta_mkArrow___closed__2;
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1;
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_caseValue___closed__2;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___boxed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2;
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3;
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__1(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9;
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7;
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_forInUnsafe_loop___at_Lean_pushScope___spec__1___rarg___lambda__1___closed__1;
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1(uint8_t, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1;
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__5;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4;
lean_object* l_Lean_Meta_Match_matcherExt;
lean_object* l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instHashableExpr;
lean_object* l_Lean_Meta_Match_Unify_assign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_State_counterExamples___default;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1;
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps_match__1(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2;
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar(lean_object*);
uint8_t l_Lean_Meta_Match_Unify_occurs___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Match_addMatcherInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5(size_t, size_t, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__2;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Lean_getMaxHeight(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___boxed(lean_object*);
extern lean_object* l_Lean_instToExprUnit___lambda__1___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_unify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2;
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException_match__1(lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1;
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__1;
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1(uint8_t, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_expandIfVar_match__1(lean_object*);
uint8_t l_List_elem___at_Lean_Occurrences_contains___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_mkSimpleThunkType(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__2(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__4;
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__2(lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf_match__1(lean_object*);
lean_object* l_Lean_Meta_Match_isCurrVarInductive___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__2;
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SynthInstance_main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1;
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3;
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashSet_instInhabitedHashSet___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2;
extern lean_object* l_Lean_Meta_Match_instInhabitedPattern;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1;
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition(lean_object*);
lean_object* l_List_map___at_Lean_Meta_Match_mkMatcher___spec__1(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__3___rarg(lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Meta_Match_Problem_toMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Pattern_applyFVarSubst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___boxed(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_isCurrVarInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___boxed(lean_object*);
lean_object* l_Lean_Meta_Match_Unify_expandIfVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_assignGoalOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Alt_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__1(lean_object*);
extern lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___boxed(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_orelse___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3___boxed(lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2;
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2;
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4;
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10;
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2;
lean_object* l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2;
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___boxed(lean_object*);
lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Meta_Match_Example_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1;
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__5;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition_match__1(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1(uint8_t, lean_object*);
extern lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_instBEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1;
lean_object* l_Lean_Meta_Match_withGoalOf___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1;
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7;
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_unify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_expandIfVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_insert___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___rarg___closed__2;
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__2(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1;
lean_object* l_Lean_Meta_Match_Unify_occurs___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1;
size_t lean_usize_mix_hash(size_t, size_t);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instBEqExpr;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__1(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_Match_State_used___default___closed__1;
lean_object* l_Lean_Meta_Match_examplesToMessageData(lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_State_used___default;
lean_object* l_Lean_Meta_Match_Unify_occurs___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8;
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_CheckAssignment_checkFVar___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isLevelDefEqAux___closed__5;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2;
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1;
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Std_HashSetImp_expand___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__4(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___boxed(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3;
lean_object* l_instHashableBool___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11;
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Meta_Match_bootstrap_genMatcherCode;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__3(lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_assign___closed__6;
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_isCurrVarInductive___closed__1;
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample_match__1(lean_object*);
lean_object* l_Lean_Meta_setMCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2(size_t, size_t, lean_object*);
lean_object* l_Std_HashSetImp_moveEntries___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2;
extern lean_object* l_Lean_Meta_Match_instInhabitedProblem;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern_match__1(lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1;
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1(uint8_t, lean_object*);
extern lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__3;
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_caseArraySizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_evalNat_match__1___rarg___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Alt_applyFVarSubst(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__1(lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832_(lean_object*);
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860_(lean_object*);
extern lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___rarg___closed__2;
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_isAltVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern_match__1(lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Unify_expandIfVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_applyFVarSubst(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_addUnificationHint___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition_match__1(lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___closed__3;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1;
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_4, 2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthAux___rarg(x_7, x_8);
x_10 = lean_nat_dec_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
return x_6;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("incorrect number of patterns");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_1);
x_9 = 0;
x_10 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1(x_8, x_9, x_2);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2;
x_14 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 < x_1;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = x_3;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = x_12;
x_16 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_Match_Pattern_toExpr_visit(x_16, x_15, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_14, x_2, x_22);
x_2 = x_21;
x_3 = x_23;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = l_Lean_mkAppN(x_1, x_3);
x_10 = 0;
x_11 = 1;
x_12 = l_Lean_Meta_mkForallFVars(x_2, x_9, x_10, x_11, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_List_redLength___rarg(x_10);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_dec(x_11);
x_13 = l_List_toArrayAux___rarg(x_10, x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = x_13;
x_17 = lean_box_usize(x_15);
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1;
x_19 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1___boxed), 8, 3);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
lean_closure_set(x_19, 2, x_16);
x_20 = x_19;
x_21 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1___boxed), 8, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_9, x_22, x_4, x_5, x_6, x_7, x_8);
return x_23;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_1);
x_20 = lean_array_push(x_2, x_19);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_21 = l_List_mapM___at_Lean_Meta_Match_instantiateAltLHSMVars___spec__1(x_3, x_14, x_15, x_16, x_17, x_18);
if (x_4 == 0)
{
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_mkAppN(x_13, x_5);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_6);
lean_ctor_set(x_25, 1, x_7);
lean_ctor_set(x_25, 2, x_24);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_9);
x_27 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg(x_10, x_11, x_12, x_26, x_20, x_14, x_15, x_16, x_17, x_23);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_21, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_dec(x_21);
x_34 = l_Lean_instToExprUnit___lambda__1___closed__3;
x_35 = l_Lean_mkApp(x_13, x_34);
x_36 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_36, 0, x_6);
lean_ctor_set(x_36, 1, x_7);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_36, 3, x_32);
lean_ctor_set(x_36, 4, x_8);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_9);
x_38 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg(x_10, x_11, x_12, x_37, x_20, x_14, x_15, x_16, x_17, x_33);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_21, 0);
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_21);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Match");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__2;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("minor premise ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = l_List_reverse___rarg(x_4);
x_12 = lean_apply_7(x_2, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_13, 2);
lean_inc(x_17);
x_18 = l_List_redLength___rarg(x_16);
x_19 = lean_mk_empty_array_with_capacity(x_18);
lean_dec(x_18);
lean_inc(x_16);
x_20 = l_List_toArrayAux___rarg(x_16, x_19);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = x_20;
x_25 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(x_22, x_23, x_24);
x_26 = x_25;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_26);
lean_inc(x_1);
x_27 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType(x_1, x_26, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Array_isEmpty___rarg(x_26);
if (x_30 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_array_get_size(x_26);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_28);
lean_ctor_set(x_77, 1, x_76);
x_31 = x_77;
goto block_75;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = l_Lean_mkSimpleThunkType(x_28);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_31 = x_80;
goto block_75;
}
block_75:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_List_lengthAux___rarg(x_4, x_34);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_35, x_36);
x_38 = l_Lean_Meta_caseValue___closed__2;
x_39 = l_Lean_Name_appendIndexAfter(x_38, x_37);
x_63 = lean_st_ref_get(x_9, x_29);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_64, 3);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_ctor_get_uint8(x_65, sizeof(void*)*1);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_68 = 0;
x_40 = x_68;
x_41 = x_67;
goto block_62;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_69 = lean_ctor_get(x_63, 1);
lean_inc(x_69);
lean_dec(x_63);
x_70 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_71 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_70, x_6, x_7, x_8, x_9, x_69);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_unbox(x_72);
lean_dec(x_72);
x_40 = x_74;
x_41 = x_73;
goto block_62;
}
block_62:
{
if (x_40 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_42 = lean_box(x_30);
x_43 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1___boxed), 18, 12);
lean_closure_set(x_43, 0, x_33);
lean_closure_set(x_43, 1, x_5);
lean_closure_set(x_43, 2, x_16);
lean_closure_set(x_43, 3, x_42);
lean_closure_set(x_43, 4, x_26);
lean_closure_set(x_43, 5, x_15);
lean_closure_set(x_43, 6, x_35);
lean_closure_set(x_43, 7, x_17);
lean_closure_set(x_43, 8, x_4);
lean_closure_set(x_43, 9, x_1);
lean_closure_set(x_43, 10, x_2);
lean_closure_set(x_43, 11, x_14);
x_44 = 0;
x_45 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_39, x_44, x_32, x_43, x_6, x_7, x_8, x_9, x_41);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; 
lean_inc(x_39);
x_46 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_46, 0, x_39);
x_47 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Lean_Meta_mkHasTypeButIsExpectedMsg___closed__3;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_32);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_32);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_56 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_55, x_54, x_6, x_7, x_8, x_9, x_41);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_box(x_30);
x_59 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1___boxed), 18, 12);
lean_closure_set(x_59, 0, x_33);
lean_closure_set(x_59, 1, x_5);
lean_closure_set(x_59, 2, x_16);
lean_closure_set(x_59, 3, x_58);
lean_closure_set(x_59, 4, x_26);
lean_closure_set(x_59, 5, x_15);
lean_closure_set(x_59, 6, x_35);
lean_closure_set(x_59, 7, x_17);
lean_closure_set(x_59, 8, x_4);
lean_closure_set(x_59, 9, x_1);
lean_closure_set(x_59, 10, x_2);
lean_closure_set(x_59, 11, x_14);
x_60 = 0;
x_61 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_39, x_60, x_32, x_59, x_6, x_7, x_8, x_9, x_57);
return x_61;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_27);
if (x_81 == 0)
{
return x_27;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_27, 0);
x_83 = lean_ctor_get(x_27, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_27);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; lean_object* x_20; 
x_19 = lean_unbox(x_4);
lean_dec(x_4);
x_20 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___lambda__1(x_1, x_2, x_3, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_5);
return x_20;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = l_Array_empty___closed__1;
x_11 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg(x_1, x_3, x_2, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_assignGoalOf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_assignExprMVar___boxed), 7, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_2);
x_10 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Std_mkHashSet___at_Lean_Meta_Match_State_used___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_State_used___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_State_used___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Match_State_used___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_State_counterExamples___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = l_List_isEmpty___rarg(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_5, sizeof(void*)*1);
lean_dec(x_5);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_3(x_2, x_7, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_4) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_3(x_2, x_7, x_8, x_6);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 5)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 3);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_apply_5(x_2, x_7, x_8, x_9, x_10, x_6);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 2)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 3)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 3)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 3)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
x_9 = l_Lean_Expr_isNatLit(x_8);
if (x_9 == 0)
{
return x_5;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 4)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_3(x_2, x_7, x_8, x_6);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 4)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_8, x_7);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_apply_2(x_3, x_11, x_10);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_1);
return x_13;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1(x_1, x_6);
switch (lean_obj_tag(x_7)) {
case 0:
{
return x_8;
}
case 1:
{
return x_8;
}
default: 
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 1;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_4, x_9, x_8);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_2(x_3, x_12, x_11);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_7, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_7, 3);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_apply_5(x_2, x_15, x_16, x_17, x_18, x_14);
return x_19;
}
default: 
{
lean_object* x_20; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_apply_1(x_5, x_1);
return x_20;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition_match__1___rarg), 5, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(x_1, x_6);
switch (lean_obj_tag(x_7)) {
case 3:
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
case 4:
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
case 5:
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
default: 
{
return x_8;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasCtorPattern(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_List_isEmpty___rarg(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; uint8_t x_7; 
x_6 = 1;
x_7 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(x_6, x_3);
return x_7;
}
}
else
{
lean_object* x_8; uint8_t x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 2);
x_9 = 1;
x_10 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(x_9, x_8);
return x_10;
}
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_8, x_7);
return x_9;
}
case 3:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_apply_2(x_2, x_11, x_10);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_1);
return x_13;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1(x_1, x_6);
switch (lean_obj_tag(x_7)) {
case 1:
{
return x_8;
}
case 3:
{
return x_8;
}
default: 
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasValPattern(x_1);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 2);
x_7 = 1;
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1(x_7, x_6);
return x_8;
}
}
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_8, x_7);
return x_9;
}
case 4:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_3(x_2, x_11, x_12, x_10);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1(x_1, x_6);
switch (lean_obj_tag(x_7)) {
case 1:
{
return x_8;
}
case 4:
{
return x_8;
}
default: 
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasArrayLitPattern(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasVarPattern(x_1);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 2);
x_7 = 1;
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1(x_7, x_6);
return x_8;
}
}
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_8, x_7);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 3);
lean_inc(x_14);
lean_dec(x_6);
x_15 = lean_apply_5(x_2, x_11, x_12, x_13, x_14, x_10);
return x_15;
}
default: 
{
lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_apply_1(x_4, x_1);
return x_16;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
switch (lean_obj_tag(x_7)) {
case 0:
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
case 2:
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
default: 
{
return x_5;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(x_1);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 2);
x_7 = 0;
x_8 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1(x_7, x_6);
return x_8;
}
}
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.Match.Match");
return x_1;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processSkipInaccessible");
return x_1;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(142u);
x_4 = lean_unsigned_to_nat(19u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_4, 2);
x_10 = lean_ctor_get(x_4, 3);
x_11 = lean_ctor_get(x_4, 4);
x_12 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_free_object(x_4);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_13 = l_Lean_Meta_Match_instInhabitedAlt;
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_15 = lean_panic_fn(x_13, x_14);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_16; 
lean_free_object(x_1);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_11, 1);
x_19 = lean_ctor_get(x_11, 0);
lean_dec(x_19);
lean_ctor_set(x_4, 4, x_18);
lean_ctor_set(x_11, 1, x_12);
lean_ctor_set(x_11, 0, x_4);
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
lean_ctor_set(x_4, 4, x_20);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_12);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_16);
lean_free_object(x_4);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_11, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_11, 0);
lean_dec(x_24);
x_25 = l_Lean_Meta_Match_instInhabitedAlt;
x_26 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_27 = lean_panic_fn(x_25, x_26);
lean_ctor_set(x_11, 1, x_12);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_11);
x_28 = l_Lean_Meta_Match_instInhabitedAlt;
x_29 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_30 = lean_panic_fn(x_28, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_12);
return x_31;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_1, 1);
x_33 = lean_ctor_get(x_4, 0);
x_34 = lean_ctor_get(x_4, 1);
x_35 = lean_ctor_get(x_4, 2);
x_36 = lean_ctor_get(x_4, 3);
x_37 = lean_ctor_get(x_4, 4);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_4);
x_38 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(x_32);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_39 = l_Lean_Meta_Match_instInhabitedAlt;
x_40 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_41 = lean_panic_fn(x_39, x_40);
lean_ctor_set(x_1, 1, x_38);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
lean_object* x_42; 
lean_free_object(x_1);
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_42);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_44 = x_37;
} else {
 lean_dec_ref(x_37);
 x_44 = lean_box(0);
}
x_45 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_45, 0, x_33);
lean_ctor_set(x_45, 1, x_34);
lean_ctor_set(x_45, 2, x_35);
lean_ctor_set(x_45, 3, x_36);
lean_ctor_set(x_45, 4, x_43);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_38);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_42);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_47 = x_37;
} else {
 lean_dec_ref(x_37);
 x_47 = lean_box(0);
}
x_48 = l_Lean_Meta_Match_instInhabitedAlt;
x_49 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_50 = lean_panic_fn(x_48, x_49);
if (lean_is_scalar(x_47)) {
 x_51 = lean_alloc_ctor(1, 2, 0);
} else {
 x_51 = x_47;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_38);
return x_51;
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_52 = lean_ctor_get(x_1, 0);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_1);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 3);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 4);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 lean_ctor_release(x_52, 3);
 lean_ctor_release(x_52, 4);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
x_60 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(x_53);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
x_61 = l_Lean_Meta_Match_instInhabitedAlt;
x_62 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_63 = lean_panic_fn(x_61, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_65);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_67 = x_58;
} else {
 lean_dec_ref(x_58);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_68 = lean_alloc_ctor(0, 5, 0);
} else {
 x_68 = x_59;
}
lean_ctor_set(x_68, 0, x_54);
lean_ctor_set(x_68, 1, x_55);
lean_ctor_set(x_68, 2, x_56);
lean_ctor_set(x_68, 3, x_57);
lean_ctor_set(x_68, 4, x_66);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_60);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_65);
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_70 = x_58;
} else {
 lean_dec_ref(x_58);
 x_70 = lean_box(0);
}
x_71 = l_Lean_Meta_Match_instInhabitedAlt;
x_72 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3;
x_73 = lean_panic_fn(x_71, x_72);
if (lean_is_scalar(x_70)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_70;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_60);
return x_74;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(138u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_3 = l_Lean_Meta_Match_instInhabitedProblem;
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(x_7);
lean_ctor_set(x_1, 2, x_10);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1(x_12);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_16, 3, x_13);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = l_Lean_checkTraceOption(x_8, x_1);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_take(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_14, 3);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_11);
lean_inc(x_9);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Std_PersistentArray_push___rarg(x_20, x_22);
lean_ctor_set(x_15, 0, x_23);
x_24 = lean_st_ref_set(x_7, x_14, x_16);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set(x_24, 0, x_27);
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
x_32 = lean_ctor_get(x_15, 0);
lean_inc(x_32);
lean_dec(x_15);
x_33 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_11);
lean_inc(x_9);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_9);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Std_PersistentArray_push___rarg(x_32, x_34);
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_31);
lean_ctor_set(x_14, 3, x_36);
x_37 = lean_st_ref_set(x_7, x_14, x_16);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_39 = x_37;
} else {
 lean_dec_ref(x_37);
 x_39 = lean_box(0);
}
x_40 = lean_box(0);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
x_44 = lean_ctor_get(x_14, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_45 = lean_ctor_get_uint8(x_15, sizeof(void*)*1);
x_46 = lean_ctor_get(x_15, 0);
lean_inc(x_46);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 x_47 = x_15;
} else {
 lean_dec_ref(x_15);
 x_47 = lean_box(0);
}
x_48 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_48, 0, x_1);
lean_ctor_set(x_48, 1, x_11);
lean_inc(x_9);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_9);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Std_PersistentArray_push___rarg(x_46, x_49);
if (lean_is_scalar(x_47)) {
 x_51 = lean_alloc_ctor(0, 1, 1);
} else {
 x_51 = x_47;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_45);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_42);
lean_ctor_set(x_52, 1, x_43);
lean_ctor_set(x_52, 2, x_44);
lean_ctor_set(x_52, 3, x_51);
x_53 = lean_st_ref_set(x_7, x_52, x_16);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
x_56 = lean_box(0);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
}
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 1, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_array_get_size(x_1);
x_15 = lean_usize_of_nat(x_12);
x_16 = lean_usize_modn(x_15, x_14);
lean_dec(x_14);
x_17 = lean_array_uget(x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_array_uset(x_1, x_16, x_18);
x_1 = x_19;
x_2 = x_13;
goto _start;
}
}
}
}
lean_object* l_Std_HashSetImp_moveEntries___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashSetImp_expand___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashSetImp_moveEntries___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_nat_dec_eq(x_6, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_dec(x_6);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_nat_dec_eq(x_10, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
}
}
}
lean_object* l_Std_HashSetImp_insert___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_2);
x_8 = lean_usize_modn(x_7, x_6);
x_9 = lean_array_uget(x_5, x_8);
x_10 = l_List_elem___at_Lean_Occurrences_contains___spec__1(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
x_14 = lean_array_uset(x_5, x_8, x_13);
x_15 = lean_nat_dec_le(x_12, x_6);
lean_dec(x_6);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_1);
x_16 = l_Std_HashSetImp_expand___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__4(x_12, x_14);
return x_16;
}
else
{
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_inc(x_2);
x_17 = l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(x_9, x_2, x_2);
lean_dec(x_2);
x_18 = lean_array_uset(x_5, x_8, x_17);
lean_ctor_set(x_1, 1, x_18);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_2);
x_23 = lean_usize_modn(x_22, x_21);
x_24 = lean_array_uget(x_20, x_23);
x_25 = l_List_elem___at_Lean_Occurrences_contains___spec__1(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_19, x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_array_uset(x_20, x_23, x_28);
x_30 = lean_nat_dec_le(x_27, x_21);
lean_dec(x_21);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = l_Std_HashSetImp_expand___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__4(x_27, x_29);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_21);
lean_inc(x_2);
x_33 = l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(x_24, x_2, x_2);
lean_dec(x_2);
x_34 = lean_array_uset(x_20, x_23, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_13954____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("missing alternative");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_44; 
x_44 = lean_ctor_get(x_1, 2);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_st_ref_get(x_6, x_7);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_46, 3);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_ctor_get_uint8(x_47, sizeof(void*)*1);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_8 = x_49;
goto block_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_dec(x_45);
x_51 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_52 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(x_51, x_2, x_3, x_4, x_5, x_6, x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_dec(x_52);
x_8 = x_55;
goto block_43;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3;
x_58 = l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(x_51, x_57, x_2, x_3, x_4, x_5, x_6, x_56);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_8 = x_59;
goto block_43;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_44, 0);
lean_inc(x_60);
lean_dec(x_44);
x_61 = lean_ctor_get(x_60, 2);
lean_inc(x_61);
lean_inc(x_6);
x_62 = l_Lean_Meta_Match_assignGoalOf(x_1, x_61, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_st_ref_get(x_6, x_63);
lean_dec(x_6);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_2, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = !lean_is_exclusive(x_67);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_70 = lean_ctor_get(x_67, 0);
x_71 = lean_ctor_get(x_60, 1);
lean_inc(x_71);
lean_dec(x_60);
x_72 = l_Std_HashSetImp_insert___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__3(x_70, x_71);
lean_ctor_set(x_67, 0, x_72);
x_73 = lean_st_ref_set(x_2, x_67, x_68);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_73, 0);
lean_dec(x_75);
x_76 = lean_box(0);
lean_ctor_set(x_73, 0, x_76);
return x_73;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_80 = lean_ctor_get(x_67, 0);
x_81 = lean_ctor_get(x_67, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_67);
x_82 = lean_ctor_get(x_60, 1);
lean_inc(x_82);
lean_dec(x_60);
x_83 = l_Std_HashSetImp_insert___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__3(x_80, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
x_85 = lean_st_ref_set(x_2, x_84, x_68);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_87 = x_85;
} else {
 lean_dec_ref(x_85);
 x_87 = lean_box(0);
}
x_88 = lean_box(0);
if (lean_is_scalar(x_87)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_87;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
else
{
uint8_t x_90; 
lean_dec(x_60);
lean_dec(x_6);
x_90 = !lean_is_exclusive(x_62);
if (x_90 == 0)
{
return x_62;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_62, 0);
x_92 = lean_ctor_get(x_62, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_62);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
block_43:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = 1;
lean_inc(x_6);
x_11 = l_Lean_Meta_admit(x_9, x_10, x_3, x_4, x_5, x_6, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_6, x_12);
lean_dec(x_6);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_take(x_2, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_16, 1, x_21);
x_22 = lean_st_ref_set(x_2, x_16, x_17);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_ctor_get(x_1, 3);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_st_ref_set(x_2, x_33, x_17);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_6);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_11);
if (x_39 == 0)
{
return x_11;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_11, 0);
x_41 = lean_ctor_get(x_11, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_11);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_replace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__7(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_28; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_12 = x_2;
} else {
 lean_dec_ref(x_2);
 x_12 = lean_box(0);
}
x_28 = lean_ctor_get(x_10, 4);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
x_13 = x_10;
x_14 = x_7;
goto block_27;
}
else
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 5)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_10, 4);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_28, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
lean_ctor_set(x_28, 0, x_35);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_36 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(x_34, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_13 = x_37;
x_14 = x_38;
goto block_27;
}
else
{
uint8_t x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_28, 1);
lean_inc(x_43);
lean_dec(x_28);
x_44 = lean_ctor_get(x_29, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_29, 1);
lean_inc(x_45);
lean_dec(x_29);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
lean_ctor_set(x_10, 4, x_46);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_47 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(x_44, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_13 = x_48;
x_14 = x_49;
goto block_27;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_52 = x_47;
} else {
 lean_dec_ref(x_47);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_10, 0);
x_55 = lean_ctor_get(x_10, 1);
x_56 = lean_ctor_get(x_10, 2);
x_57 = lean_ctor_get(x_10, 3);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_10);
x_58 = lean_ctor_get(x_28, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_59 = x_28;
} else {
 lean_dec_ref(x_28);
 x_59 = lean_box(0);
}
x_60 = lean_ctor_get(x_29, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_29, 1);
lean_inc(x_61);
lean_dec(x_29);
if (lean_is_scalar(x_59)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_59;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_58);
x_63 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_63, 0, x_54);
lean_ctor_set(x_63, 1, x_55);
lean_ctor_set(x_63, 2, x_56);
lean_ctor_set(x_63, 3, x_57);
lean_ctor_set(x_63, 4, x_62);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_64 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(x_60, x_1, x_63, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_13 = x_65;
x_14 = x_66;
goto block_27;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = lean_ctor_get(x_64, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_64, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_69 = x_64;
} else {
 lean_dec_ref(x_64);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
else
{
lean_dec(x_29);
lean_dec(x_28);
x_13 = x_10;
x_14 = x_7;
goto block_27;
}
}
block_27:
{
lean_object* x_15; 
x_15 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___spec__1(x_1, x_11, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
if (lean_is_scalar(x_12)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_12;
}
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
if (lean_is_scalar(x_12)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_12;
}
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_12);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set(x_10, 2, x_4);
lean_ctor_set(x_10, 3, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processAsPattern");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1;
x_3 = lean_unsigned_to_nat(158u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2;
x_10 = lean_panic_fn(x_8, x_9);
x_11 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___spec__1), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_13);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1___boxed), 9, 3);
lean_closure_set(x_17, 0, x_12);
lean_closure_set(x_17, 1, x_7);
lean_closure_set(x_17, 2, x_14);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
x_19 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_18, x_2, x_3, x_4, x_5, x_6);
return x_19;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
static lean_object* _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processVariable");
return x_1;
}
}
static lean_object* _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(172u);
x_4 = lean_unsigned_to_nat(40u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_28; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_12 = x_2;
} else {
 lean_dec_ref(x_2);
 x_12 = lean_box(0);
}
x_28 = lean_ctor_get(x_10, 4);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_10);
x_29 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_30 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2;
x_31 = lean_panic_fn(x_29, x_30);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_32 = lean_apply_5(x_31, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_13 = x_33;
x_14 = x_34;
goto block_27;
}
else
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_28, 0);
lean_inc(x_39);
switch (lean_obj_tag(x_39)) {
case 0:
{
uint8_t x_40; 
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_10, 4);
lean_dec(x_41);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_dec(x_28);
lean_ctor_set(x_10, 4, x_42);
x_13 = x_10;
x_14 = x_7;
goto block_27;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_10, 0);
x_44 = lean_ctor_get(x_10, 1);
x_45 = lean_ctor_get(x_10, 2);
x_46 = lean_ctor_get(x_10, 3);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_10);
x_47 = lean_ctor_get(x_28, 1);
lean_inc(x_47);
lean_dec(x_28);
x_48 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_44);
lean_ctor_set(x_48, 2, x_45);
lean_ctor_set(x_48, 3, x_46);
lean_ctor_set(x_48, 4, x_47);
x_13 = x_48;
x_14 = x_7;
goto block_27;
}
}
case 1:
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_10);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_10, 4);
lean_dec(x_50);
x_51 = lean_ctor_get(x_28, 1);
lean_inc(x_51);
lean_dec(x_28);
x_52 = lean_ctor_get(x_39, 0);
lean_inc(x_52);
lean_dec(x_39);
lean_ctor_set(x_10, 4, x_51);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(x_52, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_13 = x_54;
x_14 = x_55;
goto block_27;
}
else
{
uint8_t x_56; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_53);
if (x_56 == 0)
{
return x_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 0);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_53);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_10, 0);
x_61 = lean_ctor_get(x_10, 1);
x_62 = lean_ctor_get(x_10, 2);
x_63 = lean_ctor_get(x_10, 3);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_10);
x_64 = lean_ctor_get(x_28, 1);
lean_inc(x_64);
lean_dec(x_28);
x_65 = lean_ctor_get(x_39, 0);
lean_inc(x_65);
lean_dec(x_39);
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_63);
lean_ctor_set(x_66, 4, x_64);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_67 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId(x_65, x_1, x_66, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_13 = x_68;
x_14 = x_69;
goto block_27;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = lean_ctor_get(x_67, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_67, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_72 = x_67;
} else {
 lean_dec_ref(x_67);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
default: 
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_39);
lean_dec(x_28);
lean_dec(x_10);
x_74 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_75 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2;
x_76 = lean_panic_fn(x_74, x_75);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_77 = lean_apply_5(x_76, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_13 = x_78;
x_14 = x_79;
goto block_27;
}
else
{
uint8_t x_80; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_77);
if (x_80 == 0)
{
return x_77;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_77, 0);
x_82 = lean_ctor_get(x_77, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_77);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
}
block_27:
{
lean_object* x_15; 
x_15 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1(x_1, x_11, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
if (lean_is_scalar(x_12)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_12;
}
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
if (lean_is_scalar(x_12)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_12;
}
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_12);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(167u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1;
x_10 = lean_panic_fn(x_8, x_9);
x_11 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_alloc_closure((void*)(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1), 7, 2);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_13);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1___boxed), 9, 3);
lean_closure_set(x_18, 0, x_12);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_14);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_19, x_2, x_3, x_4, x_5, x_6);
return x_20;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_inferType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_indentExpr(x_1);
x_11 = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___rarg___closed__2;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_indentExpr(x_8);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_KernelException_toMessageData___closed__15;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg(x_18, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_7);
if (x_20 == 0)
{
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwInductiveTypeExpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_LocalDecl_fvarId(x_4);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
return x_6;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_State_fvarSubst___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Meta_Match_Unify_isAltVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_1, x_9, x_2);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_Match_Unify_isAltVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Match_Unify_isAltVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_Match_Unify_expandIfVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l_Lean_Meta_Match_Unify_expandIfVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_Unify_expandIfVar_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_Unify_expandIfVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_Meta_FVarSubst_apply(x_13, x_1);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = l_Lean_Meta_FVarSubst_apply(x_15, x_1);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
}
}
lean_object* l_Lean_Meta_Match_Unify_expandIfVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Match_Unify_expandIfVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
uint8_t l_Lean_Meta_Match_Unify_occurs___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_name_eq(x_1, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
uint8_t l_Lean_Meta_Match_Unify_occurs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_Match_Unify_occurs___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = 8192;
x_5 = l_Lean_Expr_FindImpl_initCache;
x_6 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_3, x_4, x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 1;
return x_9;
}
}
}
lean_object* l_Lean_Meta_Match_Unify_occurs___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Match_Unify_occurs___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_Match_Unify_occurs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Match_Unify_occurs(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_12);
lean_inc(x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Std_PersistentArray_push___rarg(x_21, x_23);
lean_ctor_set(x_16, 0, x_24);
x_25 = lean_st_ref_set(x_8, x_15, x_17);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_box(0);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_32 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_33 = lean_ctor_get(x_16, 0);
lean_inc(x_33);
lean_dec(x_16);
x_34 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_12);
lean_inc(x_10);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_10);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Std_PersistentArray_push___rarg(x_33, x_35);
x_37 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_32);
lean_ctor_set(x_15, 3, x_37);
x_38 = lean_st_ref_set(x_8, x_15, x_17);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_43 = lean_ctor_get(x_15, 0);
x_44 = lean_ctor_get(x_15, 1);
x_45 = lean_ctor_get(x_15, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_15);
x_46 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_47 = lean_ctor_get(x_16, 0);
lean_inc(x_47);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_48 = x_16;
} else {
 lean_dec_ref(x_16);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_12);
lean_inc(x_10);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_10);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Std_PersistentArray_push___rarg(x_47, x_50);
if (lean_is_scalar(x_48)) {
 x_52 = lean_alloc_ctor(0, 1, 1);
} else {
 x_52 = x_48;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_46);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_43);
lean_ctor_set(x_53, 1, x_44);
lean_ctor_set(x_53, 2, x_45);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_st_ref_set(x_8, x_53, x_17);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = l_Lean_checkTraceOption(x_9, x_1);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unify");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2;
x_2 = l_Lean_Meta_Match_Unify_assign___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assign failed variable is not local, ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_Unify_assign___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assign occurs check failed, ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_Unify_assign___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_Unify_assign___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_Unify_assign(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_27; 
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Lean_Meta_Match_Unify_occurs(x_1, x_2);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_Lean_Meta_Match_Unify_isAltVar(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_32 = x_28;
} else {
 lean_dec_ref(x_28);
 x_32 = lean_box(0);
}
x_59 = lean_st_ref_get(x_8, x_31);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_60, 3);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*1);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = 0;
x_33 = x_64;
x_34 = x_63;
goto block_58;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_dec(x_59);
x_66 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_67 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(x_66, x_3, x_4, x_5, x_6, x_7, x_8, x_65);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_unbox(x_68);
lean_dec(x_68);
x_33 = x_70;
x_34 = x_69;
goto block_58;
}
block_58:
{
if (x_33 == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_35 = 0;
x_36 = lean_box(x_35);
if (lean_is_scalar(x_32)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_32;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_32);
x_38 = l_Lean_mkFVar(x_1);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = l_Lean_Meta_Match_Unify_assign___closed__4;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_2);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_KernelException_toMessageData___closed__15;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_49 = l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(x_48, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
x_52 = 0;
x_53 = lean_box(x_52);
lean_ctor_set(x_49, 0, x_53);
return x_49;
}
else
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_dec(x_49);
x_55 = 0;
x_56 = lean_box(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
}
}
else
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_71 = lean_ctor_get(x_28, 1);
lean_inc(x_71);
lean_dec(x_28);
x_87 = lean_st_ref_get(x_8, x_71);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_88, 3);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_ctor_get_uint8(x_89, sizeof(void*)*1);
lean_dec(x_89);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
lean_dec(x_87);
x_92 = 0;
x_72 = x_92;
x_73 = x_91;
goto block_86;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_93 = lean_ctor_get(x_87, 1);
lean_inc(x_93);
lean_dec(x_87);
x_94 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_95 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(x_94, x_3, x_4, x_5, x_6, x_7, x_8, x_93);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_unbox(x_96);
lean_dec(x_96);
x_72 = x_98;
x_73 = x_97;
goto block_86;
}
block_86:
{
if (x_72 == 0)
{
x_10 = x_73;
goto block_26;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_inc(x_1);
x_74 = l_Lean_mkFVar(x_1);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = l_Lean_KernelException_toMessageData___closed__15;
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_inc(x_2);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_2);
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_76);
x_83 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_84 = l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(x_83, x_82, x_3, x_4, x_5, x_6, x_7, x_8, x_73);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_10 = x_85;
goto block_26;
}
}
}
}
else
{
uint8_t x_99; lean_object* x_100; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_st_ref_get(x_8, x_9);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_126, 3);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_ctor_get_uint8(x_127, sizeof(void*)*1);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
lean_dec(x_125);
x_130 = 0;
x_99 = x_130;
x_100 = x_129;
goto block_124;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
lean_dec(x_125);
x_132 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_133 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(x_132, x_3, x_4, x_5, x_6, x_7, x_8, x_131);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec(x_133);
x_136 = lean_unbox(x_134);
lean_dec(x_134);
x_99 = x_136;
x_100 = x_135;
goto block_124;
}
block_124:
{
if (x_99 == 0)
{
uint8_t x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_2);
lean_dec(x_1);
x_101 = 0;
x_102 = lean_box(x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_104 = l_Lean_mkFVar(x_1);
x_105 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = l_Lean_Meta_Match_Unify_assign___closed__6;
x_107 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_110, 0, x_2);
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_Lean_KernelException_toMessageData___closed__15;
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_115 = l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(x_114, x_113, x_3, x_4, x_5, x_6, x_7, x_8, x_100);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_115, 0);
lean_dec(x_117);
x_118 = 0;
x_119 = lean_box(x_118);
lean_ctor_set(x_115, 0, x_119);
return x_115;
}
else
{
lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_115, 1);
lean_inc(x_120);
lean_dec(x_115);
x_121 = 0;
x_122 = lean_box(x_121);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_120);
return x_123;
}
}
}
}
block_26:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_st_ref_get(x_8, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_take(x_4, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_FVarSubst_insert(x_14, x_1, x_2);
x_17 = lean_st_ref_set(x_4, x_16, x_15);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = 1;
x_21 = lean_box(x_20);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = 1;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Match_Unify_assign___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Match_Unify_assign(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_Match_Unify_unify_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_8; uint64_t x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_12 = lean_box_uint64(x_9);
x_13 = lean_box_uint64(x_11);
x_14 = lean_apply_4(x_3, x_8, x_12, x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_3(x_4, x_15, x_17, x_2);
return x_18;
}
}
case 5:
{
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_19; uint64_t x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_21 = lean_box_uint64(x_20);
x_22 = lean_apply_3(x_5, x_1, x_19, x_21);
return x_22;
}
case 5:
{
lean_object* x_23; lean_object* x_24; uint64_t x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_7);
lean_dec(x_5);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_29 = lean_box_uint64(x_25);
x_30 = lean_box_uint64(x_28);
x_31 = lean_apply_6(x_6, x_23, x_24, x_29, x_26, x_27, x_30);
return x_31;
}
default: 
{
lean_object* x_32; 
lean_dec(x_6);
lean_dec(x_5);
x_32 = lean_apply_2(x_7, x_1, x_2);
return x_32;
}
}
}
default: 
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_33; uint64_t x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_7);
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
x_34 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_35 = lean_box_uint64(x_34);
x_36 = lean_apply_3(x_5, x_1, x_33, x_35);
return x_36;
}
else
{
lean_object* x_37; 
lean_dec(x_5);
x_37 = lean_apply_2(x_7, x_1, x_2);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Meta_Match_Unify_unify_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_Unify_unify_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_Unify_unify(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_135; lean_object* x_136; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_149 = lean_st_ref_get(x_8, x_9);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_150, 3);
lean_inc(x_151);
lean_dec(x_150);
x_152 = lean_ctor_get_uint8(x_151, sizeof(void*)*1);
lean_dec(x_151);
if (x_152 == 0)
{
lean_object* x_153; uint8_t x_154; 
x_153 = lean_ctor_get(x_149, 1);
lean_inc(x_153);
lean_dec(x_149);
x_154 = 0;
x_135 = x_154;
x_136 = x_153;
goto block_148;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_155 = lean_ctor_get(x_149, 1);
lean_inc(x_155);
lean_dec(x_149);
x_156 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_157 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Match_Unify_assign___spec__2(x_156, x_3, x_4, x_5, x_6, x_7, x_8, x_155);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
x_160 = lean_unbox(x_158);
lean_dec(x_158);
x_135 = x_160;
x_136 = x_159;
goto block_148;
}
block_134:
{
lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
lean_inc(x_1);
x_15 = l_Lean_Meta_Match_Unify_expandIfVar(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Meta_whnfD(x_16, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_2);
x_21 = l_Lean_Meta_Match_Unify_expandIfVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Lean_Meta_whnfD(x_22, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_expr_eqv(x_1, x_19);
if (x_28 == 0)
{
lean_free_object(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_26;
x_9 = x_27;
goto _start;
}
else
{
uint8_t x_30; 
x_30 = lean_expr_eqv(x_2, x_26);
if (x_30 == 0)
{
lean_free_object(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_26;
x_9 = x_27;
goto _start;
}
else
{
lean_dec(x_26);
lean_dec(x_19);
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_free_object(x_24);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
x_34 = l_Lean_Meta_Match_Unify_assign(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_35);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = l_Lean_Meta_Match_Unify_assign(x_33, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_34, 0);
lean_dec(x_40);
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_dec(x_34);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_35);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
lean_dec(x_1);
x_44 = l_Lean_Meta_Match_Unify_assign(x_43, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_44;
}
}
case 5:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_45; lean_object* x_46; 
lean_free_object(x_24);
x_45 = lean_ctor_get(x_2, 0);
lean_inc(x_45);
lean_dec(x_2);
x_46 = l_Lean_Meta_Match_Unify_assign(x_45, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_46;
}
case 5:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_free_object(x_24);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_ctor_get(x_2, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_2, 1);
lean_inc(x_50);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_51 = l_Lean_Meta_Match_Unify_unify(x_47, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
if (x_53 == 0)
{
uint8_t x_54; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_51, 0);
lean_dec(x_55);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
lean_object* x_58; 
lean_dec(x_52);
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
lean_dec(x_51);
x_1 = x_48;
x_2 = x_50;
x_9 = x_58;
goto _start;
}
}
else
{
uint8_t x_60; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_60 = !lean_is_exclusive(x_51);
if (x_60 == 0)
{
return x_51;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_51, 0);
x_62 = lean_ctor_get(x_51, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_51);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
default: 
{
uint8_t x_64; lean_object* x_65; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_64 = 0;
x_65 = lean_box(x_64);
lean_ctor_set(x_24, 0, x_65);
return x_24;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_66; lean_object* x_67; 
lean_free_object(x_24);
x_66 = lean_ctor_get(x_2, 0);
lean_inc(x_66);
lean_dec(x_2);
x_67 = l_Lean_Meta_Match_Unify_assign(x_66, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_67;
}
else
{
uint8_t x_68; lean_object* x_69; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_68 = 0;
x_69 = lean_box(x_68);
lean_ctor_set(x_24, 0, x_69);
return x_24;
}
}
}
}
}
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_70 = lean_ctor_get(x_24, 0);
x_71 = lean_ctor_get(x_24, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_24);
x_72 = lean_expr_eqv(x_1, x_19);
if (x_72 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_70;
x_9 = x_71;
goto _start;
}
else
{
uint8_t x_74; 
x_74 = lean_expr_eqv(x_2, x_70);
if (x_74 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_70;
x_9 = x_71;
goto _start;
}
else
{
lean_dec(x_70);
lean_dec(x_19);
switch (lean_obj_tag(x_1)) {
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_1, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_2, 0);
lean_inc(x_77);
x_78 = l_Lean_Meta_Match_Unify_assign(x_76, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_79);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l_Lean_Meta_Match_Unify_assign(x_77, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_81);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_77);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_84 = x_78;
} else {
 lean_dec_ref(x_78);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_79);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_1, 0);
lean_inc(x_86);
lean_dec(x_1);
x_87 = l_Lean_Meta_Match_Unify_assign(x_86, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_87;
}
}
case 5:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_2, 0);
lean_inc(x_88);
lean_dec(x_2);
x_89 = l_Lean_Meta_Match_Unify_assign(x_88, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_89;
}
case 5:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_1, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_1, 1);
lean_inc(x_91);
lean_dec(x_1);
x_92 = lean_ctor_get(x_2, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_2, 1);
lean_inc(x_93);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_94 = l_Lean_Meta_Match_Unify_unify(x_90, x_92, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_unbox(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_98 = x_94;
} else {
 lean_dec_ref(x_94);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_95);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
else
{
lean_object* x_100; 
lean_dec(x_95);
x_100 = lean_ctor_get(x_94, 1);
lean_inc(x_100);
lean_dec(x_94);
x_1 = x_91;
x_2 = x_93;
x_9 = x_100;
goto _start;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_102 = lean_ctor_get(x_94, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_94, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_104 = x_94;
} else {
 lean_dec_ref(x_94);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
default: 
{
uint8_t x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_106 = 0;
x_107 = lean_box(x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_71);
return x_108;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_2, 0);
lean_inc(x_109);
lean_dec(x_2);
x_110 = l_Lean_Meta_Match_Unify_assign(x_109, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_110;
}
else
{
uint8_t x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_111 = 0;
x_112 = lean_box(x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_71);
return x_113;
}
}
}
}
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_114 = !lean_is_exclusive(x_24);
if (x_114 == 0)
{
return x_24;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_24, 0);
x_116 = lean_ctor_get(x_24, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_24);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_118 = !lean_is_exclusive(x_18);
if (x_118 == 0)
{
return x_18;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_18, 0);
x_120 = lean_ctor_get(x_18, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_18);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_122 = !lean_is_exclusive(x_11);
if (x_122 == 0)
{
lean_object* x_123; uint8_t x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_11, 0);
lean_dec(x_123);
x_124 = 1;
x_125 = lean_box(x_124);
lean_ctor_set(x_11, 0, x_125);
return x_11;
}
else
{
lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_11, 1);
lean_inc(x_126);
lean_dec(x_11);
x_127 = 1;
x_128 = lean_box(x_127);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_126);
return x_129;
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_11);
if (x_130 == 0)
{
return x_11;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_11, 0);
x_132 = lean_ctor_get(x_11, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_11);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
block_148:
{
if (x_135 == 0)
{
x_10 = x_136;
goto block_134;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_inc(x_1);
x_137 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_137, 0, x_1);
x_138 = l_Lean_KernelException_toMessageData___closed__15;
x_139 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l_Lean_Meta_isLevelDefEqAux___closed__5;
x_141 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
lean_inc(x_2);
x_142 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_142, 0, x_2);
x_143 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_138);
x_145 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_146 = l_Lean_addTrace___at_Lean_Meta_Match_Unify_assign___spec__1(x_145, x_144, x_3, x_4, x_5, x_6, x_7, x_8, x_136);
x_147 = lean_ctor_get(x_146, 1);
lean_inc(x_147);
lean_dec(x_146);
x_10 = x_147;
goto block_134;
}
}
}
}
lean_object* l_Lean_Meta_Match_Unify_unify___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Match_Unify_unify(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_instReprBool___closed__2;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_instReprBool___closed__4;
return x_3;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to unify ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_instantiateMVars(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Meta_instantiateMVars(x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_st_ref_get(x_7, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_mk_ref(x_15, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_21 = l_Lean_Meta_Match_Unify_unify(x_10, x_13, x_1, x_19, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_7, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_st_ref_get(x_19, x_25);
lean_dec(x_19);
x_27 = lean_unbox(x_22);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
x_54 = lean_st_ref_get(x_7, x_28);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_ctor_get_uint8(x_56, sizeof(void*)*1);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = 0;
x_30 = x_59;
x_31 = x_58;
goto block_53;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
lean_dec(x_54);
x_61 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_62 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_61, x_4, x_5, x_6, x_7, x_60);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unbox(x_63);
lean_dec(x_63);
x_30 = x_65;
x_31 = x_64;
goto block_53;
}
block_53:
{
if (x_30 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_29;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_29);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_10);
x_35 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Meta_isLevelDefEqAux___closed__5;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_unbox(x_22);
lean_dec(x_22);
x_40 = l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1(x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_KernelException_toMessageData___closed__15;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_46 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_45, x_44, x_4, x_5, x_6, x_7, x_31);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = lean_box(0);
lean_ctor_set(x_46, 0, x_49);
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_66 = !lean_is_exclusive(x_26);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_26, 0);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_26, 0, x_68);
return x_26;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_26, 0);
x_70 = lean_ctor_get(x_26, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_26);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_69);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_73 = !lean_is_exclusive(x_21);
if (x_73 == 0)
{
return x_21;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_21, 0);
x_75 = lean_ctor_get(x_21, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_21);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_77 = !lean_is_exclusive(x_12);
if (x_77 == 0)
{
return x_12;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_12, 0);
x_79 = lean_ctor_get(x_12, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_12);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_81 = !lean_is_exclusive(x_9);
if (x_81 == 0)
{
return x_9;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_9, 0);
x_83 = lean_ctor_get(x_9, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_9);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Std_fmt___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___spec__1(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_3(x_2, x_1, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 < x_1;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = x_3;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = x_12;
x_16 = l_Lean_Expr_fvarId_x21(x_15);
lean_dec(x_15);
lean_inc(x_4);
x_17 = l_Lean_Meta_getLocalDecl(x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_14, x_2, x_22);
x_2 = x_21;
x_3 = x_23;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Lean_LocalDecl_fvarId(x_6);
x_9 = l_Std_AssocList_contains___at_Lean_Meta_FVarSubst_contains___spec__1(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = l_Lean_LocalDecl_fvarId(x_12);
x_15 = l_Std_AssocList_contains___at_Lean_Meta_FVarSubst_contains___spec__1(x_14, x_1);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_3);
x_2 = x_13;
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_LocalDecl_applyFVarSubst(x_1, x_5);
x_8 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_LocalDecl_applyFVarSubst(x_1, x_9);
x_12 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_Match_Pattern_applyFVarSubst(x_1, x_5);
x_8 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_Match_Pattern_applyFVarSubst(x_1, x_9);
x_12 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Expr_fvarId_x21(x_6);
lean_dec(x_6);
x_9 = l_Lean_Meta_FVarSubst_get(x_1, x_8);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_1, x_2, x_7);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = 0;
x_13 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_11, x_12, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; 
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_16);
return x_3;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_19 = l_Lean_Expr_fvarId_x21(x_17);
lean_dec(x_17);
x_20 = l_Lean_Meta_FVarSubst_get(x_1, x_19);
x_21 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_1, x_2, x_18);
if (lean_obj_tag(x_20) == 1)
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = 0;
x_24 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_inLocalDecls___spec__1(x_22, x_23, x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_20);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_22);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_21);
return x_30;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = l_Lean_mkAppN(x_1, x_5);
lean_inc(x_3);
x_13 = l_Lean_Meta_Match_Alt_replaceFVarId(x_2, x_12, x_3);
x_14 = lean_array_get_size(x_5);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
lean_inc(x_5);
x_16 = x_5;
x_17 = lean_box_usize(x_15);
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1;
x_19 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1___boxed), 8, 3);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
lean_closure_set(x_19, 2, x_16);
x_20 = x_19;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_21 = lean_apply_5(x_20, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_array_to_list(lean_box(0), x_22);
x_25 = lean_ctor_get(x_13, 3);
lean_inc(x_25);
x_26 = l_List_append___rarg(x_24, x_25);
x_27 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f(x_26, x_6, x_4, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_27, 0, x_31);
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_27, 0);
lean_dec(x_36);
x_37 = !lean_is_exclusive(x_28);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_38 = lean_ctor_get(x_28, 0);
x_39 = lean_box(0);
x_40 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(x_38, x_26, x_39);
x_41 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_38, x_40);
x_42 = lean_ctor_get(x_13, 4);
lean_inc(x_42);
x_43 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_38, x_42);
x_44 = lean_ctor_get(x_13, 2);
lean_inc(x_44);
lean_dec(x_13);
x_45 = l_Lean_Meta_FVarSubst_apply(x_38, x_44);
x_46 = lean_array_to_list(lean_box(0), x_5);
x_47 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_38, x_41, x_46);
lean_dec(x_38);
x_48 = lean_ctor_get(x_3, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_3, 1);
lean_inc(x_49);
lean_dec(x_3);
x_50 = l_List_append___rarg(x_47, x_43);
x_51 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_45);
lean_ctor_set(x_51, 3, x_41);
lean_ctor_set(x_51, 4, x_50);
lean_ctor_set(x_28, 0, x_51);
return x_27;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_52 = lean_ctor_get(x_28, 0);
lean_inc(x_52);
lean_dec(x_28);
x_53 = lean_box(0);
x_54 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(x_52, x_26, x_53);
x_55 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_52, x_54);
x_56 = lean_ctor_get(x_13, 4);
lean_inc(x_56);
x_57 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_52, x_56);
x_58 = lean_ctor_get(x_13, 2);
lean_inc(x_58);
lean_dec(x_13);
x_59 = l_Lean_Meta_FVarSubst_apply(x_52, x_58);
x_60 = lean_array_to_list(lean_box(0), x_5);
x_61 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_52, x_55, x_60);
lean_dec(x_52);
x_62 = lean_ctor_get(x_3, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_3, 1);
lean_inc(x_63);
lean_dec(x_3);
x_64 = l_List_append___rarg(x_61, x_57);
x_65 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_65, 2, x_59);
lean_ctor_set(x_65, 3, x_55);
lean_ctor_set(x_65, 4, x_64);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_27, 0, x_66);
return x_27;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_67 = lean_ctor_get(x_27, 1);
lean_inc(x_67);
lean_dec(x_27);
x_68 = lean_ctor_get(x_28, 0);
lean_inc(x_68);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_69 = x_28;
} else {
 lean_dec_ref(x_28);
 x_69 = lean_box(0);
}
x_70 = lean_box(0);
x_71 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(x_68, x_26, x_70);
x_72 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_68, x_71);
x_73 = lean_ctor_get(x_13, 4);
lean_inc(x_73);
x_74 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_68, x_73);
x_75 = lean_ctor_get(x_13, 2);
lean_inc(x_75);
lean_dec(x_13);
x_76 = l_Lean_Meta_FVarSubst_apply(x_68, x_75);
x_77 = lean_array_to_list(lean_box(0), x_5);
x_78 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_68, x_72, x_77);
lean_dec(x_68);
x_79 = lean_ctor_get(x_3, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_3, 1);
lean_inc(x_80);
lean_dec(x_3);
x_81 = l_List_append___rarg(x_78, x_74);
x_82 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
lean_ctor_set(x_82, 2, x_76);
lean_ctor_set(x_82, 3, x_72);
lean_ctor_set(x_82, 4, x_81);
if (lean_is_scalar(x_69)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_69;
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_67);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_3);
x_85 = !lean_is_exclusive(x_27);
if (x_85 == 0)
{
return x_27;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_27, 0);
x_87 = lean_ctor_get(x_27, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_27);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_89 = !lean_is_exclusive(x_21);
if (x_89 == 0)
{
return x_21;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_21, 0);
x_91 = lean_ctor_get(x_21, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_21);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_getLocalDecl(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_1);
x_12 = l_Lean_mkFVar(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_inferType(x_12, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Meta_whnfD(x_14, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_17);
x_19 = l_Lean_Meta_getInductiveUniverseAndParams(x_17, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_mkConst(x_2, x_22);
x_25 = l_Lean_mkAppN(x_24, x_23);
lean_dec(x_23);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_25);
x_26 = l_Lean_Meta_inferType(x_25, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2), 11, 4);
lean_closure_set(x_29, 0, x_25);
lean_closure_set(x_29, 1, x_1);
lean_closure_set(x_29, 2, x_3);
lean_closure_set(x_29, 3, x_17);
x_30 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_27, x_29, x_5, x_6, x_7, x_8, x_28);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_19);
if (x_35 == 0)
{
return x_19;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_19, 0);
x_37 = lean_ctor_get(x_19, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_19);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_13);
if (x_43 == 0)
{
return x_13;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_13, 0);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_13);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_10);
if (x_47 == 0)
{
return x_10;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_10, 0);
x_49 = lean_ctor_get(x_10, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_10);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3___boxed), 9, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_1);
x_11 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1;
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_10);
x_13 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_9, x_12, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_inferType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Meta_whnfD(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Expr_getAppFn(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 4)
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_15, x_2, x_3, x_4, x_5, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 5)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_17);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_16, 0);
lean_dec(x_27);
x_28 = lean_box(0);
lean_ctor_set(x_16, 0, x_28);
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_dec(x_16);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_box(0);
lean_ctor_set(x_10, 0, x_36);
return x_10;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_10, 0);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_10);
x_39 = l_Lean_Expr_getAppFn(x_37);
lean_dec(x_37);
if (lean_obj_tag(x_39) == 4)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_40, x_2, x_3, x_4, x_5, x_38);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 5)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
if (lean_is_scalar(x_44)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_44;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_43);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_42);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_41, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_41, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_54 = x_41;
} else {
 lean_dec_ref(x_41);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_39);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_38);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_10);
if (x_58 == 0)
{
return x_10;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_10, 0);
x_60 = lean_ctor_get(x_10, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_10);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_7);
if (x_62 == 0)
{
return x_7;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_7, 0);
x_64 = lean_ctor_get(x_7, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_7);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_7, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_ctor_get_uint8(x_19, sizeof(void*)*5);
lean_dec(x_19);
x_21 = lean_box(x_20);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_ctor_get(x_8, 0);
lean_inc(x_23);
lean_dec(x_8);
x_24 = lean_ctor_get_uint8(x_23, sizeof(void*)*5);
lean_dec(x_23);
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_7);
if (x_27 == 0)
{
return x_7;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_7);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_processInaccessibleAsCtor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_apply_3(x_2, x_5, x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_processInaccessibleAsCtor_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 3);
x_10 = l_Lean_replaceRef(x_1, x_9);
lean_dec(x_9);
lean_ctor_set(x_5, 3, x_10);
x_11 = l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2(x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_ctor_get(x_5, 2);
x_15 = lean_ctor_get(x_5, 3);
x_16 = lean_ctor_get(x_5, 4);
x_17 = lean_ctor_get(x_5, 5);
x_18 = lean_ctor_get(x_5, 6);
x_19 = lean_ctor_get(x_5, 7);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_20 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_21, 0, x_12);
lean_ctor_set(x_21, 1, x_13);
lean_ctor_set(x_21, 2, x_14);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_16);
lean_ctor_set(x_21, 5, x_17);
lean_ctor_set(x_21, 6, x_18);
lean_ctor_set(x_21, 7, x_19);
x_22 = l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2(x_2, x_3, x_4, x_21, x_6, x_7);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("dependent match elimination failed, inaccessible pattern found");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nconstructor expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Expr_constructorApp_x3f(x_1, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_16 = l_Lean_Meta_Match_Pattern_toMessageData(x_2);
x_17 = l_Lean_indentD(x_16);
x_18 = l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1(x_3, x_21, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_name_eq(x_28, x_4);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_25);
lean_free_object(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_14);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_25, 3);
lean_inc(x_32);
lean_dec(x_25);
x_33 = lean_array_get_size(x_26);
x_34 = l_Array_extract___rarg(x_26, x_32, x_33);
x_35 = lean_array_to_list(lean_box(0), x_34);
x_36 = l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(x_35);
x_37 = l_List_append___rarg(x_36, x_5);
x_38 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_6);
lean_ctor_set(x_38, 2, x_7);
lean_ctor_set(x_38, 3, x_8);
lean_ctor_set(x_38, 4, x_37);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_15);
lean_ctor_set(x_39, 1, x_14);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_name_eq(x_44, x_4);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_14);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_41, 3);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_array_get_size(x_42);
x_50 = l_Array_extract___rarg(x_42, x_48, x_49);
x_51 = lean_array_to_list(lean_box(0), x_50);
x_52 = l_List_map___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__3(x_51);
x_53 = l_List_append___rarg(x_52, x_5);
x_54 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_54, 0, x_3);
lean_ctor_set(x_54, 1, x_6);
lean_ctor_set(x_54, 2, x_7);
lean_ctor_set(x_54, 3, x_8);
lean_ctor_set(x_54, 4, x_53);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_14);
return x_56;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.Match.processInaccessibleAsCtor");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1;
x_3 = lean_unsigned_to_nat(313u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inaccessible in ctor step ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_12 = l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2;
x_13 = lean_panic_fn(x_11, x_12);
x_14 = lean_apply_5(x_13, x_3, x_4, x_5, x_6, x_10);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_31; lean_object* x_32; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_dec(x_9);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
x_42 = lean_st_ref_get(x_6, x_17);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_43, 3);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*1);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = 0;
x_31 = x_47;
x_32 = x_46;
goto block_41;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_dec(x_42);
x_49 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_50 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_49, x_3, x_4, x_5, x_6, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_unbox(x_51);
lean_dec(x_51);
x_31 = x_53;
x_32 = x_52;
goto block_41;
}
block_30:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_alloc_closure((void*)(l_Lean_Meta_whnfD), 6, 1);
lean_closure_set(x_26, 0, x_23);
lean_inc(x_21);
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___boxed), 14, 8);
lean_closure_set(x_27, 0, x_24);
lean_closure_set(x_27, 1, x_15);
lean_closure_set(x_27, 2, x_18);
lean_closure_set(x_27, 3, x_2);
lean_closure_set(x_27, 4, x_22);
lean_closure_set(x_27, 5, x_19);
lean_closure_set(x_27, 6, x_20);
lean_closure_set(x_27, 7, x_21);
x_28 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
x_29 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_21, x_28, x_3, x_4, x_5, x_6, x_25);
return x_29;
}
block_41:
{
if (x_31 == 0)
{
x_25 = x_32;
goto block_30;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_inc(x_23);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_23);
x_34 = l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_KernelException_toMessageData___closed__15;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_39 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_38, x_37, x_3, x_4, x_5, x_6, x_32);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_25 = x_40;
goto block_30;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_ctor_get(x_8, 1);
lean_inc(x_54);
lean_dec(x_8);
x_55 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_56 = l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2;
x_57 = lean_panic_fn(x_55, x_56);
x_58 = lean_apply_5(x_57, x_3, x_4, x_5, x_6, x_54);
return x_58;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwErrorAt___at_Lean_Meta_Match_processInaccessibleAsCtor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
x_2 = x_4;
goto _start;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 3);
x_3 = 0;
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("the dependent pattern matcher can solve the following kinds of equations\n");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("- <var> = <term> and <term> = <var>\n");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("- <term> = <term> where the terms are definitionally equal\n");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("- <constructor> = <constructor>, examples: List.cons x xs = List.cons y ys, and List.cons x xs = List.nil");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" after processing");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample(x_1);
x_11 = l_Lean_KernelException_toMessageData___closed__15;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
if (x_10 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_14 = l_Lean_Meta_assumption___closed__1;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_2, 1, x_25);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_7);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_27 = lean_ctor_get(x_1, 3);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l_Lean_Meta_Match_examplesToMessageData(x_27);
x_29 = l_Lean_indentD(x_28);
x_30 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_11);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_13);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_2, 1, x_43);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_7);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_2, 0);
x_46 = lean_ctor_get(x_2, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_2);
x_47 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNonTrivialExample(x_1);
x_48 = l_Lean_KernelException_toMessageData___closed__15;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
if (x_47 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_1);
x_51 = l_Lean_Meta_assumption___closed__1;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6;
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12;
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_45);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_7);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_65 = lean_ctor_get(x_1, 3);
lean_inc(x_65);
lean_dec(x_1);
x_66 = l_Lean_Meta_Match_examplesToMessageData(x_65);
x_67 = l_Lean_indentD(x_66);
x_68 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_48);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_50);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3;
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6;
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9;
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12;
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_45);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_7);
return x_83;
}
}
}
else
{
lean_object* x_84; 
lean_dec(x_1);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_2);
lean_ctor_set(x_84, 1, x_7);
return x_84;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_Cases_cases(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
x_23 = lean_ctor_get(x_4, 2);
lean_inc(x_23);
x_24 = l_List_isEmpty___rarg(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_free_object(x_10);
x_25 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg(x_4, x_21, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_30 = l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1;
lean_ctor_set_tag(x_10, 0);
lean_ctor_set(x_10, 0, x_30);
return x_10;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_ctor_get(x_4, 2);
lean_inc(x_33);
x_34 = l_List_isEmpty___rarg(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg(x_4, x_31, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
if (lean_is_scalar(x_38)) {
 x_39 = lean_alloc_ctor(1, 2, 0);
} else {
 x_39 = x_38;
}
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_40 = l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_32);
return x_41;
}
}
}
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_6(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_33; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1), 9, 4);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
lean_closure_set(x_11, 3, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__2), 7, 1);
lean_closure_set(x_12, 0, x_2);
x_13 = lean_st_ref_get(x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_9, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_7, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_33 = l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(x_11, x_12, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_setEnv___at_Lean_Meta_orelse___spec__1(x_16, x_6, x_7, x_8, x_9, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_Meta_setMCtx(x_22, x_6, x_7, x_8, x_9, x_37);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_45 = !lean_is_exclusive(x_33);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_33, 0);
lean_dec(x_46);
x_47 = !lean_is_exclusive(x_34);
if (x_47 == 0)
{
return x_33;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_34, 0);
lean_inc(x_48);
lean_dec(x_34);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_33, 0, x_49);
return x_33;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_33, 1);
lean_inc(x_50);
lean_dec(x_33);
x_51 = lean_ctor_get(x_34, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_52 = x_34;
} else {
 lean_dec_ref(x_34);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 1, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_33, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_33, 1);
lean_inc(x_56);
lean_dec(x_33);
x_23 = x_55;
x_24 = x_56;
goto block_32;
}
block_32:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = l_Lean_setEnv___at_Lean_Meta_orelse___spec__1(x_16, x_6, x_7, x_8, x_9, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Meta_setMCtx(x_22, x_6, x_7, x_8, x_9, x_26);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_23);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = l_Lean_Meta_FVarSubst_apply(x_8, x_5);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_13, 2);
x_15 = l_Lean_Meta_FVarSubst_apply(x_14, x_11);
x_16 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(x_5);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_box(1);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(x_11);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Expr_fvarId_x21(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_array_to_list(lean_box(0), x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(x_11);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_Match_Example_replaceFVarId(x_8, x_14, x_6);
lean_dec(x_14);
lean_dec(x_8);
x_16 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_16);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_19 = l_Lean_Expr_fvarId_x21(x_1);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_array_to_list(lean_box(0), x_21);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
x_24 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__3(x_22);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Meta_Match_Example_replaceFVarId(x_19, x_25, x_17);
lean_dec(x_25);
lean_dec(x_19);
x_27 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(x_1, x_2, x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = l_Lean_Meta_Match_Example_applyFVarSubst(x_8, x_5);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_13, 2);
x_15 = l_Lean_Meta_Match_Example_applyFVarSubst(x_14, x_11);
x_16 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
case 1:
{
lean_object* x_14; 
lean_dec(x_10);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
case 2:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_name_eq(x_17, x_1);
lean_dec(x_17);
if (x_18 == 0)
{
lean_free_object(x_6);
lean_dec(x_5);
x_2 = x_16;
goto _start;
}
else
{
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_16;
x_3 = x_6;
goto _start;
}
}
default: 
{
lean_object* x_21; 
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_5);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_2 = x_21;
goto _start;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
switch (lean_obj_tag(x_23)) {
case 0:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_3);
x_2 = x_24;
x_3 = x_25;
goto _start;
}
case 1:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_5);
lean_ctor_set(x_28, 1, x_3);
x_2 = x_27;
x_3 = x_28;
goto _start;
}
case 2:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_2, 1);
lean_inc(x_30);
lean_dec(x_2);
x_31 = lean_ctor_get(x_23, 0);
lean_inc(x_31);
lean_dec(x_23);
x_32 = lean_name_eq(x_31, x_1);
lean_dec(x_31);
if (x_32 == 0)
{
lean_dec(x_5);
x_2 = x_30;
goto _start;
}
else
{
lean_object* x_34; 
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_5);
lean_ctor_set(x_34, 1, x_3);
x_2 = x_30;
x_3 = x_34;
goto _start;
}
}
default: 
{
lean_object* x_36; 
lean_dec(x_23);
lean_dec(x_5);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
lean_dec(x_2);
x_2 = x_36;
goto _start;
}
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_8, x_5);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_13, 2);
x_15 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_14, x_11);
x_16 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processConstructor");
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1;
x_3 = lean_unsigned_to_nat(381u);
x_4 = lean_unsigned_to_nat(48u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_12 = x_2;
} else {
 lean_dec_ref(x_2);
 x_12 = lean_box(0);
}
x_20 = lean_ctor_get(x_10, 4);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
x_21 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_22 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2;
x_23 = lean_panic_fn(x_21, x_22);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_apply_5(x_23, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_13 = x_25;
x_14 = x_26;
goto block_19;
}
else
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_20, 0);
lean_inc(x_31);
switch (lean_obj_tag(x_31)) {
case 0:
{
lean_object* x_32; 
lean_dec(x_31);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_32 = l_Lean_Meta_Match_processInaccessibleAsCtor(x_10, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_13 = x_33;
x_14 = x_34;
goto block_19;
}
else
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
case 1:
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_10);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_10, 4);
lean_dec(x_40);
x_41 = lean_ctor_get(x_20, 1);
lean_inc(x_41);
lean_dec(x_20);
x_42 = lean_ctor_get(x_31, 0);
lean_inc(x_42);
lean_dec(x_31);
lean_ctor_set(x_10, 4, x_41);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_43 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f(x_10, x_42, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_13 = x_44;
x_14 = x_45;
goto block_19;
}
else
{
uint8_t x_46; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_43);
if (x_46 == 0)
{
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_50 = lean_ctor_get(x_10, 0);
x_51 = lean_ctor_get(x_10, 1);
x_52 = lean_ctor_get(x_10, 2);
x_53 = lean_ctor_get(x_10, 3);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_10);
x_54 = lean_ctor_get(x_20, 1);
lean_inc(x_54);
lean_dec(x_20);
x_55 = lean_ctor_get(x_31, 0);
lean_inc(x_55);
lean_dec(x_31);
x_56 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_56, 0, x_50);
lean_ctor_set(x_56, 1, x_51);
lean_ctor_set(x_56, 2, x_52);
lean_ctor_set(x_56, 3, x_53);
lean_ctor_set(x_56, 4, x_54);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_57 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f(x_56, x_55, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_13 = x_58;
x_14 = x_59;
goto block_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
case 2:
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_10);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_10, 4);
lean_dec(x_65);
x_66 = lean_ctor_get(x_20, 1);
lean_inc(x_66);
lean_dec(x_20);
x_67 = lean_ctor_get(x_31, 3);
lean_inc(x_67);
lean_dec(x_31);
x_68 = l_List_append___rarg(x_67, x_66);
lean_ctor_set(x_10, 4, x_68);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_10);
x_13 = x_69;
x_14 = x_8;
goto block_19;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_10, 0);
x_71 = lean_ctor_get(x_10, 1);
x_72 = lean_ctor_get(x_10, 2);
x_73 = lean_ctor_get(x_10, 3);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_10);
x_74 = lean_ctor_get(x_20, 1);
lean_inc(x_74);
lean_dec(x_20);
x_75 = lean_ctor_get(x_31, 3);
lean_inc(x_75);
lean_dec(x_31);
x_76 = l_List_append___rarg(x_75, x_74);
x_77 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_77, 0, x_70);
lean_ctor_set(x_77, 1, x_71);
lean_ctor_set(x_77, 2, x_72);
lean_ctor_set(x_77, 3, x_73);
lean_ctor_set(x_77, 4, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_13 = x_78;
x_14 = x_8;
goto block_19;
}
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_31);
lean_dec(x_20);
lean_dec(x_10);
x_79 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_80 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2;
x_81 = lean_panic_fn(x_79, x_80);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_82 = lean_apply_5(x_81, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_13 = x_83;
x_14 = x_84;
goto block_19;
}
else
{
uint8_t x_85; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_82);
if (x_85 == 0)
{
return x_82;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_82, 0);
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_82);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
}
block_19:
{
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_12);
x_2 = x_11;
x_8 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
if (lean_is_scalar(x_12)) {
 x_17 = lean_alloc_ctor(1, 2, 0);
} else {
 x_17 = x_12;
}
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_11;
x_3 = x_17;
x_8 = x_14;
goto _start;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_13 = x_6;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_15 = lean_array_uget(x_6, x_5);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_6, x_5, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_to_list(lean_box(0), x_21);
lean_inc(x_3);
x_23 = l_List_append___rarg(x_22, x_3);
x_24 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(x_18, x_23);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 3);
lean_inc(x_26);
lean_inc(x_18);
x_27 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(x_2, x_18, x_26);
x_28 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(x_18, x_27);
x_29 = lean_ctor_get(x_1, 2);
lean_inc(x_29);
x_30 = lean_box(0);
x_31 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6(x_25, x_29, x_30);
x_32 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(x_18, x_31);
lean_dec(x_18);
x_33 = l_List_reverse___rarg(x_32);
x_34 = lean_alloc_closure((void*)(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8), 8, 3);
lean_closure_set(x_34, 0, x_25);
lean_closure_set(x_34, 1, x_33);
lean_closure_set(x_34, 2, x_30);
lean_inc(x_20);
x_35 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___lambda__1___boxed), 9, 3);
lean_closure_set(x_35, 0, x_20);
lean_closure_set(x_35, 1, x_24);
lean_closure_set(x_35, 2, x_28);
x_36 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_36, 0, x_34);
lean_closure_set(x_36, 1, x_35);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_37 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_20, x_36, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 1;
x_41 = x_5 + x_40;
x_42 = x_38;
x_43 = lean_array_uset(x_17, x_5, x_42);
x_5 = x_41;
x_6 = x_43;
x_11 = x_39;
goto _start;
}
else
{
uint8_t x_45; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Array_isEmpty___rarg(x_4);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_List_isEmpty___rarg(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasRecursiveType), 6, 1);
lean_closure_set(x_14, 0, x_2);
x_15 = l_Lean_Meta_Match_withGoalOf___rarg(x_3, x_14, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_4);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_15, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_15, 0, x_26);
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_4);
x_30 = !lean_is_exclusive(x_15);
if (x_30 == 0)
{
return x_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1;
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_9);
return x_35;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1;
x_3 = lean_unsigned_to_nat(334u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("constructor step");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_57; lean_object* x_58; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_st_ref_get(x_5, x_6);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_69, 3);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get_uint8(x_70, sizeof(void*)*1);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_68, 1);
lean_inc(x_72);
lean_dec(x_68);
x_73 = 0;
x_57 = x_73;
x_58 = x_72;
goto block_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_74 = lean_ctor_get(x_68, 1);
lean_inc(x_74);
lean_dec(x_68);
x_75 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_76 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_75, x_2, x_3, x_4, x_5, x_74);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_unbox(x_77);
lean_dec(x_77);
x_57 = x_79;
x_58 = x_78;
goto block_67;
}
block_56:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1;
x_11 = lean_panic_fn(x_9, x_10);
x_12 = lean_apply_5(x_11, x_2, x_3, x_4, x_5, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
lean_inc(x_1);
lean_inc(x_16);
lean_inc(x_14);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___boxed), 9, 3);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_16);
lean_closure_set(x_18, 2, x_1);
x_19 = l_Lean_Expr_fvarId_x21(x_16);
x_20 = l_Array_empty___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_1);
x_21 = l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1(x_1, x_18, x_13, x_19, x_20, x_2, x_3, x_4, x_5, x_7);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_1, 3);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 2);
lean_dec(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 0);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_21, 0);
lean_dec(x_29);
lean_ctor_set(x_1, 1, x_17);
x_30 = l_Lean_mkOptionalNode___closed__2;
x_31 = lean_array_push(x_30, x_1);
lean_ctor_set(x_21, 0, x_31);
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_21, 1);
lean_inc(x_32);
lean_dec(x_21);
lean_ctor_set(x_1, 1, x_17);
x_33 = l_Lean_mkOptionalNode___closed__2;
x_34 = lean_array_push(x_33, x_1);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_1);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_37 = x_21;
} else {
 lean_dec_ref(x_21);
 x_37 = lean_box(0);
}
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_13);
lean_ctor_set(x_38, 1, x_17);
lean_ctor_set(x_38, 2, x_14);
lean_ctor_set(x_38, 3, x_15);
x_39 = l_Lean_mkOptionalNode___closed__2;
x_40 = lean_array_push(x_39, x_38);
if (lean_is_scalar(x_37)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_37;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_42 = lean_ctor_get(x_21, 1);
lean_inc(x_42);
lean_dec(x_21);
x_43 = lean_ctor_get(x_22, 0);
lean_inc(x_43);
lean_dec(x_22);
x_44 = lean_array_get_size(x_43);
x_45 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_46 = x_43;
x_47 = lean_box_usize(x_45);
x_48 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1;
x_49 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9___boxed), 11, 6);
lean_closure_set(x_49, 0, x_1);
lean_closure_set(x_49, 1, x_16);
lean_closure_set(x_49, 2, x_17);
lean_closure_set(x_49, 3, x_47);
lean_closure_set(x_49, 4, x_48);
lean_closure_set(x_49, 5, x_46);
x_50 = x_49;
x_51 = lean_apply_5(x_50, x_2, x_3, x_4, x_5, x_42);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_21);
if (x_52 == 0)
{
return x_21;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_21, 0);
x_54 = lean_ctor_get(x_21, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_21);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
block_67:
{
if (x_57 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_st_ref_get(x_5, x_58);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_7 = x_60;
goto block_56;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_62 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3;
x_63 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_61, x_62, x_2, x_3, x_4, x_5, x_58);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_st_ref_get(x_5, x_64);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_7 = x_66;
goto block_56;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__5(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__6(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__9(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_1);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_3, x_9, x_8);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 3);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_apply_5(x_2, x_12, x_13, x_14, x_15, x_11);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_4, x_7, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_8, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_3, x_6, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processNonVariable");
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1;
x_3 = lean_unsigned_to_nat(411u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compile pattern matching, unexpected pattern");
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\ndiscriminant");
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_12 = x_2;
} else {
 lean_dec_ref(x_2);
 x_12 = lean_box(0);
}
x_20 = lean_ctor_get(x_10, 4);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
x_21 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_22 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2;
x_23 = lean_panic_fn(x_21, x_22);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_apply_5(x_23, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_13 = x_25;
x_14 = x_26;
goto block_19;
}
else
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_20, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
x_35 = lean_ctor_get(x_10, 2);
x_36 = lean_ctor_get(x_10, 3);
x_37 = lean_ctor_get(x_10, 4);
lean_dec(x_37);
x_38 = lean_ctor_get(x_20, 1);
lean_inc(x_38);
lean_dec(x_20);
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
lean_dec(x_31);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_40 = l_Lean_Meta_isExprDefEq(x_1, x_39, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_38);
lean_free_object(x_10);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_box(0);
x_13 = x_44;
x_14 = x_43;
goto block_19;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
lean_ctor_set(x_10, 4, x_38);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_10);
x_13 = x_46;
x_14 = x_45;
goto block_19;
}
}
else
{
uint8_t x_47; 
lean_dec(x_38);
lean_free_object(x_10);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_40);
if (x_47 == 0)
{
return x_40;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_40, 0);
x_49 = lean_ctor_get(x_40, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_40);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_10, 0);
x_52 = lean_ctor_get(x_10, 1);
x_53 = lean_ctor_get(x_10, 2);
x_54 = lean_ctor_get(x_10, 3);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_10);
x_55 = lean_ctor_get(x_20, 1);
lean_inc(x_55);
lean_dec(x_20);
x_56 = lean_ctor_get(x_31, 0);
lean_inc(x_56);
lean_dec(x_31);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_57 = l_Lean_Meta_isExprDefEq(x_1, x_56, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_box(0);
x_13 = x_61;
x_14 = x_60;
goto block_19;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_57, 1);
lean_inc(x_62);
lean_dec(x_57);
x_63 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_63, 0, x_51);
lean_ctor_set(x_63, 1, x_52);
lean_ctor_set(x_63, 2, x_53);
lean_ctor_set(x_63, 3, x_54);
lean_ctor_set(x_63, 4, x_55);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_13 = x_64;
x_14 = x_62;
goto block_19;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_65 = lean_ctor_get(x_57, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_57, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_67 = x_57;
} else {
 lean_dec_ref(x_57);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
x_69 = l_Lean_Meta_Match_Pattern_toMessageData(x_31);
x_70 = l_Lean_indentD(x_69);
x_71 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4;
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_indentExpr(x_1);
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Lean_KernelException_toMessageData___closed__15;
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1(x_78, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_80 = !lean_is_exclusive(x_79);
if (x_80 == 0)
{
return x_79;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_79, 0);
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_79);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
block_19:
{
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_12);
x_2 = x_11;
x_8 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
if (lean_is_scalar(x_12)) {
 x_17 = lean_alloc_ctor(1, 2, 0);
} else {
 x_17 = x_12;
}
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_11;
x_3 = x_17;
x_8 = x_14;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1;
x_3 = lean_unsigned_to_nat(400u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compile pattern matching, inaccessible pattern or constructor expected");
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_12 = x_2;
} else {
 lean_dec_ref(x_2);
 x_12 = lean_box(0);
}
x_20 = lean_ctor_get(x_10, 4);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
x_21 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_22 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1;
x_23 = lean_panic_fn(x_21, x_22);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_apply_5(x_23, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_13 = x_25;
x_14 = x_26;
goto block_19;
}
else
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_20, 0);
lean_inc(x_31);
switch (lean_obj_tag(x_31)) {
case 0:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_20);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_34 = l_Lean_Meta_Match_processInaccessibleAsCtor(x_10, x_33, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_13 = x_35;
x_14 = x_36;
goto block_19;
}
else
{
uint8_t x_37; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 0);
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_34);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
case 2:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_10);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
x_44 = lean_ctor_get(x_10, 2);
x_45 = lean_ctor_get(x_10, 3);
x_46 = lean_ctor_get(x_10, 4);
lean_dec(x_46);
x_47 = lean_ctor_get(x_20, 1);
lean_inc(x_47);
lean_dec(x_20);
x_48 = lean_ctor_get(x_31, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_31, 3);
lean_inc(x_49);
lean_dec(x_31);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_name_eq(x_48, x_51);
lean_dec(x_51);
lean_dec(x_48);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_47);
lean_free_object(x_10);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
x_53 = lean_box(0);
x_13 = x_53;
x_14 = x_8;
goto block_19;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = l_List_append___rarg(x_49, x_47);
lean_ctor_set(x_10, 4, x_54);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_10);
x_13 = x_55;
x_14 = x_8;
goto block_19;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
x_58 = lean_ctor_get(x_10, 2);
x_59 = lean_ctor_get(x_10, 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_60 = lean_ctor_get(x_20, 1);
lean_inc(x_60);
lean_dec(x_20);
x_61 = lean_ctor_get(x_31, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_31, 3);
lean_inc(x_62);
lean_dec(x_31);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_name_eq(x_61, x_64);
lean_dec(x_64);
lean_dec(x_61);
if (x_65 == 0)
{
lean_object* x_66; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
x_66 = lean_box(0);
x_13 = x_66;
x_14 = x_8;
goto block_19;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = l_List_append___rarg(x_62, x_60);
x_68 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_68, 0, x_56);
lean_ctor_set(x_68, 1, x_57);
lean_ctor_set(x_68, 2, x_58);
lean_ctor_set(x_68, 3, x_59);
lean_ctor_set(x_68, 4, x_67);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_13 = x_69;
x_14 = x_8;
goto block_19;
}
}
}
default: 
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_70 = l_Lean_Meta_Match_Pattern_toMessageData(x_31);
x_71 = l_Lean_indentD(x_70);
x_72 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l_Lean_KernelException_toMessageData___closed__15;
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1(x_75, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
return x_76;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_76);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
block_19:
{
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_12);
x_2 = x_11;
x_8 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
if (lean_is_scalar(x_12)) {
 x_17 = lean_alloc_ctor(1, 2, 0);
} else {
 x_17 = x_12;
}
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_11;
x_3 = x_17;
x_8 = x_14;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_5);
x_15 = l_Lean_Expr_constructorApp_x3f(x_14, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_List_reverse___rarg(x_1);
x_17 = lean_box(0);
x_18 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2(x_5, x_16, x_17, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_3);
lean_ctor_set(x_21, 2, x_20);
lean_ctor_set(x_21, 3, x_4);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_4);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_5);
x_30 = lean_ctor_get(x_15, 0);
lean_inc(x_30);
lean_dec(x_15);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_List_reverse___rarg(x_1);
x_34 = lean_box(0);
lean_inc(x_31);
x_35 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3(x_31, x_33, x_34, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_31, 3);
lean_inc(x_38);
lean_dec(x_31);
x_39 = lean_array_get_size(x_32);
x_40 = l_Array_extract___rarg(x_32, x_38, x_39);
x_41 = lean_array_to_list(lean_box(0), x_40);
x_42 = l_List_append___rarg(x_41, x_3);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_2);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_37);
lean_ctor_set(x_43, 3, x_4);
lean_ctor_set(x_35, 0, x_43);
return x_35;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_35, 0);
x_45 = lean_ctor_get(x_35, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_35);
x_46 = lean_ctor_get(x_31, 3);
lean_inc(x_46);
lean_dec(x_31);
x_47 = lean_array_get_size(x_32);
x_48 = l_Array_extract___rarg(x_32, x_46, x_47);
x_49 = lean_array_to_list(lean_box(0), x_48);
x_50 = l_List_append___rarg(x_49, x_3);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_44);
lean_ctor_set(x_51, 3, x_4);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_45);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_35);
if (x_53 == 0)
{
return x_35;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_35, 0);
x_55 = lean_ctor_get(x_35, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_35);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1;
x_3 = lean_unsigned_to_nat(386u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_8 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1;
x_10 = lean_panic_fn(x_8, x_9);
x_11 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_whnfD), 6, 1);
lean_closure_set(x_17, 0, x_15);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___lambda__1), 10, 4);
lean_closure_set(x_18, 0, x_13);
lean_closure_set(x_18, 1, x_12);
lean_closure_set(x_18, 2, x_16);
lean_closure_set(x_18, 3, x_14);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_19, x_2, x_3, x_4, x_5, x_6);
return x_20;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
if (lean_obj_tag(x_7) == 3)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Array_contains___at_Lean_Meta_CheckAssignment_checkFVar___spec__1(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_1, x_9);
x_1 = x_11;
x_2 = x_8;
goto _start;
}
else
{
lean_dec(x_9);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_14; 
lean_dec(x_7);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_2 = x_14;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Array_empty___closed__1;
x_4 = l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues___spec__1(x_3, x_2);
return x_4;
}
}
uint8_t l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 4);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_4) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar(x_5);
if (x_7 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isFirstPatternVar(x_10);
if (x_12 == 0)
{
lean_dec(x_10);
x_1 = x_11;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_1);
x_11 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues(x_1);
x_12 = l_Lean_Expr_fvarId_x21(x_2);
x_13 = lean_array_fget(x_11, x_4);
lean_dec(x_11);
x_14 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Meta_Match_Example_replaceFVarId(x_12, x_14, x_9);
lean_dec(x_14);
lean_dec(x_12);
x_16 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(x_1, x_2, x_3, x_4, lean_box(0), x_10);
lean_ctor_set(x_6, 1, x_16);
lean_ctor_set(x_6, 0, x_15);
return x_6;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
lean_inc(x_1);
x_19 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues(x_1);
x_20 = l_Lean_Expr_fvarId_x21(x_2);
x_21 = lean_array_fget(x_19, x_4);
lean_dec(x_19);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_Meta_Match_Example_replaceFVarId(x_20, x_22, x_17);
lean_dec(x_22);
lean_dec(x_20);
x_24 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(x_1, x_2, x_3, x_4, lean_box(0), x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = l_Lean_Meta_Match_Example_applyFVarSubst(x_7, x_5);
x_9 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 2);
x_13 = l_Lean_Meta_Match_Example_applyFVarSubst(x_12, x_10);
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 1:
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
case 3:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_expr_eqv(x_15, x_1);
lean_dec(x_15);
if (x_16 == 0)
{
lean_free_object(x_6);
lean_dec(x_5);
x_2 = x_14;
goto _start;
}
else
{
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
default: 
{
lean_object* x_19; 
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_5);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
x_2 = x_19;
goto _start;
}
}
}
else
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_6, 0);
lean_inc(x_21);
lean_dec(x_6);
switch (lean_obj_tag(x_21)) {
case 1:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_3);
x_2 = x_22;
x_3 = x_23;
goto _start;
}
case 3:
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_expr_eqv(x_26, x_1);
lean_dec(x_26);
if (x_27 == 0)
{
lean_dec(x_5);
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_5);
lean_ctor_set(x_29, 1, x_3);
x_2 = x_25;
x_3 = x_29;
goto _start;
}
}
default: 
{
lean_object* x_31; 
lean_dec(x_21);
lean_dec(x_5);
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
x_2 = x_31;
goto _start;
}
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = lean_ctor_get(x_4, 2);
x_12 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_11, x_9);
x_13 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(x_1, x_2, x_3, x_4, lean_box(0), x_10);
lean_ctor_set(x_6, 1, x_13);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_ctor_get(x_4, 2);
x_17 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_16, x_14);
x_18 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(x_1, x_2, x_3, x_4, lean_box(0), x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processValue");
return x_1;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1;
x_3 = lean_unsigned_to_nat(449u);
x_4 = lean_unsigned_to_nat(18u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
x_15 = lean_ctor_get(x_10, 2);
x_16 = lean_ctor_get(x_10, 3);
x_17 = lean_ctor_get(x_10, 4);
lean_inc(x_6);
x_18 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(x_1, x_2, x_3, x_4, lean_box(0), x_6, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_free_object(x_10);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
x_19 = l_Lean_Meta_Match_instInhabitedAlt;
x_20 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_21 = lean_panic_fn(x_19, x_20);
lean_ctor_set(x_7, 1, x_18);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; 
lean_free_object(x_7);
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
switch (lean_obj_tag(x_22)) {
case 1:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_17, 1);
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
lean_ctor_set(x_10, 4, x_24);
x_27 = l_Lean_Meta_Match_Alt_replaceFVarId(x_26, x_6, x_10);
lean_ctor_set(x_17, 1, x_18);
lean_ctor_set(x_17, 0, x_27);
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_dec(x_17);
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
lean_dec(x_22);
lean_ctor_set(x_10, 4, x_28);
x_30 = l_Lean_Meta_Match_Alt_replaceFVarId(x_29, x_6, x_10);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_18);
return x_31;
}
}
case 3:
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_6);
x_32 = !lean_is_exclusive(x_17);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_17, 1);
x_34 = lean_ctor_get(x_17, 0);
lean_dec(x_34);
lean_ctor_set(x_10, 4, x_33);
lean_ctor_set(x_17, 1, x_18);
lean_ctor_set(x_17, 0, x_10);
return x_17;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_17, 1);
lean_inc(x_35);
lean_dec(x_17);
lean_ctor_set(x_10, 4, x_35);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_18);
return x_36;
}
}
default: 
{
uint8_t x_37; 
lean_dec(x_22);
lean_free_object(x_10);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
x_37 = !lean_is_exclusive(x_17);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_17, 1);
lean_dec(x_38);
x_39 = lean_ctor_get(x_17, 0);
lean_dec(x_39);
x_40 = l_Lean_Meta_Match_instInhabitedAlt;
x_41 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_42 = lean_panic_fn(x_40, x_41);
lean_ctor_set(x_17, 1, x_18);
lean_ctor_set(x_17, 0, x_42);
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_17);
x_43 = l_Lean_Meta_Match_instInhabitedAlt;
x_44 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_45 = lean_panic_fn(x_43, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_18);
return x_46;
}
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_7, 1);
x_48 = lean_ctor_get(x_10, 0);
x_49 = lean_ctor_get(x_10, 1);
x_50 = lean_ctor_get(x_10, 2);
x_51 = lean_ctor_get(x_10, 3);
x_52 = lean_ctor_get(x_10, 4);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_10);
lean_inc(x_6);
x_53 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(x_1, x_2, x_3, x_4, lean_box(0), x_6, x_47);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_54 = l_Lean_Meta_Match_instInhabitedAlt;
x_55 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_56 = lean_panic_fn(x_54, x_55);
lean_ctor_set(x_7, 1, x_53);
lean_ctor_set(x_7, 0, x_56);
return x_7;
}
else
{
lean_object* x_57; 
lean_free_object(x_7);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
switch (lean_obj_tag(x_57)) {
case 1:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_61, 0, x_48);
lean_ctor_set(x_61, 1, x_49);
lean_ctor_set(x_61, 2, x_50);
lean_ctor_set(x_61, 3, x_51);
lean_ctor_set(x_61, 4, x_58);
x_62 = l_Lean_Meta_Match_Alt_replaceFVarId(x_60, x_6, x_61);
if (lean_is_scalar(x_59)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_59;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_53);
return x_63;
}
case 3:
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_57);
lean_dec(x_6);
x_64 = lean_ctor_get(x_52, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_65 = x_52;
} else {
 lean_dec_ref(x_52);
 x_65 = lean_box(0);
}
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_48);
lean_ctor_set(x_66, 1, x_49);
lean_ctor_set(x_66, 2, x_50);
lean_ctor_set(x_66, 3, x_51);
lean_ctor_set(x_66, 4, x_64);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_53);
return x_67;
}
default: 
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_57);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_68 = x_52;
} else {
 lean_dec_ref(x_52);
 x_68 = lean_box(0);
}
x_69 = l_Lean_Meta_Match_instInhabitedAlt;
x_70 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_71 = lean_panic_fn(x_69, x_70);
if (lean_is_scalar(x_68)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_68;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_53);
return x_72;
}
}
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_73 = lean_ctor_get(x_7, 0);
x_74 = lean_ctor_get(x_7, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_7);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_73, 2);
lean_inc(x_77);
x_78 = lean_ctor_get(x_73, 3);
lean_inc(x_78);
x_79 = lean_ctor_get(x_73, 4);
lean_inc(x_79);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 lean_ctor_release(x_73, 2);
 lean_ctor_release(x_73, 3);
 lean_ctor_release(x_73, 4);
 x_80 = x_73;
} else {
 lean_dec_ref(x_73);
 x_80 = lean_box(0);
}
lean_inc(x_6);
x_81 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(x_1, x_2, x_3, x_4, lean_box(0), x_6, x_74);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_80);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_6);
x_82 = l_Lean_Meta_Match_instInhabitedAlt;
x_83 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_84 = lean_panic_fn(x_82, x_83);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_81);
return x_85;
}
else
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_79, 0);
lean_inc(x_86);
switch (lean_obj_tag(x_86)) {
case 1:
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_88 = x_79;
} else {
 lean_dec_ref(x_79);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_86, 0);
lean_inc(x_89);
lean_dec(x_86);
if (lean_is_scalar(x_80)) {
 x_90 = lean_alloc_ctor(0, 5, 0);
} else {
 x_90 = x_80;
}
lean_ctor_set(x_90, 0, x_75);
lean_ctor_set(x_90, 1, x_76);
lean_ctor_set(x_90, 2, x_77);
lean_ctor_set(x_90, 3, x_78);
lean_ctor_set(x_90, 4, x_87);
x_91 = l_Lean_Meta_Match_Alt_replaceFVarId(x_89, x_6, x_90);
if (lean_is_scalar(x_88)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_88;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_81);
return x_92;
}
case 3:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_86);
lean_dec(x_6);
x_93 = lean_ctor_get(x_79, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_94 = x_79;
} else {
 lean_dec_ref(x_79);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_95 = lean_alloc_ctor(0, 5, 0);
} else {
 x_95 = x_80;
}
lean_ctor_set(x_95, 0, x_75);
lean_ctor_set(x_95, 1, x_76);
lean_ctor_set(x_95, 2, x_77);
lean_ctor_set(x_95, 3, x_78);
lean_ctor_set(x_95, 4, x_93);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_81);
return x_96;
}
default: 
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_86);
lean_dec(x_80);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_6);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_97 = x_79;
} else {
 lean_dec_ref(x_79);
 x_97 = lean_box(0);
}
x_98 = l_Lean_Meta_Match_instInhabitedAlt;
x_99 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2;
x_100 = lean_panic_fn(x_98, x_99);
if (lean_is_scalar(x_97)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_97;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_81);
return x_101;
}
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = l_Lean_Meta_FVarSubst_apply(x_7, x_5);
x_9 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 2);
x_13 = l_Lean_Meta_FVarSubst_apply(x_12, x_10);
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_7, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_7, x_18);
lean_dec(x_7);
x_20 = lean_array_fget(x_6, x_8);
x_21 = lean_array_get_size(x_4);
x_22 = lean_nat_dec_lt(x_8, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
x_25 = lean_box(0);
x_26 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__1(x_23, x_25);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_2);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_24);
x_30 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_31 = lean_array_push(x_10, x_29);
x_7 = x_19;
x_8 = x_30;
x_9 = lean_box(0);
x_10 = x_31;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_33 = lean_array_fget(x_4, x_8);
x_34 = lean_ctor_get(x_1, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
lean_inc(x_1);
x_36 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(x_1, x_2, x_5, x_8, lean_box(0), x_35);
x_37 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(x_20, x_36);
x_38 = lean_box(0);
x_39 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4(x_33, x_34, x_38);
x_40 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(x_1, x_5, x_8, x_20, lean_box(0), x_39);
x_41 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(x_1, x_5, x_8, x_20, lean_box(0), x_33, x_40);
lean_inc(x_3);
x_42 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(x_20, x_3);
x_43 = lean_ctor_get(x_20, 0);
lean_inc(x_43);
lean_dec(x_20);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_37);
x_45 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_46 = lean_array_push(x_10, x_44);
x_7 = x_19;
x_8 = x_45;
x_9 = lean_box(0);
x_10 = x_46;
goto _start;
}
}
else
{
lean_object* x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_10);
lean_ctor_set(x_48, 1, x_15);
return x_48;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1;
x_3 = lean_unsigned_to_nat(428u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("value step");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_st_ref_get(x_5, x_6);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 3);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get_uint8(x_33, sizeof(void*)*1);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_7 = x_35;
goto block_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_38 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_37, x_2, x_3, x_4, x_5, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_7 = x_41;
goto block_30;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3;
x_44 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_37, x_43, x_2, x_3, x_4, x_5, x_42);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_7 = x_45;
goto block_30;
}
}
block_30:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1;
x_11 = lean_panic_fn(x_9, x_10);
x_12 = lean_apply_5(x_11, x_2, x_3, x_4, x_5, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
lean_inc(x_1);
x_15 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectValues(x_1);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = l_Lean_Expr_fvarId_x21(x_13);
x_18 = l_Lean_Meta_caseValue___closed__2;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_15);
x_19 = l_Lean_Meta_caseValues(x_16, x_17, x_15, x_18, x_2, x_3, x_4, x_5, x_7);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_get_size(x_20);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8(x_1, x_13, x_14, x_15, x_20, x_20, x_22, x_24, lean_box(0), x_23, x_2, x_3, x_4, x_5, x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_20);
lean_dec(x_15);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_7, 1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___rarg(x_9, x_10);
x_12 = l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_push(x_1, x_11);
x_1 = x_13;
x_2 = x_8;
goto _start;
}
else
{
lean_dec(x_11);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_2, 1);
x_2 = x_16;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = l_Array_empty___closed__1;
x_4 = l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_3, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_1(x_4, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop_match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = l_Lean_Expr_fvarId_x21(x_10);
lean_dec(x_10);
lean_inc(x_2);
x_13 = l_Lean_Meta_getLocalDecl(x_12, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(x_11, x_2, x_3, x_4, x_5, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_ctor_set(x_1, 1, x_18);
lean_ctor_set(x_1, 0, x_14);
lean_ctor_set(x_16, 0, x_1);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_16, 0);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_16);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_14);
lean_free_object(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_1);
x_32 = l_Lean_Expr_fvarId_x21(x_30);
lean_dec(x_30);
lean_inc(x_2);
x_33 = l_Lean_Meta_getLocalDecl(x_32, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(x_31, x_2, x_3, x_4, x_5, x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_37);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_34);
x_42 = lean_ctor_get(x_36, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_44 = x_36;
} else {
 lean_dec_ref(x_36);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_31);
lean_dec(x_2);
x_46 = lean_ctor_get(x_33, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_33, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_48 = x_33;
} else {
 lean_dec_ref(x_33);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Expr_fvarId_x21(x_4);
lean_dec(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Expr_fvarId_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_push(x_1, x_7);
x_14 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop(x_2, x_3, x_4, x_5, x_6, x_13, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_5, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
x_16 = lean_nat_add(x_15, x_14);
lean_inc(x_4);
x_17 = l_Lean_Name_appendIndexAfter(x_4, x_16);
lean_inc(x_3);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1___boxed), 12, 6);
lean_closure_set(x_18, 0, x_6);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_15);
x_19 = 0;
x_20 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___spec__1___rarg(x_17, x_19, x_3, x_18, x_7, x_8, x_9, x_10, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
x_21 = lean_array_to_list(lean_box(0), x_6);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_21);
x_22 = l_Lean_Meta_mkArrayLit(x_3, x_21, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_1);
x_25 = l_Lean_Meta_Match_Alt_replaceFVarId(x_2, x_23, x_1);
lean_inc(x_21);
x_26 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(x_21, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(x_21);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_25, 3);
x_34 = lean_ctor_get(x_25, 4);
x_35 = lean_ctor_get(x_25, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_25, 0);
lean_dec(x_36);
x_37 = l_List_append___rarg(x_28, x_33);
x_38 = l_List_append___rarg(x_29, x_34);
lean_ctor_set(x_25, 4, x_38);
lean_ctor_set(x_25, 3, x_37);
lean_ctor_set(x_25, 1, x_31);
lean_ctor_set(x_25, 0, x_30);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_25, 2);
x_40 = lean_ctor_get(x_25, 3);
x_41 = lean_ctor_get(x_25, 4);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_25);
x_42 = l_List_append___rarg(x_28, x_40);
x_43 = l_List_append___rarg(x_29, x_41);
x_44 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_44, 0, x_30);
lean_ctor_set(x_44, 1, x_31);
lean_ctor_set(x_44, 2, x_39);
lean_ctor_set(x_44, 3, x_42);
lean_ctor_set(x_44, 4, x_43);
lean_ctor_set(x_26, 0, x_44);
return x_26;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_45 = lean_ctor_get(x_26, 0);
x_46 = lean_ctor_get(x_26, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_26);
x_47 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__2(x_21);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_ctor_get(x_25, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_25, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_25, 4);
lean_inc(x_52);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 lean_ctor_release(x_25, 3);
 lean_ctor_release(x_25, 4);
 x_53 = x_25;
} else {
 lean_dec_ref(x_25);
 x_53 = lean_box(0);
}
x_54 = l_List_append___rarg(x_45, x_51);
x_55 = l_List_append___rarg(x_47, x_52);
if (lean_is_scalar(x_53)) {
 x_56 = lean_alloc_ctor(0, 5, 0);
} else {
 x_56 = x_53;
}
lean_ctor_set(x_56, 0, x_48);
lean_ctor_set(x_56, 1, x_49);
lean_ctor_set(x_56, 2, x_50);
lean_ctor_set(x_56, 3, x_54);
lean_ctor_set(x_56, 4, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_46);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_26);
if (x_58 == 0)
{
return x_26;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_26, 0);
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_26);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_22);
if (x_62 == 0)
{
return x_22;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_22, 0);
x_64 = lean_ctor_get(x_22, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_22);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_6);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_LocalDecl_userName(x_5);
x_12 = l_Array_empty___closed__1;
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit_loop(x_1, x_2, x_3, x_11, x_4, x_12, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl___boxed), 6, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1___boxed), 10, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
x_13 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_withExistingLocalDecls___at_Lean_Meta_Match_Alt_toMessageData___spec__3___rarg(x_10, x_13, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_mkFVar(x_4);
x_7 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_mkFVar(x_8);
x_11 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Meta_FVarSubst_apply(x_7, x_5);
x_9 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = l_Lean_Meta_FVarSubst_apply(x_12, x_10);
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Expr_fvarId_x21(x_1);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_array_to_list(lean_box(0), x_9);
x_11 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(x_10);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_Lean_Meta_Match_Example_replaceFVarId(x_8, x_12, x_6);
lean_dec(x_12);
lean_dec(x_8);
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_14);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = l_Lean_Expr_fvarId_x21(x_1);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_array_to_list(lean_box(0), x_18);
x_20 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__3(x_19);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_Meta_Match_Example_replaceFVarId(x_17, x_21, x_15);
lean_dec(x_21);
lean_dec(x_17);
x_23 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(x_1, x_2, x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Meta_Match_Example_applyFVarSubst(x_7, x_5);
x_9 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = l_Lean_Meta_Match_Example_applyFVarSubst(x_12, x_10);
x_14 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 1:
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
case 4:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_List_lengthAux___rarg(x_15, x_16);
lean_dec(x_15);
x_18 = lean_nat_dec_eq(x_17, x_1);
lean_dec(x_17);
if (x_18 == 0)
{
lean_free_object(x_6);
lean_dec(x_5);
x_2 = x_14;
goto _start;
}
else
{
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
default: 
{
lean_object* x_21; 
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_5);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_2 = x_21;
goto _start;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
switch (lean_obj_tag(x_23)) {
case 1:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_3);
x_2 = x_24;
x_3 = x_25;
goto _start;
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_List_lengthAux___rarg(x_28, x_29);
lean_dec(x_28);
x_31 = lean_nat_dec_eq(x_30, x_1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_5);
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_5);
lean_ctor_set(x_33, 1, x_3);
x_2 = x_27;
x_3 = x_33;
goto _start;
}
}
default: 
{
lean_object* x_35; 
lean_dec(x_23);
lean_dec(x_5);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
lean_dec(x_2);
x_2 = x_35;
goto _start;
}
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = lean_ctor_get(x_4, 3);
x_12 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_11, x_9);
x_13 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(x_1, x_2, x_3, x_4, lean_box(0), x_10);
lean_ctor_set(x_6, 1, x_13);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_ctor_get(x_4, 3);
x_17 = l_Lean_Meta_Match_Alt_applyFVarSubst(x_16, x_14);
x_18 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(x_1, x_2, x_3, x_4, lean_box(0), x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
static lean_object* _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.processArrayLit");
return x_1;
}
}
static lean_object* _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1;
x_3 = lean_unsigned_to_nat(506u);
x_4 = lean_unsigned_to_nat(18u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_35; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_19 = x_9;
} else {
 lean_dec_ref(x_9);
 x_19 = lean_box(0);
}
x_35 = lean_ctor_get(x_17, 4);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_17);
x_36 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_37 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2;
x_38 = lean_panic_fn(x_36, x_37);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_39 = lean_apply_5(x_38, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_20 = x_40;
x_21 = x_41;
goto block_34;
}
else
{
uint8_t x_42; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_39);
if (x_42 == 0)
{
return x_39;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_39, 0);
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_39);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_35, 0);
lean_inc(x_46);
switch (lean_obj_tag(x_46)) {
case 1:
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_17);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_17, 0);
x_49 = lean_ctor_get(x_17, 1);
x_50 = lean_ctor_get(x_17, 2);
x_51 = lean_ctor_get(x_17, 3);
x_52 = lean_ctor_get(x_17, 4);
lean_dec(x_52);
x_53 = lean_ctor_get(x_35, 1);
lean_inc(x_53);
lean_dec(x_35);
x_54 = lean_ctor_get(x_46, 0);
lean_inc(x_54);
lean_dec(x_46);
lean_inc(x_2);
x_55 = l_Lean_Meta_FVarSubst_apply(x_8, x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_56 = l_Lean_Meta_getArrayArgType(x_55, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
lean_ctor_set(x_17, 4, x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_7);
x_59 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit(x_17, x_54, x_57, x_7, x_10, x_11, x_12, x_13, x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_20 = x_60;
x_21 = x_61;
goto block_34;
}
else
{
uint8_t x_62; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_59);
if (x_62 == 0)
{
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_59, 0);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_59);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_54);
lean_dec(x_53);
lean_free_object(x_17);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_56);
if (x_66 == 0)
{
return x_56;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_56, 0);
x_68 = lean_ctor_get(x_56, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_56);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_70 = lean_ctor_get(x_17, 0);
x_71 = lean_ctor_get(x_17, 1);
x_72 = lean_ctor_get(x_17, 2);
x_73 = lean_ctor_get(x_17, 3);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_17);
x_74 = lean_ctor_get(x_35, 1);
lean_inc(x_74);
lean_dec(x_35);
x_75 = lean_ctor_get(x_46, 0);
lean_inc(x_75);
lean_dec(x_46);
lean_inc(x_2);
x_76 = l_Lean_Meta_FVarSubst_apply(x_8, x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_77 = l_Lean_Meta_getArrayArgType(x_76, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_80, 0, x_70);
lean_ctor_set(x_80, 1, x_71);
lean_ctor_set(x_80, 2, x_72);
lean_ctor_set(x_80, 3, x_73);
lean_ctor_set(x_80, 4, x_74);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_7);
x_81 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoArrayLit(x_80, x_75, x_78, x_7, x_10, x_11, x_12, x_13, x_79);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_20 = x_82;
x_21 = x_83;
goto block_34;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_84 = lean_ctor_get(x_81, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_81, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_86 = x_81;
} else {
 lean_dec_ref(x_81);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_88 = lean_ctor_get(x_77, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_77, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_90 = x_77;
} else {
 lean_dec_ref(x_77);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
case 4:
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_17);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_17, 4);
lean_dec(x_93);
x_94 = lean_ctor_get(x_35, 1);
lean_inc(x_94);
lean_dec(x_35);
x_95 = lean_ctor_get(x_46, 1);
lean_inc(x_95);
lean_dec(x_46);
x_96 = l_List_append___rarg(x_95, x_94);
lean_ctor_set(x_17, 4, x_96);
x_20 = x_17;
x_21 = x_14;
goto block_34;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_97 = lean_ctor_get(x_17, 0);
x_98 = lean_ctor_get(x_17, 1);
x_99 = lean_ctor_get(x_17, 2);
x_100 = lean_ctor_get(x_17, 3);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_17);
x_101 = lean_ctor_get(x_35, 1);
lean_inc(x_101);
lean_dec(x_35);
x_102 = lean_ctor_get(x_46, 1);
lean_inc(x_102);
lean_dec(x_46);
x_103 = l_List_append___rarg(x_102, x_101);
x_104 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_104, 0, x_97);
lean_ctor_set(x_104, 1, x_98);
lean_ctor_set(x_104, 2, x_99);
lean_ctor_set(x_104, 3, x_100);
lean_ctor_set(x_104, 4, x_103);
x_20 = x_104;
x_21 = x_14;
goto block_34;
}
}
default: 
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_46);
lean_dec(x_35);
lean_dec(x_17);
x_105 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_106 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2;
x_107 = lean_panic_fn(x_105, x_106);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_108 = lean_apply_5(x_107, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_20 = x_109;
x_21 = x_110;
goto block_34;
}
else
{
uint8_t x_111; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_2);
x_111 = !lean_is_exclusive(x_108);
if (x_111 == 0)
{
return x_108;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_108, 0);
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_108);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
}
block_34:
{
lean_object* x_22; 
x_22 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8(x_1, x_2, x_3, x_4, x_5, lean_box(0), x_7, x_8, x_18, x_10, x_11, x_12, x_13, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
if (lean_is_scalar(x_19)) {
 x_25 = lean_alloc_ctor(1, 2, 0);
} else {
 x_25 = x_19;
}
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
if (lean_is_scalar(x_19)) {
 x_28 = lean_alloc_ctor(1, 2, 0);
} else {
 x_28 = x_19;
}
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_20);
lean_dec(x_19);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_7, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_7, x_18);
lean_dec(x_7);
x_20 = lean_array_fget(x_6, x_8);
x_21 = lean_array_get_size(x_4);
x_22 = lean_nat_dec_lt(x_8, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
x_25 = lean_box(0);
x_26 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__1(x_23, x_25);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_2);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_24);
x_30 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_31 = lean_array_push(x_10, x_29);
x_7 = x_19;
x_8 = x_30;
x_9 = lean_box(0);
x_10 = x_31;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_33 = l_instInhabitedNat;
x_34 = lean_array_get(x_33, x_4, x_8);
x_35 = lean_ctor_get(x_20, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_20, 3);
lean_inc(x_37);
x_38 = lean_array_to_list(lean_box(0), x_36);
x_39 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__1(x_38);
lean_inc(x_3);
x_40 = l_List_append___rarg(x_39, x_3);
x_41 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(x_20, x_40);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
lean_inc(x_20);
x_44 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(x_2, x_20, x_43);
x_45 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(x_20, x_44);
x_46 = lean_box(0);
x_47 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6(x_34, x_42, x_46);
x_48 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(x_1, x_5, x_8, x_20, lean_box(0), x_47);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_2);
x_49 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8(x_1, x_2, x_5, x_8, x_20, lean_box(0), x_34, x_37, x_48, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_37);
lean_dec(x_20);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_35);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_50);
lean_ctor_set(x_52, 3, x_45);
x_53 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_54 = lean_array_push(x_10, x_52);
x_7 = x_19;
x_8 = x_53;
x_9 = lean_box(0);
x_10 = x_54;
x_15 = x_51;
goto _start;
}
else
{
uint8_t x_56; 
lean_dec(x_45);
lean_dec(x_41);
lean_dec(x_35);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_49);
if (x_56 == 0)
{
return x_49;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_49, 0);
x_58 = lean_ctor_get(x_49, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_49);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
else
{
lean_object* x_60; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_10);
lean_ctor_set(x_60, 1, x_15);
return x_60;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1;
x_3 = lean_unsigned_to_nat(482u);
x_4 = lean_unsigned_to_nat(15u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("array literal step");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_st_ref_get(x_5, x_6);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_7 = x_36;
goto block_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_39 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_38, x_2, x_3, x_4, x_5, x_37);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_unbox(x_40);
lean_dec(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_7 = x_42;
goto block_31;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
x_44 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3;
x_45 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_38, x_44, x_2, x_3, x_4, x_5, x_43);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_7 = x_46;
goto block_31;
}
}
block_31:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1;
x_11 = lean_panic_fn(x_9, x_10);
x_12 = lean_apply_5(x_11, x_2, x_3, x_4, x_5, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_collectArraySizes(x_1);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = l_Lean_Expr_fvarId_x21(x_13);
x_18 = l_Lean_Meta_mkArrow___closed__2;
x_19 = l_Lean_Meta_caseValue___closed__2;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_15);
x_20 = l_Lean_Meta_caseArraySizes(x_16, x_17, x_15, x_18, x_19, x_2, x_3, x_4, x_5, x_7);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_array_get_size(x_21);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9(x_1, x_13, x_14, x_15, x_21, x_21, x_23, x_25, lean_box(0), x_24, x_2, x_3, x_4, x_5, x_22);
lean_dec(x_21);
lean_dec(x_15);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__5(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__6(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Array_mapIdxM_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 3)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 9)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get_uint64(x_7, sizeof(void*)*1);
lean_dec(x_7);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_11, x_14);
lean_dec(x_11);
x_16 = lean_box_uint64(x_10);
x_17 = lean_apply_3(x_3, x_15, x_16, x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_3);
x_18 = lean_box_uint64(x_10);
x_19 = lean_apply_2(x_2, x_18, x_9);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_apply_1(x_4, x_1);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_4, x_1);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_apply_1(x_4, x_1);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern_match__1___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1;
x_3 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_1);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 3);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 4);
lean_inc(x_10);
x_11 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
return x_1;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 3)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
if (lean_obj_tag(x_14) == 9)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_4, 4);
lean_dec(x_17);
x_18 = lean_ctor_get(x_4, 3);
lean_dec(x_18);
x_19 = lean_ctor_get(x_4, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_4, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_4, 0);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_15, 0);
lean_inc(x_25);
lean_dec(x_15);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_eq(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_25, x_28);
lean_dec(x_25);
x_30 = lean_box(0);
x_31 = l_Lean_mkNatLit(x_29);
lean_ctor_set(x_12, 0, x_31);
lean_ctor_set(x_10, 1, x_30);
x_32 = l_Lean_Meta_evalNat_visit___closed__19;
x_33 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_10);
lean_ctor_set(x_1, 1, x_23);
lean_ctor_set(x_1, 0, x_33);
lean_ctor_set(x_4, 4, x_1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_11);
return x_34;
}
else
{
lean_object* x_35; 
lean_dec(x_25);
lean_free_object(x_12);
x_35 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
lean_ctor_set(x_10, 0, x_35);
lean_ctor_set(x_1, 1, x_11);
return x_1;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_ctor_get(x_15, 0);
lean_inc(x_37);
lean_dec(x_15);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_eq(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
x_42 = lean_box(0);
x_43 = l_Lean_mkNatLit(x_41);
lean_ctor_set(x_12, 0, x_43);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_12);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Meta_evalNat_visit___closed__19;
x_46 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_42);
lean_ctor_set(x_46, 3, x_44);
lean_ctor_set(x_1, 1, x_36);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set(x_4, 4, x_1);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_11);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_free_object(x_12);
x_48 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_36);
lean_ctor_set(x_4, 4, x_49);
lean_ctor_set(x_1, 1, x_11);
return x_1;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_4);
x_50 = lean_ctor_get(x_10, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_51 = x_10;
} else {
 lean_dec_ref(x_10);
 x_51 = lean_box(0);
}
x_52 = lean_ctor_get(x_15, 0);
lean_inc(x_52);
lean_dec(x_15);
x_53 = lean_unsigned_to_nat(0u);
x_54 = lean_nat_dec_eq(x_52, x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_sub(x_52, x_55);
lean_dec(x_52);
x_57 = lean_box(0);
x_58 = l_Lean_mkNatLit(x_56);
lean_ctor_set(x_12, 0, x_58);
if (lean_is_scalar(x_51)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_51;
}
lean_ctor_set(x_59, 0, x_12);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_Meta_evalNat_visit___closed__19;
x_61 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
lean_ctor_set(x_61, 2, x_57);
lean_ctor_set(x_61, 3, x_59);
lean_ctor_set(x_1, 1, x_50);
lean_ctor_set(x_1, 0, x_61);
x_62 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_62, 0, x_6);
lean_ctor_set(x_62, 1, x_7);
lean_ctor_set(x_62, 2, x_8);
lean_ctor_set(x_62, 3, x_9);
lean_ctor_set(x_62, 4, x_1);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_11);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_52);
lean_free_object(x_12);
x_64 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
if (lean_is_scalar(x_51)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_51;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_50);
x_66 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_66, 0, x_6);
lean_ctor_set(x_66, 1, x_7);
lean_ctor_set(x_66, 2, x_8);
lean_ctor_set(x_66, 3, x_9);
lean_ctor_set(x_66, 4, x_65);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_66);
return x_1;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_15);
lean_free_object(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_1);
x_67 = !lean_is_exclusive(x_10);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_10, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_10, 0);
lean_dec(x_69);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_4);
return x_10;
}
else
{
lean_object* x_70; 
lean_dec(x_10);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_11);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_free_object(x_12);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_1);
x_71 = !lean_is_exclusive(x_10);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_10, 1);
lean_dec(x_72);
x_73 = lean_ctor_get(x_10, 0);
lean_dec(x_73);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_4);
return x_10;
}
else
{
lean_object* x_74; 
lean_dec(x_10);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_4);
lean_ctor_set(x_74, 1, x_11);
return x_74;
}
}
}
else
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_12, 0);
lean_inc(x_75);
lean_dec(x_12);
if (lean_obj_tag(x_75) == 9)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 x_77 = x_4;
} else {
 lean_dec_ref(x_4);
 x_77 = lean_box(0);
}
x_78 = lean_ctor_get(x_10, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_79 = x_10;
} else {
 lean_dec_ref(x_10);
 x_79 = lean_box(0);
}
x_80 = lean_ctor_get(x_76, 0);
lean_inc(x_80);
lean_dec(x_76);
x_81 = lean_unsigned_to_nat(0u);
x_82 = lean_nat_dec_eq(x_80, x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_nat_sub(x_80, x_83);
lean_dec(x_80);
x_85 = lean_box(0);
x_86 = l_Lean_mkNatLit(x_84);
x_87 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_87, 0, x_86);
if (lean_is_scalar(x_79)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_79;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
x_89 = l_Lean_Meta_evalNat_visit___closed__19;
x_90 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_85);
lean_ctor_set(x_90, 2, x_85);
lean_ctor_set(x_90, 3, x_88);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_90);
if (lean_is_scalar(x_77)) {
 x_91 = lean_alloc_ctor(0, 5, 0);
} else {
 x_91 = x_77;
}
lean_ctor_set(x_91, 0, x_6);
lean_ctor_set(x_91, 1, x_7);
lean_ctor_set(x_91, 2, x_8);
lean_ctor_set(x_91, 3, x_9);
lean_ctor_set(x_91, 4, x_1);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_11);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_80);
x_93 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
if (lean_is_scalar(x_79)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_79;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_78);
if (lean_is_scalar(x_77)) {
 x_95 = lean_alloc_ctor(0, 5, 0);
} else {
 x_95 = x_77;
}
lean_ctor_set(x_95, 0, x_6);
lean_ctor_set(x_95, 1, x_7);
lean_ctor_set(x_95, 2, x_8);
lean_ctor_set(x_95, 3, x_9);
lean_ctor_set(x_95, 4, x_94);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_95);
return x_1;
}
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_76);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_1);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_96 = x_10;
} else {
 lean_dec_ref(x_10);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_4);
lean_ctor_set(x_97, 1, x_11);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_75);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_1);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_98 = x_10;
} else {
 lean_dec_ref(x_10);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_4);
lean_ctor_set(x_99, 1, x_11);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_1);
x_100 = !lean_is_exclusive(x_10);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_10, 1);
lean_dec(x_101);
x_102 = lean_ctor_get(x_10, 0);
lean_dec(x_102);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_4);
return x_10;
}
else
{
lean_object* x_103; 
lean_dec(x_10);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_4);
lean_ctor_set(x_103, 1, x_11);
return x_103;
}
}
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_104 = lean_ctor_get(x_1, 0);
x_105 = lean_ctor_get(x_1, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_1);
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_104, 1);
lean_inc(x_107);
x_108 = lean_ctor_get(x_104, 2);
lean_inc(x_108);
x_109 = lean_ctor_get(x_104, 3);
lean_inc(x_109);
x_110 = lean_ctor_get(x_104, 4);
lean_inc(x_110);
x_111 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(x_105);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_112; 
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_106);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_104);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
else
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_110, 0);
lean_inc(x_113);
if (lean_obj_tag(x_113) == 3)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 x_115 = x_113;
} else {
 lean_dec_ref(x_113);
 x_115 = lean_box(0);
}
if (lean_obj_tag(x_114) == 9)
{
lean_object* x_116; 
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
lean_dec(x_114);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 lean_ctor_release(x_104, 2);
 lean_ctor_release(x_104, 3);
 lean_ctor_release(x_104, 4);
 x_117 = x_104;
} else {
 lean_dec_ref(x_104);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get(x_110, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_119 = x_110;
} else {
 lean_dec_ref(x_110);
 x_119 = lean_box(0);
}
x_120 = lean_ctor_get(x_116, 0);
lean_inc(x_120);
lean_dec(x_116);
x_121 = lean_unsigned_to_nat(0u);
x_122 = lean_nat_dec_eq(x_120, x_121);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_123 = lean_unsigned_to_nat(1u);
x_124 = lean_nat_sub(x_120, x_123);
lean_dec(x_120);
x_125 = lean_box(0);
x_126 = l_Lean_mkNatLit(x_124);
if (lean_is_scalar(x_115)) {
 x_127 = lean_alloc_ctor(3, 1, 0);
} else {
 x_127 = x_115;
}
lean_ctor_set(x_127, 0, x_126);
if (lean_is_scalar(x_119)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_119;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_125);
x_129 = l_Lean_Meta_evalNat_visit___closed__19;
x_130 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_125);
lean_ctor_set(x_130, 2, x_125);
lean_ctor_set(x_130, 3, x_128);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_118);
if (lean_is_scalar(x_117)) {
 x_132 = lean_alloc_ctor(0, 5, 0);
} else {
 x_132 = x_117;
}
lean_ctor_set(x_132, 0, x_106);
lean_ctor_set(x_132, 1, x_107);
lean_ctor_set(x_132, 2, x_108);
lean_ctor_set(x_132, 3, x_109);
lean_ctor_set(x_132, 4, x_131);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_111);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_120);
lean_dec(x_115);
x_134 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2;
if (lean_is_scalar(x_119)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_119;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_118);
if (lean_is_scalar(x_117)) {
 x_136 = lean_alloc_ctor(0, 5, 0);
} else {
 x_136 = x_117;
}
lean_ctor_set(x_136, 0, x_106);
lean_ctor_set(x_136, 1, x_107);
lean_ctor_set(x_136, 2, x_108);
lean_ctor_set(x_136, 3, x_109);
lean_ctor_set(x_136, 4, x_135);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_111);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_106);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_138 = x_110;
} else {
 lean_dec_ref(x_110);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_104);
lean_ctor_set(x_139, 1, x_111);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_106);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_140 = x_110;
} else {
 lean_dec_ref(x_110);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_104);
lean_ctor_set(x_141, 1, x_111);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_113);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_106);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_142 = x_110;
} else {
 lean_dec_ref(x_110);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_104);
lean_ctor_set(x_143, 1, x_111);
return x_143;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(x_3);
lean_ctor_set(x_1, 2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1(x_7);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" step");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_20 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(x_19, x_2, x_3, x_4, x_5, x_6, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set(x_20, 0, x_25);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_dec(x_20);
x_30 = l_Lean_stringToMessageData(x_1);
x_31 = l_Lean_KernelException_toMessageData___closed__15;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(x_19, x_34, x_2, x_3, x_4, x_5, x_6, x_29);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_11 = l_Lean_Meta_Match_Problem_toMessageData(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_addTrace___at_Lean_Meta_addUnificationHint___spec__4(x_2, x_12, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SynthInstance_main___lambda__1___boxed), 7, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_mkAnswer___closed__4;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1___boxed), 8, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2;
x_10 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
x_11 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___lambda__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compile pattern matching, stuck at");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_indentD(x_1);
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2;
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_KernelException_toMessageData___closed__15;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_Match_Problem_toMessageData), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1;
x_9 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_Match_isCurrVarInductive___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 1;
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Meta_Match_isCurrVarInductive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Match_isCurrVarInductive___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_Match_isCurrVarInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getInductiveVal_x3f), 6, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = l_Lean_Meta_Match_isCurrVarInductive___closed__1;
x_14 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_14, x_2, x_3, x_4, x_5, x_6);
return x_15;
}
}
}
lean_object* l_Lean_Meta_Match_isCurrVarInductive___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_Match_isCurrVarInductive___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pattern");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_17; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_17 = lean_ctor_get(x_10, 4);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_10);
x_18 = l_Array_forInUnsafe_loop___at_Lean_pushScope___spec__1___rarg___lambda__1___closed__1;
x_12 = x_18;
x_13 = x_8;
goto block_16;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 2);
x_24 = lean_ctor_get(x_6, 3);
x_25 = lean_ctor_get(x_6, 4);
x_26 = lean_ctor_get(x_6, 5);
x_27 = lean_ctor_get(x_6, 6);
x_28 = lean_ctor_get(x_6, 7);
x_29 = l_Lean_replaceRef(x_20, x_24);
lean_dec(x_20);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
x_30 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_30, 4, x_25);
lean_ctor_set(x_30, 5, x_26);
lean_ctor_set(x_30, 6, x_27);
lean_ctor_set(x_30, 7, x_28);
x_31 = 0;
lean_inc(x_7);
lean_inc(x_30);
lean_inc(x_5);
lean_inc(x_4);
x_32 = l_Lean_Meta_Match_Pattern_toExpr_visit(x_31, x_19, x_4, x_5, x_30, x_7, x_8);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_7);
lean_inc(x_30);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_35 = l_Lean_Meta_inferType(x_1, x_4, x_5, x_30, x_7, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_7);
lean_inc(x_30);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_33);
x_38 = l_Lean_Meta_inferType(x_33, x_4, x_5, x_30, x_7, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_7);
lean_inc(x_30);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_39);
lean_inc(x_36);
x_41 = l_Lean_Meta_isExprDefEq(x_36, x_39, x_4, x_5, x_30, x_7, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_11);
lean_dec(x_1);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
lean_inc(x_7);
lean_inc(x_30);
lean_inc(x_5);
lean_inc(x_4);
x_45 = l_Lean_Meta_mkHasTypeButIsExpectedMsg(x_39, x_36, x_4, x_5, x_30, x_7, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l_Lean_indentExpr(x_33);
x_49 = l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_46);
x_54 = l_Lean_KernelException_toMessageData___closed__15;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(x_55, x_4, x_5, x_30, x_7, x_47);
lean_dec(x_7);
lean_dec(x_30);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_39);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_30);
x_61 = lean_ctor_get(x_41, 1);
lean_inc(x_61);
lean_dec(x_41);
x_62 = l_Array_forInUnsafe_loop___at_Lean_pushScope___spec__1___rarg___lambda__1___closed__1;
x_12 = x_62;
x_13 = x_61;
goto block_16;
}
}
else
{
uint8_t x_63; 
lean_dec(x_39);
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_41);
if (x_63 == 0)
{
return x_41;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_41, 0);
x_65 = lean_ctor_get(x_41, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_41);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_36);
lean_dec(x_33);
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_38);
if (x_67 == 0)
{
return x_38;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_38, 0);
x_69 = lean_ctor_get(x_38, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_38);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_33);
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_35);
if (x_71 == 0)
{
return x_35;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_35, 0);
x_73 = lean_ctor_get(x_35, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_35);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_32);
if (x_75 == 0)
{
return x_32;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_32, 0);
x_77 = lean_ctor_get(x_32, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_32);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
block_16:
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_2 = x_11;
x_3 = x_14;
x_8 = x_13;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_box(0);
x_13 = lean_alloc_closure((void*)(l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___boxed), 8, 3);
lean_closure_set(x_13, 0, x_10);
lean_closure_set(x_13, 1, x_11);
lean_closure_set(x_13, 2, x_12);
x_14 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1;
x_15 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
x_16 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_15, x_2, x_3, x_4, x_5, x_6);
return x_16;
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__1___rarg), 2, 0);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_2, x_11);
lean_dec(x_2);
x_13 = lean_apply_3(x_5, x_7, x_8, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_2);
x_14 = lean_apply_2(x_4, x_7, x_8);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop_match__2___rarg), 5, 0);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.List.moveToFront.loop");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1;
x_3 = lean_unsigned_to_nat(555u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2;
x_7 = lean_panic_fn(x_5, x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_3, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_3, x_13);
x_15 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(x_1, x_10, x_14);
lean_dec(x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 1);
lean_ctor_set(x_2, 1, x_17);
lean_ctor_set(x_15, 1, x_2);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_2, 1, x_19);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_2);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_free_object(x_2);
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_10);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_3, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_3, x_26);
x_28 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(x_1, x_23, x_27);
lean_dec(x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_30);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
else
{
lean_object* x_34; 
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_23);
return x_34;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_instInhabitedExpr;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1;
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_2, x_11);
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(x_8, x_12);
lean_dec(x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 1);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_13, 1, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_17);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_1);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_7);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_eq(x_2, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_2, x_24);
x_26 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(x_21, x_25);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_28);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
return x_32;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Match_instInhabitedPattern;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1;
x_4 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_2, x_11);
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(x_8, x_12);
lean_dec(x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 1);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_13, 1, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_17);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_1);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_7);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_eq(x_2, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_2, x_24);
x_26 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(x_21, x_25);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_28);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
return x_32;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_5, 4);
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(x_8, x_1);
lean_ctor_set(x_5, 4, x_9);
x_10 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_1, x_7);
lean_ctor_set(x_2, 1, x_10);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_ctor_get(x_5, 2);
x_15 = lean_ctor_get(x_5, 3);
x_16 = lean_ctor_get(x_5, 4);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_17 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(x_16, x_1);
x_18 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_15);
lean_ctor_set(x_18, 4, x_17);
x_19 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_1, x_11);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_18);
return x_2;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_20, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_20, 4);
lean_inc(x_26);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 x_27 = x_20;
} else {
 lean_dec_ref(x_20);
 x_27 = lean_box(0);
}
x_28 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(x_26, x_1);
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 5, 0);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_28);
x_30 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_1, x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = l_List_lengthAux___rarg(x_6, x_3);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 3);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1(x_6, x_2);
x_17 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_2, x_7);
lean_ctor_set(x_1, 2, x_17);
lean_ctor_set(x_1, 1, x_16);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1(x_6, x_2);
x_19 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_2, x_7);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_8);
return x_20;
}
}
}
else
{
return x_1;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__5(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_apply_1(x_4, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
lean_dec(x_1);
x_13 = lean_apply_3(x_5, x_12, x_9, x_10);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_14 = lean_apply_1(x_3, x_2);
return x_14;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Meta.Match.Match.0.Lean.Meta.Match.process.checkVarDeps");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1;
x_3 = lean_unsigned_to_nat(622u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1;
x_12 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2;
x_13 = lean_panic_fn(x_11, x_12);
x_14 = lean_apply_5(x_13, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_2, x_17);
lean_dec(x_2);
x_19 = l_Lean_Expr_isFVar(x_15);
if (x_19 == 0)
{
x_1 = x_16;
x_2 = x_18;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = l_Lean_Expr_fvarId_x21(x_15);
lean_inc(x_3);
x_22 = l_Lean_Meta_dependsOn(x_3, x_21, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_1 = x_16;
x_2 = x_18;
x_8 = x_25;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
lean_dec(x_28);
x_29 = 0;
x_30 = lean_box(x_29);
lean_ctor_set(x_22, 0, x_30);
return x_22;
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
}
}
}
else
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = 1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_8);
return x_37;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthAux___rarg(x_8, x_9);
x_11 = lean_nat_dec_lt(x_2, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
x_14 = l_List_get___rarg(x_8, x_2, lean_box(0));
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Lean_Meta_inferType(x_14, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps(x_8, x_2, x_16, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
lean_dec(x_2);
x_2 = x_23;
x_7 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_18, 0);
lean_dec(x_26);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_18, 0, x_27);
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_2);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_12 = lean_array_uget(x_1, x_2);
x_13 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_10 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_10);
return x_24;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nat value to constructor");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("variable");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("non variable");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("as-pattern");
return x_1;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 1);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_14 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_16 = l_Lean_Meta_Match_isCurrVarInductive(x_2, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_114; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_114 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone(x_2);
if (x_114 == 0)
{
uint8_t x_115; 
x_115 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern(x_2);
if (x_115 == 0)
{
uint8_t x_116; 
x_116 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition(x_2);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(x_2);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_17);
x_118 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3;
x_119 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_118, x_4, x_5, x_6, x_7, x_8, x_18);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_121 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable(x_2, x_5, x_6, x_7, x_8, x_120);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unsigned_to_nat(0u);
x_125 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_122, x_124, x_4, x_5, x_6, x_7, x_8, x_123);
return x_125;
}
else
{
uint8_t x_126; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_126 = !lean_is_exclusive(x_121);
if (x_126 == 0)
{
return x_121;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_121, 0);
x_128 = lean_ctor_get(x_121, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_121);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
else
{
uint8_t x_130; 
x_130 = lean_unbox(x_17);
lean_dec(x_17);
if (x_130 == 0)
{
lean_object* x_131; 
x_131 = lean_box(0);
x_19 = x_131;
goto block_113;
}
else
{
uint8_t x_132; 
x_132 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition(x_2);
if (x_132 == 0)
{
lean_object* x_133; 
x_133 = lean_box(0);
x_19 = x_133;
goto block_113;
}
else
{
lean_object* x_134; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_134 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor(x_2, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_134) == 0)
{
uint8_t x_135; 
x_135 = !lean_is_exclusive(x_134);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_136 = lean_ctor_get(x_134, 0);
x_137 = lean_ctor_get(x_134, 1);
x_138 = lean_array_get_size(x_136);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_nat_dec_lt(x_139, x_138);
if (x_140 == 0)
{
lean_object* x_141; 
lean_dec(x_138);
lean_dec(x_136);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_141 = lean_box(0);
lean_ctor_set(x_134, 0, x_141);
return x_134;
}
else
{
uint8_t x_142; 
x_142 = lean_nat_dec_le(x_138, x_138);
if (x_142 == 0)
{
lean_object* x_143; 
lean_dec(x_138);
lean_dec(x_136);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_143 = lean_box(0);
lean_ctor_set(x_134, 0, x_143);
return x_134;
}
else
{
size_t x_144; size_t x_145; lean_object* x_146; lean_object* x_147; 
lean_free_object(x_134);
x_144 = 0;
x_145 = lean_usize_of_nat(x_138);
lean_dec(x_138);
x_146 = lean_box(0);
x_147 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_136, x_144, x_145, x_146, x_4, x_5, x_6, x_7, x_8, x_137);
lean_dec(x_136);
return x_147;
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_148 = lean_ctor_get(x_134, 0);
x_149 = lean_ctor_get(x_134, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_134);
x_150 = lean_array_get_size(x_148);
x_151 = lean_unsigned_to_nat(0u);
x_152 = lean_nat_dec_lt(x_151, x_150);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_150);
lean_dec(x_148);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_149);
return x_154;
}
else
{
uint8_t x_155; 
x_155 = lean_nat_dec_le(x_150, x_150);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; 
lean_dec(x_150);
lean_dec(x_148);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_156 = lean_box(0);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_149);
return x_157;
}
else
{
size_t x_158; size_t x_159; lean_object* x_160; lean_object* x_161; 
x_158 = 0;
x_159 = lean_usize_of_nat(x_150);
lean_dec(x_150);
x_160 = lean_box(0);
x_161 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_148, x_158, x_159, x_160, x_4, x_5, x_6, x_7, x_8, x_149);
lean_dec(x_148);
return x_161;
}
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_162 = !lean_is_exclusive(x_134);
if (x_162 == 0)
{
return x_134;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_134, 0);
x_164 = lean_ctor_get(x_134, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_134);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_17);
x_166 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1;
x_167 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_166, x_4, x_5, x_6, x_7, x_8, x_18);
x_168 = lean_ctor_get(x_167, 1);
lean_inc(x_168);
lean_dec(x_167);
x_169 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(x_2);
x_170 = lean_unsigned_to_nat(0u);
x_171 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_169, x_170, x_4, x_5, x_6, x_7, x_8, x_168);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_17);
x_172 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4;
x_173 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_172, x_4, x_5, x_6, x_7, x_8, x_18);
x_174 = lean_ctor_get(x_173, 1);
lean_inc(x_174);
lean_dec(x_173);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_175 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern(x_2, x_5, x_6, x_7, x_8, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_unsigned_to_nat(0u);
x_179 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_176, x_178, x_4, x_5, x_6, x_7, x_8, x_177);
return x_179;
}
else
{
uint8_t x_180; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_180 = !lean_is_exclusive(x_175);
if (x_180 == 0)
{
return x_175;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_175, 0);
x_182 = lean_ctor_get(x_175, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_175);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
}
}
else
{
lean_object* x_184; 
lean_dec(x_17);
x_184 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf(x_2, x_4, x_5, x_6, x_7, x_8, x_18);
return x_184;
}
block_113:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition(x_2);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition(x_2);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition(x_2);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(x_2);
if (x_23 == 0)
{
lean_object* x_24; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_24 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes(x_2, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported(x_2, x_5, x_6, x_7, x_8, x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 0);
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1;
x_32 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_31, x_4, x_5, x_6, x_7, x_8, x_18);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(x_2);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_34, x_35, x_4, x_5, x_6, x_7, x_8, x_33);
return x_36;
}
}
else
{
lean_object* x_37; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit(x_2, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
x_41 = lean_array_get_size(x_39);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_nat_dec_lt(x_42, x_41);
if (x_43 == 0)
{
lean_object* x_44; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_44 = lean_box(0);
lean_ctor_set(x_37, 0, x_44);
return x_37;
}
else
{
uint8_t x_45; 
x_45 = lean_nat_dec_le(x_41, x_41);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_46 = lean_box(0);
lean_ctor_set(x_37, 0, x_46);
return x_37;
}
else
{
size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; 
lean_free_object(x_37);
x_47 = 0;
x_48 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_49 = lean_box(0);
x_50 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_39, x_47, x_48, x_49, x_4, x_5, x_6, x_7, x_8, x_40);
lean_dec(x_39);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_37, 0);
x_52 = lean_ctor_get(x_37, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_37);
x_53 = lean_array_get_size(x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_nat_dec_lt(x_54, x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_52);
return x_57;
}
else
{
uint8_t x_58; 
x_58 = lean_nat_dec_le(x_53, x_53);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_52);
return x_60;
}
else
{
size_t x_61; size_t x_62; lean_object* x_63; lean_object* x_64; 
x_61 = 0;
x_62 = lean_usize_of_nat(x_53);
lean_dec(x_53);
x_63 = lean_box(0);
x_64 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_51, x_61, x_62, x_63, x_4, x_5, x_6, x_7, x_8, x_52);
lean_dec(x_51);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_37);
if (x_65 == 0)
{
return x_37;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_37, 0);
x_67 = lean_ctor_get(x_37, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_37);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_69 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue(x_2, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
x_73 = lean_array_get_size(x_71);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_nat_dec_lt(x_74, x_73);
if (x_75 == 0)
{
lean_object* x_76; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_76 = lean_box(0);
lean_ctor_set(x_69, 0, x_76);
return x_69;
}
else
{
uint8_t x_77; 
x_77 = lean_nat_dec_le(x_73, x_73);
if (x_77 == 0)
{
lean_object* x_78; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_78 = lean_box(0);
lean_ctor_set(x_69, 0, x_78);
return x_69;
}
else
{
size_t x_79; size_t x_80; lean_object* x_81; lean_object* x_82; 
lean_free_object(x_69);
x_79 = 0;
x_80 = lean_usize_of_nat(x_73);
lean_dec(x_73);
x_81 = lean_box(0);
x_82 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_71, x_79, x_80, x_81, x_4, x_5, x_6, x_7, x_8, x_72);
lean_dec(x_71);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_69, 0);
x_84 = lean_ctor_get(x_69, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_69);
x_85 = lean_array_get_size(x_83);
x_86 = lean_unsigned_to_nat(0u);
x_87 = lean_nat_dec_lt(x_86, x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_85);
lean_dec(x_83);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_84);
return x_89;
}
else
{
uint8_t x_90; 
x_90 = lean_nat_dec_le(x_85, x_85);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_85);
lean_dec(x_83);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
else
{
size_t x_93; size_t x_94; lean_object* x_95; lean_object* x_96; 
x_93 = 0;
x_94 = lean_usize_of_nat(x_85);
lean_dec(x_85);
x_95 = lean_box(0);
x_96 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_83, x_93, x_94, x_95, x_4, x_5, x_6, x_7, x_8, x_84);
lean_dec(x_83);
return x_96;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_97 = !lean_is_exclusive(x_69);
if (x_97 == 0)
{
return x_69;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_69, 0);
x_99 = lean_ctor_get(x_69, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_69);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_101 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2;
x_102 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_101, x_4, x_5, x_6, x_7, x_8, x_18);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_104 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable(x_2, x_5, x_6, x_7, x_8, x_103);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_unsigned_to_nat(0u);
x_108 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_105, x_107, x_4, x_5, x_6, x_7, x_8, x_106);
return x_108;
}
else
{
uint8_t x_109; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_109 = !lean_is_exclusive(x_104);
if (x_109 == 0)
{
return x_104;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_104, 0);
x_111 = lean_ctor_get(x_104, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_104);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
}
else
{
uint8_t x_185; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_16);
if (x_185 == 0)
{
return x_16;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_16, 0);
x_187 = lean_ctor_get(x_16, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_16);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_189 = !lean_is_exclusive(x_14);
if (x_189 == 0)
{
return x_14;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_14, 0);
x_191 = lean_ctor_get(x_14, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_14);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_193 = lean_ctor_get(x_7, 0);
x_194 = lean_ctor_get(x_7, 2);
x_195 = lean_ctor_get(x_7, 3);
x_196 = lean_ctor_get(x_7, 4);
x_197 = lean_ctor_get(x_7, 5);
x_198 = lean_ctor_get(x_7, 6);
x_199 = lean_ctor_get(x_7, 7);
lean_inc(x_199);
lean_inc(x_198);
lean_inc(x_197);
lean_inc(x_196);
lean_inc(x_195);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_7);
x_200 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_200, 0, x_193);
lean_ctor_set(x_200, 1, x_11);
lean_ctor_set(x_200, 2, x_194);
lean_ctor_set(x_200, 3, x_195);
lean_ctor_set(x_200, 4, x_196);
lean_ctor_set(x_200, 5, x_197);
lean_ctor_set(x_200, 6, x_198);
lean_ctor_set(x_200, 7, x_199);
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_201 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState(x_2, x_5, x_6, x_200, x_8, x_9);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; 
x_202 = lean_ctor_get(x_201, 1);
lean_inc(x_202);
lean_dec(x_201);
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_203 = l_Lean_Meta_Match_isCurrVarInductive(x_2, x_5, x_6, x_200, x_8, x_202);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_277; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_277 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isDone(x_2);
if (x_277 == 0)
{
uint8_t x_278; 
x_278 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasAsPattern(x_2);
if (x_278 == 0)
{
uint8_t x_279; 
x_279 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNatValueTransition(x_2);
if (x_279 == 0)
{
uint8_t x_280; 
x_280 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isNextVar(x_2);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_204);
x_281 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3;
x_282 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_281, x_4, x_5, x_6, x_200, x_8, x_205);
x_283 = lean_ctor_get(x_282, 1);
lean_inc(x_283);
lean_dec(x_282);
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_284 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable(x_2, x_5, x_6, x_200, x_8, x_283);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
x_287 = lean_unsigned_to_nat(0u);
x_288 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_285, x_287, x_4, x_5, x_6, x_200, x_8, x_286);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_289 = lean_ctor_get(x_284, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_284, 1);
lean_inc(x_290);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 lean_ctor_release(x_284, 1);
 x_291 = x_284;
} else {
 lean_dec_ref(x_284);
 x_291 = lean_box(0);
}
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 2, 0);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_289);
lean_ctor_set(x_292, 1, x_290);
return x_292;
}
}
else
{
uint8_t x_293; 
x_293 = lean_unbox(x_204);
lean_dec(x_204);
if (x_293 == 0)
{
lean_object* x_294; 
x_294 = lean_box(0);
x_206 = x_294;
goto block_276;
}
else
{
uint8_t x_295; 
x_295 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isConstructorTransition(x_2);
if (x_295 == 0)
{
lean_object* x_296; 
x_296 = lean_box(0);
x_206 = x_296;
goto block_276;
}
else
{
lean_object* x_297; 
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_297 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor(x_2, x_5, x_6, x_200, x_8, x_205);
if (lean_obj_tag(x_297) == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_298 = lean_ctor_get(x_297, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_297, 1);
lean_inc(x_299);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 x_300 = x_297;
} else {
 lean_dec_ref(x_297);
 x_300 = lean_box(0);
}
x_301 = lean_array_get_size(x_298);
x_302 = lean_unsigned_to_nat(0u);
x_303 = lean_nat_dec_lt(x_302, x_301);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; 
lean_dec(x_301);
lean_dec(x_298);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_304 = lean_box(0);
if (lean_is_scalar(x_300)) {
 x_305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_305 = x_300;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_299);
return x_305;
}
else
{
uint8_t x_306; 
x_306 = lean_nat_dec_le(x_301, x_301);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; 
lean_dec(x_301);
lean_dec(x_298);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_307 = lean_box(0);
if (lean_is_scalar(x_300)) {
 x_308 = lean_alloc_ctor(0, 2, 0);
} else {
 x_308 = x_300;
}
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_299);
return x_308;
}
else
{
size_t x_309; size_t x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_300);
x_309 = 0;
x_310 = lean_usize_of_nat(x_301);
lean_dec(x_301);
x_311 = lean_box(0);
x_312 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_298, x_309, x_310, x_311, x_4, x_5, x_6, x_200, x_8, x_299);
lean_dec(x_298);
return x_312;
}
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_313 = lean_ctor_get(x_297, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_297, 1);
lean_inc(x_314);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 x_315 = x_297;
} else {
 lean_dec_ref(x_297);
 x_315 = lean_box(0);
}
if (lean_is_scalar(x_315)) {
 x_316 = lean_alloc_ctor(1, 2, 0);
} else {
 x_316 = x_315;
}
lean_ctor_set(x_316, 0, x_313);
lean_ctor_set(x_316, 1, x_314);
return x_316;
}
}
}
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec(x_204);
x_317 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1;
x_318 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_317, x_4, x_5, x_6, x_200, x_8, x_205);
x_319 = lean_ctor_get(x_318, 1);
lean_inc(x_319);
lean_dec(x_318);
x_320 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(x_2);
x_321 = lean_unsigned_to_nat(0u);
x_322 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_320, x_321, x_4, x_5, x_6, x_200, x_8, x_319);
return x_322;
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_204);
x_323 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4;
x_324 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_323, x_4, x_5, x_6, x_200, x_8, x_205);
x_325 = lean_ctor_get(x_324, 1);
lean_inc(x_325);
lean_dec(x_324);
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_326 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern(x_2, x_5, x_6, x_200, x_8, x_325);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_327 = lean_ctor_get(x_326, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_326, 1);
lean_inc(x_328);
lean_dec(x_326);
x_329 = lean_unsigned_to_nat(0u);
x_330 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_327, x_329, x_4, x_5, x_6, x_200, x_8, x_328);
return x_330;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_331 = lean_ctor_get(x_326, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_326, 1);
lean_inc(x_332);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 x_333 = x_326;
} else {
 lean_dec_ref(x_326);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(1, 2, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_331);
lean_ctor_set(x_334, 1, x_332);
return x_334;
}
}
}
else
{
lean_object* x_335; 
lean_dec(x_204);
x_335 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf(x_2, x_4, x_5, x_6, x_200, x_8, x_205);
return x_335;
}
block_276:
{
uint8_t x_207; 
lean_dec(x_206);
x_207 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isVariableTransition(x_2);
if (x_207 == 0)
{
uint8_t x_208; 
x_208 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isValueTransition(x_2);
if (x_208 == 0)
{
uint8_t x_209; 
x_209 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_isArrayLitTransition(x_2);
if (x_209 == 0)
{
uint8_t x_210; 
x_210 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_hasNatValPattern(x_2);
if (x_210 == 0)
{
lean_object* x_211; 
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_211 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes(x_2, x_5, x_6, x_200, x_8, x_205);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_211, 1);
lean_inc(x_212);
lean_dec(x_211);
x_213 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported(x_2, x_5, x_6, x_200, x_8, x_212);
return x_213;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_214 = lean_ctor_get(x_211, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_211, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_216 = x_211;
} else {
 lean_dec_ref(x_211);
 x_216 = lean_box(0);
}
if (lean_is_scalar(x_216)) {
 x_217 = lean_alloc_ctor(1, 2, 0);
} else {
 x_217 = x_216;
}
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_218 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1;
x_219 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_218, x_4, x_5, x_6, x_200, x_8, x_205);
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
x_221 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern(x_2);
x_222 = lean_unsigned_to_nat(0u);
x_223 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_221, x_222, x_4, x_5, x_6, x_200, x_8, x_220);
return x_223;
}
}
else
{
lean_object* x_224; 
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_224 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit(x_2, x_5, x_6, x_200, x_8, x_205);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_227 = x_224;
} else {
 lean_dec_ref(x_224);
 x_227 = lean_box(0);
}
x_228 = lean_array_get_size(x_225);
x_229 = lean_unsigned_to_nat(0u);
x_230 = lean_nat_dec_lt(x_229, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
lean_dec(x_228);
lean_dec(x_225);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_231 = lean_box(0);
if (lean_is_scalar(x_227)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_227;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_226);
return x_232;
}
else
{
uint8_t x_233; 
x_233 = lean_nat_dec_le(x_228, x_228);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; 
lean_dec(x_228);
lean_dec(x_225);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_234 = lean_box(0);
if (lean_is_scalar(x_227)) {
 x_235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_235 = x_227;
}
lean_ctor_set(x_235, 0, x_234);
lean_ctor_set(x_235, 1, x_226);
return x_235;
}
else
{
size_t x_236; size_t x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_227);
x_236 = 0;
x_237 = lean_usize_of_nat(x_228);
lean_dec(x_228);
x_238 = lean_box(0);
x_239 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_225, x_236, x_237, x_238, x_4, x_5, x_6, x_200, x_8, x_226);
lean_dec(x_225);
return x_239;
}
}
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_240 = lean_ctor_get(x_224, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_224, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_242 = x_224;
} else {
 lean_dec_ref(x_224);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(1, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_240);
lean_ctor_set(x_243, 1, x_241);
return x_243;
}
}
}
else
{
lean_object* x_244; 
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_244 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue(x_2, x_5, x_6, x_200, x_8, x_205);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_244, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_247 = x_244;
} else {
 lean_dec_ref(x_244);
 x_247 = lean_box(0);
}
x_248 = lean_array_get_size(x_245);
x_249 = lean_unsigned_to_nat(0u);
x_250 = lean_nat_dec_lt(x_249, x_248);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; 
lean_dec(x_248);
lean_dec(x_245);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_251 = lean_box(0);
if (lean_is_scalar(x_247)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_247;
}
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_246);
return x_252;
}
else
{
uint8_t x_253; 
x_253 = lean_nat_dec_le(x_248, x_248);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_248);
lean_dec(x_245);
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_254 = lean_box(0);
if (lean_is_scalar(x_247)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_247;
}
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_246);
return x_255;
}
else
{
size_t x_256; size_t x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_247);
x_256 = 0;
x_257 = lean_usize_of_nat(x_248);
lean_dec(x_248);
x_258 = lean_box(0);
x_259 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_245, x_256, x_257, x_258, x_4, x_5, x_6, x_200, x_8, x_246);
lean_dec(x_245);
return x_259;
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_260 = lean_ctor_get(x_244, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_244, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_262 = x_244;
} else {
 lean_dec_ref(x_244);
 x_262 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_262;
}
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_264 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2;
x_265 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep(x_264, x_4, x_5, x_6, x_200, x_8, x_205);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
lean_dec(x_265);
lean_inc(x_8);
lean_inc(x_200);
lean_inc(x_6);
lean_inc(x_5);
x_267 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable(x_2, x_5, x_6, x_200, x_8, x_266);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_unsigned_to_nat(0u);
x_271 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_268, x_270, x_4, x_5, x_6, x_200, x_8, x_269);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_272 = lean_ctor_get(x_267, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_267, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_274 = x_267;
} else {
 lean_dec_ref(x_267);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
}
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_336 = lean_ctor_get(x_203, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_203, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_338 = x_203;
} else {
 lean_dec_ref(x_203);
 x_338 = lean_box(0);
}
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(1, 2, 0);
} else {
 x_339 = x_338;
}
lean_ctor_set(x_339, 0, x_336);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
lean_dec(x_200);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_340 = lean_ctor_get(x_201, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_201, 1);
lean_inc(x_341);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_342 = x_201;
} else {
 lean_dec_ref(x_201);
 x_342 = lean_box(0);
}
if (lean_is_scalar(x_342)) {
 x_343 = lean_alloc_ctor(1, 2, 0);
} else {
 x_343 = x_342;
}
lean_ctor_set(x_343, 0, x_340);
lean_ctor_set(x_343, 1, x_341);
return x_343;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1(x_8, x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_1);
x_13 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_14 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2(x_13, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_1, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed with #");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", trying #");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_7, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_3, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_1);
x_19 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess(x_19, x_3, x_4, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_2, x_23);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_findNext___boxed), 7, 2);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_24);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_26 = l_Lean_Meta_Match_withGoalOf___rarg(x_1, x_25, x_4, x_5, x_6, x_7, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
lean_ctor_set_tag(x_26, 1);
lean_ctor_set(x_26, 0, x_21);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_45; lean_object* x_46; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_66 = lean_st_ref_get(x_7, x_32);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_67, 3);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get_uint8(x_68, sizeof(void*)*1);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
x_71 = 0;
x_45 = x_71;
x_46 = x_70;
goto block_65;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_dec(x_66);
x_73 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_74 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__1(x_73, x_3, x_4, x_5, x_6, x_7, x_72);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_unbox(x_75);
lean_dec(x_75);
x_45 = x_77;
x_46 = x_76;
goto block_65;
}
block_44:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_st_ref_get(x_7, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_set(x_5, x_12, x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_st_ref_get(x_7, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_set(x_3, x_17, x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_2 = x_33;
x_8 = x_42;
goto _start;
}
block_65:
{
if (x_45 == 0)
{
lean_dec(x_21);
lean_dec(x_2);
x_34 = x_46;
goto block_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_47 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_2);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_33);
x_53 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_33);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_KernelException_toMessageData___closed__15;
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_Exception_toMessageData(x_21);
x_59 = l_Lean_indentD(x_58);
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_56);
x_62 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_63 = l_Lean_addTrace___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___spec__2(x_62, x_61, x_3, x_4, x_5, x_6, x_7, x_46);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_34 = x_64;
goto block_44;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_26);
if (x_78 == 0)
{
return x_26;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_26, 0);
x_80 = lean_ctor_get(x_26, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_26);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__1(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f_match__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_level_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("dependent match elimination failed, universe level not found");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_levelZero;
x_9 = lean_level_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_List_redLength___rarg(x_1);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_dec(x_10);
x_12 = l_List_toArrayAux___rarg(x_1, x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1(x_12, x_2, x_13);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2;
x_16 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2(x_15, x_3, x_4, x_5, x_6, x_7);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_7);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_7);
return x_23;
}
}
}
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bootstrap");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("genMatcherCode");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2;
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("disable code generation for auxiliary matcher function");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1;
x_3 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4;
x_3 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6;
x_4 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_53____spec__1(x_2, x_3, x_1);
return x_4;
}
}
uint8_t l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
return x_2;
}
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_instBEqExpr;
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instHashableBool___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_instHashableExpr;
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_PersistentHashMap_root___default___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6;
x_2 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7;
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____lambda__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcherAuxDefinition_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_expr_eqv(x_10, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = lean_unbox(x_11);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = lean_unbox(x_13);
lean_dec(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_4, x_22);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_23;
goto _start;
}
}
else
{
uint8_t x_25; 
x_25 = lean_unbox(x_13);
lean_dec(x_13);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_4, x_26);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_expr_eqv(x_13, x_15);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_12);
x_18 = lean_box(0);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_unbox(x_14);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = lean_unbox(x_16);
lean_dec(x_16);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_12);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_12);
x_22 = lean_box(0);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = lean_unbox(x_16);
lean_dec(x_16);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_12);
x_24 = lean_box(0);
return x_24;
}
else
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_12);
return x_25;
}
}
}
}
case 1:
{
lean_object* x_26; size_t x_27; 
x_26 = lean_ctor_get(x_10, 0);
lean_inc(x_26);
lean_dec(x_10);
x_27 = x_2 >> x_5 % (sizeof(size_t) * 8);
x_1 = x_26;
x_2 = x_27;
goto _start;
}
default: 
{
lean_object* x_29; 
x_29 = lean_box(0);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_unsigned_to_nat(0u);
x_33 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3(x_30, x_31, lean_box(0), x_32, x_3);
lean_dec(x_31);
lean_dec(x_30);
return x_33;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; size_t x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_Expr_hash(x_4);
x_7 = lean_unbox(x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 13;
x_9 = lean_usize_mix_hash(x_6, x_8);
x_10 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2(x_3, x_9, x_2);
return x_10;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = 11;
x_12 = lean_usize_mix_hash(x_6, x_11);
x_13 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2(x_3, x_12, x_2);
return x_13;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; uint8_t x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = 1;
x_12 = x_1 - x_11;
x_13 = 5;
x_14 = x_13 * x_12;
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
x_19 = l_Lean_Expr_hash(x_17);
lean_dec(x_17);
x_20 = lean_unbox(x_18);
lean_dec(x_18);
if (x_20 == 0)
{
size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_21 = 13;
x_22 = lean_usize_mix_hash(x_19, x_21);
x_23 = x_22 >> x_14 % (sizeof(size_t) * 8);
x_24 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_6, x_23, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_16;
x_6 = x_24;
goto _start;
}
else
{
size_t x_26; size_t x_27; size_t x_28; lean_object* x_29; 
x_26 = 11;
x_27 = lean_usize_mix_hash(x_19, x_26);
x_28 = x_27 >> x_14 % (sizeof(size_t) * 8);
x_29 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_6, x_28, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_16;
x_6 = x_29;
goto _start;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_array_fget(x_5, x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_expr_eqv(x_23, x_25);
lean_dec(x_25);
lean_dec(x_23);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_6);
lean_dec(x_5);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_2, x_28);
lean_dec(x_2);
x_2 = x_29;
goto _start;
}
else
{
uint8_t x_31; 
x_31 = lean_unbox(x_24);
lean_dec(x_24);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = lean_unbox(x_26);
lean_dec(x_26);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_1);
x_33 = lean_box(0);
x_17 = x_33;
goto block_21;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_6);
lean_dec(x_5);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_2, x_34);
lean_dec(x_2);
x_2 = x_35;
goto _start;
}
}
else
{
uint8_t x_37; 
x_37 = lean_unbox(x_26);
lean_dec(x_26);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_6);
lean_dec(x_5);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
lean_dec(x_2);
x_2 = x_39;
goto _start;
}
else
{
lean_object* x_41; 
lean_dec(x_1);
x_41 = lean_box(0);
x_17 = x_41;
goto block_21;
}
}
}
block_21:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
x_18 = lean_array_fset(x_5, x_2, x_3);
x_19 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
x_25 = lean_expr_eqv(x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_15);
x_26 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_array_fset(x_17, x_12, x_27);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_28);
return x_1;
}
else
{
uint8_t x_29; 
x_29 = lean_unbox(x_22);
lean_dec(x_22);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_unbox(x_24);
lean_dec(x_24);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_31 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_free_object(x_15);
x_32 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_array_fset(x_17, x_12, x_33);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
else
{
uint8_t x_35; 
x_35 = lean_unbox(x_24);
lean_dec(x_24);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_free_object(x_15);
x_36 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_array_fset(x_17, x_12, x_37);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_38);
return x_1;
}
else
{
lean_object* x_39; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_ctor_get(x_15, 0);
x_41 = lean_ctor_get(x_15, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_15);
x_42 = lean_ctor_get(x_4, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_4, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
x_46 = lean_expr_eqv(x_42, x_44);
lean_dec(x_44);
lean_dec(x_42);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_45);
lean_dec(x_43);
x_47 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_40, x_41, x_4, x_5);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_array_fset(x_17, x_12, x_48);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_49);
return x_1;
}
else
{
uint8_t x_50; 
x_50 = lean_unbox(x_43);
lean_dec(x_43);
if (x_50 == 0)
{
uint8_t x_51; 
x_51 = lean_unbox(x_45);
lean_dec(x_45);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_41);
lean_dec(x_40);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_4);
lean_ctor_set(x_52, 1, x_5);
x_53 = lean_array_fset(x_17, x_12, x_52);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_53);
return x_1;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_40, x_41, x_4, x_5);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_array_fset(x_17, x_12, x_55);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_56);
return x_1;
}
}
else
{
uint8_t x_57; 
x_57 = lean_unbox(x_45);
lean_dec(x_45);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_40, x_41, x_4, x_5);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_array_fset(x_17, x_12, x_59);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_60);
return x_1;
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_41);
lean_dec(x_40);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_4);
lean_ctor_set(x_61, 1, x_5);
x_62 = lean_array_fset(x_17, x_12, x_61);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_62);
return x_1;
}
}
}
}
}
case 1:
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_15);
if (x_63 == 0)
{
lean_object* x_64; size_t x_65; size_t x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_15, 0);
x_65 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_66 = x_3 + x_8;
x_67 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_64, x_65, x_66, x_4, x_5);
lean_ctor_set(x_15, 0, x_67);
x_68 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_68);
return x_1;
}
else
{
lean_object* x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_15, 0);
lean_inc(x_69);
lean_dec(x_15);
x_70 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_71 = x_3 + x_8;
x_72 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_69, x_70, x_71, x_4, x_5);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_array_fset(x_17, x_12, x_73);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_74);
return x_1;
}
}
default: 
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_4);
lean_ctor_set(x_75, 1, x_5);
x_76 = lean_array_fset(x_17, x_12, x_75);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_76);
return x_1;
}
}
}
}
else
{
lean_object* x_77; size_t x_78; size_t x_79; size_t x_80; size_t x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
lean_dec(x_1);
x_78 = 1;
x_79 = 5;
x_80 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_81 = x_2 & x_80;
x_82 = lean_usize_to_nat(x_81);
x_83 = lean_array_get_size(x_77);
x_84 = lean_nat_dec_lt(x_82, x_83);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
lean_dec(x_82);
lean_dec(x_5);
lean_dec(x_4);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_77);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_array_fget(x_77, x_82);
x_87 = lean_box(2);
x_88 = lean_array_fset(x_77, x_82, x_87);
switch (lean_obj_tag(x_86)) {
case 0:
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_89 = lean_ctor_get(x_86, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_86, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_91 = x_86;
} else {
 lean_dec_ref(x_86);
 x_91 = lean_box(0);
}
x_92 = lean_ctor_get(x_4, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_4, 1);
lean_inc(x_93);
x_94 = lean_ctor_get(x_89, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_89, 1);
lean_inc(x_95);
x_96 = lean_expr_eqv(x_92, x_94);
lean_dec(x_94);
lean_dec(x_92);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_91);
x_97 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_89, x_90, x_4, x_5);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_array_fset(x_88, x_82, x_98);
lean_dec(x_82);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
else
{
uint8_t x_101; 
x_101 = lean_unbox(x_93);
lean_dec(x_93);
if (x_101 == 0)
{
uint8_t x_102; 
x_102 = lean_unbox(x_95);
lean_dec(x_95);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_90);
lean_dec(x_89);
if (lean_is_scalar(x_91)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_91;
}
lean_ctor_set(x_103, 0, x_4);
lean_ctor_set(x_103, 1, x_5);
x_104 = lean_array_fset(x_88, x_82, x_103);
lean_dec(x_82);
x_105 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_105, 0, x_104);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_91);
x_106 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_89, x_90, x_4, x_5);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_108 = lean_array_fset(x_88, x_82, x_107);
lean_dec(x_82);
x_109 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_109, 0, x_108);
return x_109;
}
}
else
{
uint8_t x_110; 
x_110 = lean_unbox(x_95);
lean_dec(x_95);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_91);
x_111 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_89, x_90, x_4, x_5);
x_112 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_113 = lean_array_fset(x_88, x_82, x_112);
lean_dec(x_82);
x_114 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_114, 0, x_113);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_90);
lean_dec(x_89);
if (lean_is_scalar(x_91)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_91;
}
lean_ctor_set(x_115, 0, x_4);
lean_ctor_set(x_115, 1, x_5);
x_116 = lean_array_fset(x_88, x_82, x_115);
lean_dec(x_82);
x_117 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_117, 0, x_116);
return x_117;
}
}
}
}
case 1:
{
lean_object* x_118; lean_object* x_119; size_t x_120; size_t x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_118 = lean_ctor_get(x_86, 0);
lean_inc(x_118);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 x_119 = x_86;
} else {
 lean_dec_ref(x_86);
 x_119 = lean_box(0);
}
x_120 = x_2 >> x_79 % (sizeof(size_t) * 8);
x_121 = x_3 + x_78;
x_122 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_118, x_120, x_121, x_4, x_5);
if (lean_is_scalar(x_119)) {
 x_123 = lean_alloc_ctor(1, 1, 0);
} else {
 x_123 = x_119;
}
lean_ctor_set(x_123, 0, x_122);
x_124 = lean_array_fset(x_88, x_82, x_123);
lean_dec(x_82);
x_125 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_125, 0, x_124);
return x_125;
}
default: 
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_4);
lean_ctor_set(x_126, 1, x_5);
x_127 = lean_array_fset(x_88, x_82, x_126);
lean_dec(x_82);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_127);
return x_128;
}
}
}
}
}
else
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_1);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; size_t x_132; uint8_t x_133; 
x_130 = lean_unsigned_to_nat(0u);
x_131 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__7(x_1, x_130, x_4, x_5);
x_132 = 7;
x_133 = x_132 <= x_3;
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_134 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_131);
x_135 = lean_unsigned_to_nat(4u);
x_136 = lean_nat_dec_lt(x_134, x_135);
lean_dec(x_134);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_131, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_131, 1);
lean_inc(x_138);
lean_dec(x_131);
x_139 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_140 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6(x_3, x_137, x_138, lean_box(0), x_130, x_139);
lean_dec(x_138);
lean_dec(x_137);
return x_140;
}
else
{
return x_131;
}
}
else
{
return x_131;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; size_t x_146; uint8_t x_147; 
x_141 = lean_ctor_get(x_1, 0);
x_142 = lean_ctor_get(x_1, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_1);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_unsigned_to_nat(0u);
x_145 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__7(x_143, x_144, x_4, x_5);
x_146 = 7;
x_147 = x_146 <= x_3;
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_148 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_145);
x_149 = lean_unsigned_to_nat(4u);
x_150 = lean_nat_dec_lt(x_148, x_149);
lean_dec(x_148);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_145, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_145, 1);
lean_inc(x_152);
lean_dec(x_145);
x_153 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_154 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6(x_3, x_151, x_152, lean_box(0), x_144, x_153);
lean_dec(x_152);
lean_dec(x_151);
return x_154;
}
else
{
return x_145;
}
}
else
{
return x_145;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; uint8_t x_13; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = 1;
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = l_Lean_Expr_hash(x_10);
lean_dec(x_10);
x_13 = lean_unbox(x_11);
lean_dec(x_11);
if (x_13 == 0)
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = 13;
x_15 = lean_usize_mix_hash(x_12, x_14);
x_16 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_5, x_15, x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = 11;
x_18 = lean_usize_mix_hash(x_12, x_17);
x_19 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_5, x_18, x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; size_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = 1;
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_21, x_23);
lean_dec(x_21);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
x_27 = l_Lean_Expr_hash(x_25);
lean_dec(x_25);
x_28 = lean_unbox(x_26);
lean_dec(x_26);
if (x_28 == 0)
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = 13;
x_30 = lean_usize_mix_hash(x_27, x_29);
x_31 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_20, x_30, x_22, x_2, x_3);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_24);
return x_32;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = 11;
x_34 = lean_usize_mix_hash(x_27, x_33);
x_35 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_20, x_34, x_22, x_2, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
return x_36;
}
}
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_insert___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__4(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__1), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
x_16 = l_Lean_Meta_Match_matcherExt;
x_17 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_16, x_14, x_15);
lean_ctor_set(x_11, 0, x_17);
x_18 = lean_st_ref_set(x_8, x_11, x_12);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_3, 3);
lean_inc(x_21);
x_22 = lean_array_to_list(lean_box(0), x_21);
x_23 = l_Lean_mkConst(x_2, x_22);
x_24 = lean_ctor_get(x_3, 4);
lean_inc(x_24);
lean_dec(x_3);
x_25 = l_Lean_mkAppN(x_23, x_24);
lean_dec(x_24);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_18, 0, x_28);
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_dec(x_18);
x_30 = lean_ctor_get(x_3, 3);
lean_inc(x_30);
x_31 = lean_array_to_list(lean_box(0), x_30);
x_32 = l_Lean_mkConst(x_2, x_31);
x_33 = lean_ctor_get(x_3, 4);
lean_inc(x_33);
lean_dec(x_3);
x_34 = l_Lean_mkAppN(x_32, x_33);
lean_dec(x_33);
x_35 = 1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_29);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_39 = lean_ctor_get(x_11, 0);
x_40 = lean_ctor_get(x_11, 1);
x_41 = lean_ctor_get(x_11, 2);
x_42 = lean_ctor_get(x_11, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_11);
lean_inc(x_2);
x_43 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__1), 3, 2);
lean_closure_set(x_43, 0, x_1);
lean_closure_set(x_43, 1, x_2);
x_44 = l_Lean_Meta_Match_matcherExt;
x_45 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_44, x_39, x_43);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_40);
lean_ctor_set(x_46, 2, x_41);
lean_ctor_set(x_46, 3, x_42);
x_47 = lean_st_ref_set(x_8, x_46, x_12);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
x_50 = lean_ctor_get(x_3, 3);
lean_inc(x_50);
x_51 = lean_array_to_list(lean_box(0), x_50);
x_52 = l_Lean_mkConst(x_2, x_51);
x_53 = lean_ctor_get(x_3, 4);
lean_inc(x_53);
lean_dec(x_3);
x_54 = l_Lean_mkAppN(x_52, x_53);
lean_dec(x_53);
x_55 = 1;
x_56 = lean_box(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
if (lean_is_scalar(x_49)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_49;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_48);
return x_58;
}
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_191; lean_object* x_192; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_209 = lean_st_ref_get(x_7, x_8);
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_210, 3);
lean_inc(x_211);
lean_dec(x_210);
x_212 = lean_ctor_get_uint8(x_211, sizeof(void*)*1);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; uint8_t x_214; 
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
lean_dec(x_209);
x_214 = 0;
x_191 = x_214;
x_192 = x_213;
goto block_208;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_dec(x_209);
x_216 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_217 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_216, x_4, x_5, x_6, x_7, x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_unbox(x_218);
lean_dec(x_218);
x_191 = x_220;
x_192 = x_219;
goto block_208;
}
block_190:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
x_11 = l_Lean_Meta_Match_bootstrap_genMatcherCode;
x_12 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_10, x_11);
lean_dec(x_10);
x_13 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Lean_Meta_Closure_mkValueTypeClosure(x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Meta_Match_matcherExt;
x_23 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_22, x_21);
x_24 = lean_ctor_get(x_15, 2);
lean_inc(x_24);
x_25 = lean_box(x_12);
lean_inc(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1(x_23, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint32_t x_33; uint32_t x_34; uint32_t x_35; lean_object* x_36; uint8_t x_37; uint8_t x_89; 
lean_free_object(x_17);
x_28 = lean_ctor_get(x_15, 0);
lean_inc(x_28);
x_29 = lean_array_to_list(lean_box(0), x_28);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_30);
lean_inc(x_1);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_31, 2, x_30);
lean_inc(x_24);
lean_inc(x_21);
x_32 = l_Lean_getMaxHeight(x_21, x_24);
x_33 = lean_unbox_uint32(x_32);
lean_dec(x_32);
x_34 = 1;
x_35 = x_33 + x_34;
x_36 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_36, 0, x_35);
lean_inc(x_30);
lean_inc(x_21);
x_89 = l_Lean_Environment_hasUnsafe(x_21, x_30);
if (x_89 == 0)
{
uint8_t x_90; 
lean_inc(x_24);
x_90 = l_Lean_Environment_hasUnsafe(x_21, x_24);
if (x_90 == 0)
{
uint8_t x_91; 
x_91 = 1;
x_37 = x_91;
goto block_88;
}
else
{
uint8_t x_92; 
x_92 = 0;
x_37 = x_92;
goto block_88;
}
}
else
{
uint8_t x_93; 
lean_dec(x_21);
x_93 = 0;
x_37 = x_93;
goto block_88;
}
block_88:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_59; lean_object* x_60; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_inc(x_24);
x_38 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_24);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*3, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_77 = lean_st_ref_get(x_7, x_20);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 3);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_ctor_get_uint8(x_79, sizeof(void*)*1);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_77, 1);
lean_inc(x_81);
lean_dec(x_77);
x_59 = x_13;
x_60 = x_81;
goto block_76;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_82 = lean_ctor_get(x_77, 1);
lean_inc(x_82);
lean_dec(x_77);
x_83 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_84 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_83, x_4, x_5, x_6, x_7, x_82);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unbox(x_85);
lean_dec(x_85);
x_59 = x_87;
x_60 = x_86;
goto block_76;
}
block_58:
{
lean_object* x_41; 
lean_inc(x_6);
x_41 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_39, x_4, x_5, x_6, x_7, x_40);
if (lean_obj_tag(x_41) == 0)
{
if (x_12 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_box(0);
x_44 = l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(x_26, x_1, x_15, x_43, x_4, x_5, x_6, x_7, x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
lean_inc(x_6);
x_46 = l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__4(x_39, x_4, x_5, x_6, x_7, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(x_26, x_1, x_15, x_47, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_47);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_46);
if (x_50 == 0)
{
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_46, 0);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_46);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_39);
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_41);
if (x_54 == 0)
{
return x_41;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_41, 0);
x_56 = lean_ctor_get(x_41, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_41);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
block_76:
{
if (x_59 == 0)
{
lean_dec(x_30);
lean_dec(x_24);
x_40 = x_60;
goto block_58;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_inc(x_1);
x_61 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_61, 0, x_1);
x_62 = l_Lean_KernelException_toMessageData___closed__15;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_Meta_mkHasTypeButIsExpectedMsg___closed__3;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_30);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_24);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_62);
x_73 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_74 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_73, x_72, x_4, x_5, x_6, x_7, x_60);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_40 = x_75;
goto block_58;
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_94 = lean_ctor_get(x_27, 0);
lean_inc(x_94);
lean_dec(x_27);
x_95 = lean_ctor_get(x_15, 3);
lean_inc(x_95);
x_96 = lean_array_to_list(lean_box(0), x_95);
x_97 = l_Lean_mkConst(x_94, x_96);
x_98 = lean_ctor_get(x_15, 4);
lean_inc(x_98);
lean_dec(x_15);
x_99 = l_Lean_mkAppN(x_97, x_98);
lean_dec(x_98);
x_100 = lean_box(x_13);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
lean_ctor_set(x_17, 0, x_101);
return x_17;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_102 = lean_ctor_get(x_17, 0);
x_103 = lean_ctor_get(x_17, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_17);
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Meta_Match_matcherExt;
x_106 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_105, x_104);
x_107 = lean_ctor_get(x_15, 2);
lean_inc(x_107);
x_108 = lean_box(x_12);
lean_inc(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1(x_106, x_109);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint32_t x_116; uint32_t x_117; uint32_t x_118; lean_object* x_119; uint8_t x_120; uint8_t x_172; 
x_111 = lean_ctor_get(x_15, 0);
lean_inc(x_111);
x_112 = lean_array_to_list(lean_box(0), x_111);
x_113 = lean_ctor_get(x_15, 1);
lean_inc(x_113);
lean_inc(x_113);
lean_inc(x_1);
x_114 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_114, 0, x_1);
lean_ctor_set(x_114, 1, x_112);
lean_ctor_set(x_114, 2, x_113);
lean_inc(x_107);
lean_inc(x_104);
x_115 = l_Lean_getMaxHeight(x_104, x_107);
x_116 = lean_unbox_uint32(x_115);
lean_dec(x_115);
x_117 = 1;
x_118 = x_116 + x_117;
x_119 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_119, 0, x_118);
lean_inc(x_113);
lean_inc(x_104);
x_172 = l_Lean_Environment_hasUnsafe(x_104, x_113);
if (x_172 == 0)
{
uint8_t x_173; 
lean_inc(x_107);
x_173 = l_Lean_Environment_hasUnsafe(x_104, x_107);
if (x_173 == 0)
{
uint8_t x_174; 
x_174 = 1;
x_120 = x_174;
goto block_171;
}
else
{
uint8_t x_175; 
x_175 = 0;
x_120 = x_175;
goto block_171;
}
}
else
{
uint8_t x_176; 
lean_dec(x_104);
x_176 = 0;
x_120 = x_176;
goto block_171;
}
block_171:
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_142; lean_object* x_143; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
lean_inc(x_107);
x_121 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_121, 0, x_114);
lean_ctor_set(x_121, 1, x_107);
lean_ctor_set(x_121, 2, x_119);
lean_ctor_set_uint8(x_121, sizeof(void*)*3, x_120);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
x_160 = lean_st_ref_get(x_7, x_103);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_161, 3);
lean_inc(x_162);
lean_dec(x_161);
x_163 = lean_ctor_get_uint8(x_162, sizeof(void*)*1);
lean_dec(x_162);
if (x_163 == 0)
{
lean_object* x_164; 
x_164 = lean_ctor_get(x_160, 1);
lean_inc(x_164);
lean_dec(x_160);
x_142 = x_13;
x_143 = x_164;
goto block_159;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_165 = lean_ctor_get(x_160, 1);
lean_inc(x_165);
lean_dec(x_160);
x_166 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_167 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_166, x_4, x_5, x_6, x_7, x_165);
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
x_170 = lean_unbox(x_168);
lean_dec(x_168);
x_142 = x_170;
x_143 = x_169;
goto block_159;
}
block_141:
{
lean_object* x_124; 
lean_inc(x_6);
x_124 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_122, x_4, x_5, x_6, x_7, x_123);
if (lean_obj_tag(x_124) == 0)
{
if (x_12 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_122);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = lean_box(0);
x_127 = l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(x_109, x_1, x_15, x_126, x_4, x_5, x_6, x_7, x_125);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_124, 1);
lean_inc(x_128);
lean_dec(x_124);
lean_inc(x_6);
x_129 = l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__4(x_122, x_4, x_5, x_6, x_7, x_128);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(x_109, x_1, x_15, x_130, x_4, x_5, x_6, x_7, x_131);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_130);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_109);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_133 = lean_ctor_get(x_129, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_129, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_135 = x_129;
} else {
 lean_dec_ref(x_129);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_122);
lean_dec(x_109);
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_137 = lean_ctor_get(x_124, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_124, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_139 = x_124;
} else {
 lean_dec_ref(x_124);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
block_159:
{
if (x_142 == 0)
{
lean_dec(x_113);
lean_dec(x_107);
x_123 = x_143;
goto block_141;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_inc(x_1);
x_144 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_144, 0, x_1);
x_145 = l_Lean_KernelException_toMessageData___closed__15;
x_146 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
x_147 = l_Lean_Meta_mkHasTypeButIsExpectedMsg___closed__3;
x_148 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_149, 0, x_113);
x_150 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_152 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_153, 0, x_107);
x_154 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_145);
x_156 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_157 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_156, x_155, x_4, x_5, x_6, x_7, x_143);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_123 = x_158;
goto block_141;
}
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_109);
lean_dec(x_107);
lean_dec(x_104);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_177 = lean_ctor_get(x_110, 0);
lean_inc(x_177);
lean_dec(x_110);
x_178 = lean_ctor_get(x_15, 3);
lean_inc(x_178);
x_179 = lean_array_to_list(lean_box(0), x_178);
x_180 = l_Lean_mkConst(x_177, x_179);
x_181 = lean_ctor_get(x_15, 4);
lean_inc(x_181);
lean_dec(x_15);
x_182 = l_Lean_mkAppN(x_180, x_181);
lean_dec(x_181);
x_183 = lean_box(x_13);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_103);
return x_185;
}
}
}
else
{
uint8_t x_186; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_186 = !lean_is_exclusive(x_14);
if (x_186 == 0)
{
return x_14;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_14, 0);
x_188 = lean_ctor_get(x_14, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_14);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
return x_189;
}
}
}
block_208:
{
if (x_191 == 0)
{
x_9 = x_192;
goto block_190;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_inc(x_1);
x_193 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_193, 0, x_1);
x_194 = l_Lean_KernelException_toMessageData___closed__15;
x_195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_193);
x_196 = l_Lean_Meta_mkHasTypeButIsExpectedMsg___closed__3;
x_197 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
lean_inc(x_2);
x_198 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_198, 0, x_2);
x_199 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
x_200 = l___private_Lean_Meta_ExprDefEq_0__Lean_Meta_checkTypesAndAssign___closed__7;
x_201 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_inc(x_3);
x_202 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_202, 0, x_3);
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_194);
x_205 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_598____closed__4;
x_206 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_205, x_204, x_4, x_5, x_6, x_7, x_192);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
lean_dec(x_206);
x_9 = x_207;
goto block_190;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_Match_mkMatcherAuxDefinition___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Match_mkMatcherAuxDefinition___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_map___at_Lean_Meta_Match_mkMatcher___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Expr_fvarId_x21(x_4);
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Expr_fvarId_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_13 = x_10;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_12;
x_3 = x_14;
goto _start;
}
}
}
uint8_t l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_List_elem___at_Lean_Occurrences_contains___spec__1(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_dec(x_4);
x_10 = lean_nat_add(x_9, x_8);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 0);
x_13 = l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_5);
x_4 = x_9;
x_5 = x_14;
goto _start;
}
else
{
lean_dec(x_11);
x_4 = x_9;
goto _start;
}
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_13 = x_10;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_12;
x_3 = x_14;
goto _start;
}
}
}
lean_object* l_List_map___at_Lean_Meta_Match_mkMatcher___spec__6(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__6(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__6(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matcher: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_23; lean_object* x_24; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_st_ref_get(x_12, x_13);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 3);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get_uint8(x_35, sizeof(void*)*1);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = 0;
x_23 = x_38;
x_24 = x_37;
goto block_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_dec(x_33);
lean_inc(x_7);
x_40 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_7, x_9, x_10, x_11, x_12, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_unbox(x_41);
lean_dec(x_41);
x_23 = x_43;
x_24 = x_42;
goto block_32;
}
block_22:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_List_lengthAux___rarg(x_1, x_15);
lean_inc(x_16);
x_17 = l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4(x_2, x_3, x_16, x_16, x_4);
lean_dec(x_16);
x_18 = lean_ctor_get(x_3, 1);
x_19 = l_List_reverse___rarg(x_17);
lean_inc(x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_14);
return x_21;
}
block_32:
{
if (x_23 == 0)
{
lean_dec(x_7);
x_14 = x_24;
goto block_22;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc(x_6);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_6);
x_26 = l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_KernelException_toMessageData___closed__15;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_7, x_29, x_9, x_10, x_11, x_12, x_24);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_14 = x_31;
goto block_22;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Std_HashSet_instInhabitedHashSet___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matcher levels: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", uElim: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matcher value: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\ntype: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_inc(x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = 0;
x_19 = lean_box(0);
lean_inc(x_12);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_17, x_18, x_19, x_12, x_13, x_14, x_15, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = lean_array_to_list(lean_box(0), x_2);
lean_inc(x_23);
x_24 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__1(x_23);
x_25 = l_Lean_Expr_mvarId_x21(x_21);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set(x_26, 2, x_10);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_box(0);
x_28 = lean_st_ref_get(x_15, x_22);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1;
x_31 = lean_st_mk_ref(x_30, x_29);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(0u);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_35 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search(x_26, x_34, x_32, x_12, x_13, x_14, x_15, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; uint8_t x_53; lean_object* x_54; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_get(x_15, x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_st_ref_get(x_32, x_38);
lean_dec(x_32);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_mkOptionalNode___closed__2;
x_43 = lean_array_push(x_42, x_3);
x_44 = l_Array_append___rarg(x_43, x_2);
lean_dec(x_2);
x_45 = lean_array_get_size(x_11);
x_46 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_47 = 0;
x_48 = x_11;
lean_inc(x_48);
x_49 = l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2(x_46, x_47, x_48);
x_50 = x_49;
x_51 = l_Array_append___rarg(x_44, x_50);
lean_dec(x_50);
x_52 = 0;
x_53 = 1;
lean_inc(x_12);
lean_inc(x_51);
x_54 = l_Lean_Meta_mkForallFVars(x_51, x_1, x_52, x_53, x_12, x_13, x_14, x_15, x_41);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_12);
x_57 = l_Lean_Meta_mkLambdaFVars(x_51, x_21, x_52, x_53, x_12, x_13, x_14, x_15, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_136; lean_object* x_137; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_150 = lean_st_ref_get(x_15, x_59);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_151, 3);
lean_inc(x_152);
lean_dec(x_151);
x_153 = lean_ctor_get_uint8(x_152, sizeof(void*)*1);
lean_dec(x_152);
if (x_153 == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_150, 1);
lean_inc(x_154);
lean_dec(x_150);
x_136 = x_52;
x_137 = x_154;
goto block_149;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_155 = lean_ctor_get(x_150, 1);
lean_inc(x_155);
lean_dec(x_150);
lean_inc(x_8);
x_156 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_8, x_12, x_13, x_14, x_15, x_155);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = lean_unbox(x_157);
lean_dec(x_157);
x_136 = x_159;
x_137 = x_158;
goto block_149;
}
block_135:
{
lean_object* x_61; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_4);
x_61 = l_Lean_Meta_Match_mkMatcherAuxDefinition(x_4, x_55, x_58, x_12, x_13, x_14, x_15, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_104; lean_object* x_105; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_ctor_get(x_62, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
x_121 = lean_st_ref_get(x_15, x_63);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_122, 3);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_ctor_get_uint8(x_123, sizeof(void*)*1);
lean_dec(x_123);
if (x_124 == 0)
{
lean_object* x_125; 
x_125 = lean_ctor_get(x_121, 1);
lean_inc(x_125);
lean_dec(x_121);
x_104 = x_52;
x_105 = x_125;
goto block_120;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
lean_inc(x_8);
x_127 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_8, x_12, x_13, x_14, x_15, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_unbox(x_128);
lean_dec(x_128);
x_104 = x_130;
x_105 = x_129;
goto block_120;
}
block_103:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = l_Lean_Expr_getAppFn(x_65);
x_68 = l_Lean_Expr_constLevels_x21(x_67);
lean_dec(x_67);
x_69 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f(x_68, x_6, x_12, x_13, x_14, x_15, x_66);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_72 = l_Lean_Meta_isLevelDefEq(x_6, x_7, x_12, x_13, x_14, x_15, x_71);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
x_73 = lean_unbox(x_64);
lean_dec(x_64);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_70);
lean_dec(x_48);
lean_dec(x_9);
lean_dec(x_4);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__1;
x_76 = lean_box(0);
lean_inc(x_65);
x_77 = l_Lean_Meta_Match_mkMatcher___lambda__1(x_5, x_75, x_40, x_27, x_65, x_65, x_8, x_76, x_12, x_13, x_14, x_15, x_74);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_65);
lean_dec(x_40);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; 
x_78 = lean_ctor_get(x_72, 1);
lean_inc(x_78);
lean_dec(x_72);
x_79 = l_Lean_Expr_getAppNumArgsAux(x_65, x_34);
x_80 = l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5(x_46, x_47, x_48);
x_81 = x_80;
x_82 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_9);
lean_ctor_set(x_82, 2, x_81);
lean_ctor_set(x_82, 3, x_70);
lean_inc(x_4);
x_83 = l_Lean_Meta_Match_addMatcherInfo(x_4, x_82, x_12, x_13, x_14, x_15, x_78);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = 0;
x_86 = l_Lean_Meta_setInlineAttribute(x_4, x_85, x_12, x_13, x_14, x_15, x_84);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Expr_instantiateBetaRevRange_visit___closed__1;
lean_inc(x_65);
x_90 = l_Lean_Meta_Match_mkMatcher___lambda__1(x_5, x_89, x_40, x_27, x_65, x_65, x_8, x_87, x_12, x_13, x_14, x_15, x_88);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_87);
lean_dec(x_65);
lean_dec(x_40);
return x_90;
}
else
{
uint8_t x_91; 
lean_dec(x_65);
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
x_91 = !lean_is_exclusive(x_86);
if (x_91 == 0)
{
return x_86;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_86, 0);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_86);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_70);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
x_95 = !lean_is_exclusive(x_72);
if (x_95 == 0)
{
return x_72;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_72, 0);
x_97 = lean_ctor_get(x_72, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_72);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_99 = !lean_is_exclusive(x_69);
if (x_99 == 0)
{
return x_69;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_69, 0);
x_101 = lean_ctor_get(x_69, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_69);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
block_120:
{
if (x_104 == 0)
{
x_66 = x_105;
goto block_103;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_106 = l_Lean_Expr_getAppFn(x_65);
x_107 = l_Lean_Expr_constLevels_x21(x_106);
lean_dec(x_106);
x_108 = l_List_map___at_Lean_Meta_Match_mkMatcher___spec__6(x_107);
x_109 = l_Lean_MessageData_ofList(x_108);
lean_dec(x_108);
x_110 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3;
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5;
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
lean_inc(x_6);
x_114 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_114, 0, x_6);
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_KernelException_toMessageData___closed__15;
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
lean_inc(x_8);
x_118 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_8, x_117, x_12, x_13, x_14, x_15, x_105);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_66 = x_119;
goto block_103;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_131 = !lean_is_exclusive(x_61);
if (x_131 == 0)
{
return x_61;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_61, 0);
x_133 = lean_ctor_get(x_61, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_61);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
block_149:
{
if (x_136 == 0)
{
x_60 = x_137;
goto block_135;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_inc(x_58);
x_138 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_138, 0, x_58);
x_139 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7;
x_140 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
x_141 = l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9;
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
lean_inc(x_55);
x_143 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_143, 0, x_55);
x_144 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_Lean_KernelException_toMessageData___closed__15;
x_146 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
lean_inc(x_8);
x_147 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_8, x_146, x_12, x_13, x_14, x_15, x_137);
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
lean_dec(x_147);
x_60 = x_148;
goto block_135;
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_55);
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_160 = !lean_is_exclusive(x_57);
if (x_160 == 0)
{
return x_57;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_57, 0);
x_162 = lean_ctor_get(x_57, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_57);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
else
{
uint8_t x_164; 
lean_dec(x_51);
lean_dec(x_48);
lean_dec(x_40);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_164 = !lean_is_exclusive(x_54);
if (x_164 == 0)
{
return x_54;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_54, 0);
x_166 = lean_ctor_get(x_54, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_54);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
uint8_t x_168; 
lean_dec(x_32);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_168 = !lean_is_exclusive(x_35);
if (x_168 == 0)
{
return x_35;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_35, 0);
x_170 = lean_ctor_get(x_35, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_35);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("target: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("motiveType: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_45; lean_object* x_46; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_st_ref_get(x_12, x_13);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_57, 3);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_ctor_get_uint8(x_58, sizeof(void*)*1);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_56, 1);
lean_inc(x_60);
lean_dec(x_56);
x_61 = 0;
x_45 = x_61;
x_46 = x_60;
goto block_55;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_dec(x_56);
x_63 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_64 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_63, x_9, x_10, x_11, x_12, x_62);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_unbox(x_65);
lean_dec(x_65);
x_45 = x_67;
x_46 = x_66;
goto block_55;
}
block_44:
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_inc(x_8);
x_15 = l_Lean_mkAppN(x_8, x_1);
x_32 = lean_st_ref_get(x_12, x_14);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = 0;
x_16 = x_37;
x_17 = x_36;
goto block_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_40 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___spec__2(x_39, x_9, x_10, x_11, x_12, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_unbox(x_41);
lean_dec(x_41);
x_16 = x_43;
x_17 = x_42;
goto block_31;
}
block_31:
{
if (x_16 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
lean_inc(x_3);
lean_inc(x_8);
x_19 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher___lambda__2___boxed), 16, 9);
lean_closure_set(x_19, 0, x_15);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_8);
lean_closure_set(x_19, 3, x_2);
lean_closure_set(x_19, 4, x_3);
lean_closure_set(x_19, 5, x_4);
lean_closure_set(x_19, 6, x_5);
lean_closure_set(x_19, 7, x_18);
lean_closure_set(x_19, 8, x_6);
x_20 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts___rarg(x_8, x_3, x_19, x_9, x_10, x_11, x_12, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_inc(x_15);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_15);
x_22 = l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_KernelException_toMessageData___closed__15;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_27 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_26, x_25, x_9, x_10, x_11, x_12, x_17);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
lean_inc(x_3);
lean_inc(x_8);
x_29 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher___lambda__2___boxed), 16, 9);
lean_closure_set(x_29, 0, x_15);
lean_closure_set(x_29, 1, x_1);
lean_closure_set(x_29, 2, x_8);
lean_closure_set(x_29, 3, x_2);
lean_closure_set(x_29, 4, x_3);
lean_closure_set(x_29, 5, x_4);
lean_closure_set(x_29, 6, x_5);
lean_closure_set(x_29, 7, x_26);
lean_closure_set(x_29, 8, x_6);
x_30 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts___rarg(x_8, x_3, x_29, x_9, x_10, x_11, x_12, x_28);
return x_30;
}
}
}
block_55:
{
if (x_45 == 0)
{
lean_dec(x_7);
x_14 = x_46;
goto block_44;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_7);
x_48 = l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Lean_KernelException_toMessageData___closed__15;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_53 = l_Lean_addTrace___at_Lean_Meta_isLevelDefEqAux___spec__1(x_52, x_51, x_9, x_10, x_11, x_12, x_46);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_14 = x_54;
goto block_44;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("motive");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
lean_inc(x_6);
x_12 = l_Lean_mkSort(x_6);
x_13 = 0;
x_14 = 1;
lean_inc(x_7);
lean_inc(x_1);
x_15 = l_Lean_Meta_mkForallFVars(x_1, x_12, x_13, x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher___lambda__3), 13, 7);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_6);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_5);
lean_closure_set(x_18, 6, x_16);
x_19 = l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2;
x_20 = 0;
x_21 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_substCore___spec__2___rarg(x_19, x_20, x_16, x_18, x_7, x_8, x_9, x_10, x_17);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns(x_4, x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Meta_getLevel(x_5, x_6, x_7, x_8, x_9, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_levelZero;
x_17 = lean_level_eq(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_7, x_8, x_9, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Meta_Match_mkMatcher___lambda__4(x_4, x_2, x_1, x_14, x_3, x_19, x_6, x_7, x_8, x_9, x_20);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Meta_Match_mkMatcher___lambda__4(x_4, x_2, x_1, x_14, x_3, x_16, x_6, x_7, x_8, x_9, x_15);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_11);
if (x_27 == 0)
{
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_3);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_Match_mkMatcher___lambda__5), 10, 3);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_3);
x_12 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_2, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_HashSetImp_contains___at_Lean_Meta_Match_mkMatcher___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___at_Lean_Meta_Match_mkMatcher___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_Match_mkMatcher___spec__5(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_Match_mkMatcher___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Meta_Match_mkMatcher___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Lean_Meta_Match_mkMatcher___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_5);
return x_17;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = 1;
lean_inc(x_5);
x_12 = l_Lean_Meta_mkLambdaFVars(x_3, x_1, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_mkLambdaFVars(x_2, x_13, x_10, x_11, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1___boxed), 9, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1;
x_11 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(x_2, x_10, x_9, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected matcher application, insufficient number of parameters in alternative");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(0u);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux(x_2, x_9, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2(x_2, x_3, x_11, x_4, x_5, x_6, x_7, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2;
x_16 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2(x_15, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected type at MatcherApp.addArg");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_nat_dec_lt(x_4, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_fget(x_3, x_4);
x_15 = l_instInhabitedNat;
x_16 = lean_array_get(x_15, x_2, x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Meta_whnfD(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 7)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
lean_dec(x_18);
lean_inc(x_16);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_16);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3), 8, 1);
lean_closure_set(x_23, 0, x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__2___rarg(x_20, x_22, x_23, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_expr_instantiate1(x_21, x_25);
lean_dec(x_21);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_16, x_28);
lean_dec(x_16);
x_30 = lean_array_set(x_2, x_4, x_29);
x_31 = lean_array_fset(x_3, x_4, x_25);
x_32 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_1 = x_27;
x_2 = x_30;
x_3 = x_31;
x_4 = x_32;
x_9 = x_26;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_24);
if (x_34 == 0)
{
return x_24;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_24, 0);
x_36 = lean_ctor_get(x_24, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_24);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_dec(x_17);
x_39 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2;
x_40 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1(x_39, x_5, x_6, x_7, x_8, x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_17);
if (x_41 == 0)
{
return x_17;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_17, 0);
x_43 = lean_ctor_get(x_17, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_17);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_3, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_3, x_12);
lean_dec(x_3);
x_14 = l_Lean_instInhabitedExpr;
x_15 = lean_array_get(x_14, x_2, x_13);
x_16 = lean_ctor_get(x_1, 5);
x_17 = lean_array_get(x_14, x_16, x_13);
x_18 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_Meta_kabstract(x_4, x_17, x_18, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_expr_instantiate1(x_20, x_15);
lean_dec(x_15);
lean_dec(x_20);
x_3 = x_13;
x_4 = x_22;
x_9 = x_21;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_9);
return x_28;
}
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 0;
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_15 = l_Lean_Meta_inferType(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_2, 6);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 7);
lean_inc(x_19);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts(x_16, x_18, x_19, x_20, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_2, 2);
lean_inc(x_26);
x_27 = l_Lean_mkOptionalNode___closed__2;
x_28 = lean_array_push(x_27, x_3);
x_29 = lean_ctor_get(x_2, 8);
lean_inc(x_29);
lean_dec(x_2);
x_30 = l_Array_append___rarg(x_28, x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_5);
lean_ctor_set(x_31, 2, x_26);
lean_ctor_set(x_31, 3, x_6);
lean_ctor_set(x_31, 4, x_7);
lean_ctor_set(x_31, 5, x_8);
lean_ctor_set(x_31, 6, x_24);
lean_ctor_set(x_31, 7, x_25);
lean_ctor_set(x_31, 8, x_30);
lean_ctor_set(x_21, 0, x_31);
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_2, 2);
lean_inc(x_36);
x_37 = l_Lean_mkOptionalNode___closed__2;
x_38 = lean_array_push(x_37, x_3);
x_39 = lean_ctor_get(x_2, 8);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Array_append___rarg(x_38, x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_5);
lean_ctor_set(x_41, 2, x_36);
lean_ctor_set(x_41, 3, x_6);
lean_ctor_set(x_41, 4, x_7);
lean_ctor_set(x_41, 5, x_8);
lean_ctor_set(x_41, 6, x_34);
lean_ctor_set(x_41, 7, x_35);
lean_ctor_set(x_41, 8, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_33);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_15);
if (x_47 == 0)
{
return x_15;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_15, 0);
x_49 = lean_ctor_get(x_15, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_15);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to add argument to matcher application, type error when constructing the new motive");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = 0;
x_13 = 1;
lean_inc(x_7);
x_14 = l_Lean_Meta_mkLambdaFVars(x_1, x_2, x_12, x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
lean_inc(x_6);
x_18 = lean_array_to_list(lean_box(0), x_6);
lean_inc(x_17);
x_19 = l_Lean_mkConst(x_17, x_18);
x_20 = lean_ctor_get(x_3, 3);
lean_inc(x_20);
x_21 = l_Lean_mkAppN(x_19, x_20);
lean_inc(x_15);
x_22 = l_Lean_mkApp(x_21, x_15);
x_23 = l_Lean_mkAppN(x_22, x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_23);
x_24 = l_Lean_Meta_check(x_23, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_23);
x_26 = l_Lean_Meta_isTypeCorrect(x_23, x_7, x_8, x_9, x_10, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2;
x_31 = l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(x_30, x_7, x_8, x_9, x_10, x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_dec(x_26);
x_37 = lean_box(0);
x_38 = l_Lean_Meta_MatcherApp_addArg___lambda__1(x_23, x_3, x_5, x_17, x_6, x_20, x_15, x_4, x_37, x_7, x_8, x_9, x_10, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_24);
if (x_39 == 0)
{
return x_24;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_24, 0);
x_41 = lean_ctor_get(x_24, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_24);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_14);
if (x_43 == 0)
{
return x_14;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_14, 0);
x_45 = lean_ctor_get(x_14, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_14);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_11 = l_Lean_Meta_inferType(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_2, 5);
lean_inc(x_14);
x_15 = lean_array_get_size(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1(x_2, x_3, x_15, x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_mkArrow(x_17, x_4, x_6, x_7, x_8, x_9, x_18);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
x_24 = l_Lean_Meta_MatcherApp_addArg___lambda__2(x_3, x_21, x_2, x_14, x_1, x_23, x_6, x_7, x_8, x_9, x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_25);
x_28 = l_Lean_Meta_getLevel(x_25, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
x_32 = lean_array_set(x_31, x_27, x_29);
lean_dec(x_27);
x_33 = l_Lean_Meta_MatcherApp_addArg___lambda__2(x_3, x_25, x_2, x_14, x_1, x_32, x_6, x_7, x_8, x_9, x_30);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_16);
if (x_38 == 0)
{
return x_16;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_16, 0);
x_40 = lean_ctor_get(x_16, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_16);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_11);
if (x_42 == 0)
{
return x_11;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_11, 0);
x_44 = lean_ctor_get(x_11, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_11);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected matcher application, motive must be lambda expression with #");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_ctor_get(x_2, 5);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = lean_nat_dec_eq(x_10, x_12);
lean_dec(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Meta_addDefaultInstance___spec__1(x_19, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
x_25 = lean_box(0);
x_26 = l_Lean_Meta_MatcherApp_addArg___lambda__3(x_1, x_2, x_3, x_4, x_25, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lambda__4), 9, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_1);
x_10 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_MatcherApp_addArg___spec__2___rarg(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_foldRevM_loop___at_Lean_Meta_MatcherApp_addArg___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_MatcherApp_addArg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
return x_15;
}
}
lean_object* l_Lean_Meta_MatcherApp_addArg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_MatcherApp_addArg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Match_Match___hyg_8372_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Meta_Match_Unify_assign___closed__2;
x_9 = l_Lean_registerTraceClass(x_8, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(lean_object*);
lean_object* initialize_Lean_Util_Recognizers(lean_object*);
lean_object* initialize_Lean_Compiler_ExternAttr(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
lean_object* initialize_Lean_Meta_Closure(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Cases(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Contradiction(lean_object*);
lean_object* initialize_Lean_Meta_GeneralizeTelescope(lean_object*);
lean_object* initialize_Lean_Meta_Match_Basic(lean_object*);
lean_object* initialize_Lean_Meta_Match_MVarRenaming(lean_object*);
lean_object* initialize_Lean_Meta_Match_CaseValues(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Match_Match(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Recognizers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Contradiction(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_GeneralizeTelescope(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MVarRenaming(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_CaseValues(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNumPatterns___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_mkMinorType___boxed__const__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__4);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_withAlts_loop___rarg___closed__5);
l_Lean_Meta_Match_State_used___default___closed__1 = _init_l_Lean_Meta_Match_State_used___default___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_State_used___default___closed__1);
l_Lean_Meta_Match_State_used___default = _init_l_Lean_Meta_Match_State_used___default();
lean_mark_persistent(l_Lean_Meta_Match_State_used___default);
l_Lean_Meta_Match_State_counterExamples___default = _init_l_Lean_Meta_Match_State_counterExamples___default();
lean_mark_persistent(l_Lean_Meta_Match_State_counterExamples___default);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__1);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__2);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___spec__1___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processSkipInaccessible___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processLeaf___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processAsPattern___closed__2);
l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1 = _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1();
lean_mark_persistent(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__1);
l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2 = _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2();
lean_mark_persistent(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___spec__1___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processVariable___closed__1);
l_Lean_Meta_Match_Unify_State_fvarSubst___default = _init_l_Lean_Meta_Match_Unify_State_fvarSubst___default();
lean_mark_persistent(l_Lean_Meta_Match_Unify_State_fvarSubst___default);
l_Lean_Meta_Match_Unify_assign___closed__1 = _init_l_Lean_Meta_Match_Unify_assign___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__1);
l_Lean_Meta_Match_Unify_assign___closed__2 = _init_l_Lean_Meta_Match_Unify_assign___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__2);
l_Lean_Meta_Match_Unify_assign___closed__3 = _init_l_Lean_Meta_Match_Unify_assign___closed__3();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__3);
l_Lean_Meta_Match_Unify_assign___closed__4 = _init_l_Lean_Meta_Match_Unify_assign___closed__4();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__4);
l_Lean_Meta_Match_Unify_assign___closed__5 = _init_l_Lean_Meta_Match_Unify_assign___closed__5();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__5);
l_Lean_Meta_Match_Unify_assign___closed__6 = _init_l_Lean_Meta_Match_Unify_assign___closed__6();
lean_mark_persistent(l_Lean_Meta_Match_Unify_assign___closed__6);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_unify_x3f___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___lambda__2___boxed__const__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandVarIntoCtor_x3f___closed__1);
l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__1);
l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__2);
l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__3);
l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___lambda__1___closed__4);
l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___closed__1);
l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___closed__2);
l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___closed__3);
l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4 = _init_l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4();
lean_mark_persistent(l_Lean_Meta_Match_processInaccessibleAsCtor___closed__4);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__4);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__5);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__6);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__7);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__8);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__9);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__10);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__11);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__12);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__13);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwCasesException___rarg___closed__14);
l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1 = _init_l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__1___lambda__1___closed__1);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__1);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___spec__8___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___lambda__1___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processConstructor___boxed__const__1);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__1);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__2);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__3);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__4);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__5);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__2___closed__6);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__1);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__2);
l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3 = _init_l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___spec__3___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processNonVariable___closed__1);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__1);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___spec__6___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processValue___closed__3);
l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1 = _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1();
lean_mark_persistent(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__1);
l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2 = _init_l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2();
lean_mark_persistent(l_List_mapM___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___spec__8___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_processArrayLit___closed__3);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__1);
l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2 = _init_l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2();
lean_mark_persistent(l_List_map___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_expandNatValuePattern___spec__1___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceStep___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_traceState___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___lambda__1___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_throwNonSupported___closed__1);
l_Lean_Meta_Match_isCurrVarInductive___closed__1 = _init_l_Lean_Meta_Match_isCurrVarInductive___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_isCurrVarInductive___closed__1);
l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1 = _init_l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__1);
l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2 = _init_l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___spec__1___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_checkNextPatternTypes___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___rarg___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__2___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_List_moveToFront_loop___at___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_moveToFront___spec__4___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_checkVarDeps___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_tryToProcess___lambda__1___closed__4);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__3);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process_search___closed__4);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_getUElimPos_x3f___closed__2);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__1);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__2);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__3);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__4);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__5);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832____closed__6);
res = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6832_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Match_bootstrap_genMatcherCode = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Match_bootstrap_genMatcherCode);
lean_dec_ref(res);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__1);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__2);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__3 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__3();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__3);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__4);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__5 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__5();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__5);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__6);
l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7 = _init_l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7();
lean_mark_persistent(l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860____closed__7);
res = l_Lean_Meta_Match_initFn____x40_Lean_Meta_Match_Match___hyg_6860_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Match_matcherExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Match_matcherExt);
lean_dec_ref(res);
l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1 = _init_l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__1___closed__1);
l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2 = _init_l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__1___closed__2);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__1);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__2);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__3);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__4);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__5);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__6);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__7);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__8);
l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9 = _init_l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__2___closed__9);
l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1 = _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__3___closed__1);
l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2 = _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__3___closed__2);
l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3 = _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__3___closed__3);
l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4 = _init_l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__3___closed__4);
l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1 = _init_l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__4___closed__1);
l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2 = _init_l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_Match_mkMatcher___lambda__4___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__2___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___lambda__3___closed__2);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__1);
l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2 = _init_l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Match_Match_0__Lean_Meta_updateAlts___closed__2);
l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1 = _init_l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__1);
l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2 = _init_l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_MatcherApp_addArg___lambda__2___closed__2);
l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1 = _init_l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__1);
l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2 = _init_l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_MatcherApp_addArg___lambda__4___closed__2);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Match_Match___hyg_8372_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
