// Lean compiler output
// Module: Lean.Compiler.IR.ElimDeadBranches
// Imports: Init Lean.Compiler.IR.Format Lean.Compiler.IR.Basic Lean.Compiler.IR.CompilerM
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
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_toString___closed__1;
extern lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_2960____closed__4;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default;
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1;
uint8_t l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__9(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerInternalExceptionId___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__4;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
extern lean_object* l_instReprProd___rarg___closed__2;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__18(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1(lean_object*);
lean_object* l_Std_mkPersistentArray___rarg(lean_object*, lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_sbracket___closed__4;
lean_object* l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1;
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_instInhabitedValue;
extern lean_object* l_Std_Format_paren___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3;
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_instToStringValue;
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2;
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__8(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12___boxed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1(lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___rarg___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1___boxed(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3;
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4;
uint8_t l_Lean_IR_UnreachableBranches_interpExpr___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt;
lean_object* l_Lean_IR_elimDeadBranches_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3(lean_object*);
lean_object* l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_widening(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13___boxed(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2;
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t l_Lean_Name_hash(lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7(lean_object*, lean_object*);
extern lean_object* l_IO_instInhabitedError___closed__1;
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedFnBody;
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1;
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedDecl;
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Lean_IR_UnreachableBranches_Value_instToFormatValue;
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594__match__1___rarg(lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_Std_Format_paren___closed__4;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14(lean_object*, size_t, size_t, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_IR_instInhabitedParam;
lean_object* l_Lean_IR_UnreachableBranches_Value_format___closed__5;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(lean_object*);
extern lean_object* l_instReprList___rarg___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Std_Format_sbracket___closed__3;
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_Value_instBEqValue;
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(lean_object*, uint8_t, lean_object*);
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1(lean_object*);
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__16(lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1;
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19(lean_object*, lean_object*, size_t, size_t);
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__4;
lean_object* l_Lean_IR_UnreachableBranches_InterpContext_lctx___default;
lean_object* l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1;
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
extern lean_object* l_Lean_Syntax_instToStringSyntax___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13(lean_object*, lean_object*);
lean_object* l_Lean_IR_elimDeadBranches(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594__match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3(lean_object*, size_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1(lean_object*);
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_elimDeadBranches_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object*, lean_object*);
extern lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2(lean_object*);
extern lean_object* l_instReprIterator___closed__3;
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__12(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1(lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_elimDeadBranches___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__17(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___rarg___closed__2;
lean_object* l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_instInhabitedHashMap___closed__1;
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedArg;
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(lean_object*, lean_object*);
extern lean_object* l_Std_Format_sbracket___closed__2;
lean_object* l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__10(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594_(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
extern lean_object* l_Std_instInhabitedPersistentArrayNode___closed__1;
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1(lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object*, size_t, size_t);
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_instToFormatArray___rarg___closed__1;
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(lean_object*, lean_object*);
extern lean_object* l_Std_Format_paren___closed__3;
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_getAux___rarg___closed__1;
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lean_IR_UnreachableBranches_instInhabitedValue() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_2(x_7, x_1, x_2);
return x_10;
}
}
case 1:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_apply_2(x_7, x_1, x_2);
return x_13;
}
}
case 2:
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_apply_4(x_5, x_14, x_15, x_16, x_17);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_5);
x_19 = lean_apply_2(x_7, x_1, x_2);
return x_19;
}
}
default: 
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_apply_2(x_6, x_20, x_21);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_6);
x_23 = lean_apply_2(x_7, x_1, x_2);
return x_23;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq_match__1___rarg), 7, 0);
return x_2;
}
}
uint8_t l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_IR_UnreachableBranches_Value_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_4);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_Value_beq(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_1, x_2, x_5);
x_7 = 0;
x_8 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_4, x_7, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
return x_6;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_Value_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
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
case 1:
{
if (lean_obj_tag(x_2) == 1)
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
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_IR_CtorInfo_beq(x_7, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_8);
x_14 = lean_array_get_size(x_10);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(x_8, x_10, lean_box(0), x_8, x_10, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
}
default: 
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_2, 0);
x_22 = 1;
x_23 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_21, x_22, x_20);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = 0;
return x_24;
}
else
{
uint8_t x_25; 
x_25 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_20, x_22, x_21);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = 0;
return x_26;
}
}
}
}
}
lean_object* l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at_Lean_IR_UnreachableBranches_Value_beq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__4(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_UnreachableBranches_Value_beq___spec__5(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instBEqValue() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 2)
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_apply_7(x_4, x_7, x_9, x_10, x_8, x_2, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_4);
x_14 = lean_apply_2(x_5, x_1, x_2);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_4);
x_15 = lean_apply_2(x_5, x_1, x_2);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_addChoice_match__1___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Compiler.IR.ElimDeadBranches");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.IR.UnreachableBranches.Value.addChoice");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid addChoice");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2;
x_3 = lean_unsigned_to_nat(39u);
x_4 = lean_unsigned_to_nat(12u);
x_5 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_addChoice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 2)
{
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = l_Lean_IR_CtorInfo_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_1, x_8, x_3);
lean_ctor_set(x_2, 1, x_13);
return x_2;
}
else
{
lean_object* x_14; 
x_14 = lean_apply_2(x_1, x_6, x_3);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
x_18 = l_Lean_IR_CtorInfo_beq(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_1, x_15, x_3);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_apply_2(x_1, x_6, x_3);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
x_25 = lean_panic_fn(x_23, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
return x_28;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_apply_1(x_3, x_2);
return x_11;
}
case 1:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_5);
x_12 = lean_apply_1(x_4, x_1);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_apply_1(x_5, x_2);
return x_13;
}
}
case 2:
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
case 1:
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_15 = lean_apply_1(x_6, x_1);
return x_15;
}
case 2:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
x_20 = lean_apply_6(x_7, x_1, x_16, x_17, x_2, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_apply_2(x_10, x_1, x_21);
return x_22;
}
}
}
default: 
{
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_23 = lean_apply_1(x_4, x_1);
return x_23;
}
case 1:
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
x_24 = lean_apply_1(x_6, x_1);
return x_24;
}
case 2:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_apply_2(x_9, x_25, x_2);
return x_26;
}
default: 
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_apply_2(x_8, x_27, x_28);
return x_29;
}
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_merge_match__1___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_dec(x_4);
x_10 = lean_nat_add(x_9, x_8);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_10);
x_12 = l_Lean_IR_UnreachableBranches_instInhabitedValue;
x_13 = lean_array_get(x_12, x_1, x_11);
x_14 = lean_array_get(x_12, x_2, x_11);
lean_dec(x_11);
x_15 = l_Lean_IR_UnreachableBranches_Value_merge(x_13, x_14);
x_16 = lean_array_push(x_5, x_15);
x_4 = x_9;
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
static lean_object* _init_l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_merge), 2, 0);
return x_1;
}
}
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_6 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_5, x_1, x_3);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_2;
}
case 1:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(1);
return x_3;
}
}
case 2:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(1);
return x_4;
}
case 2:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = l_Lean_IR_CtorInfo_beq(x_5, x_7);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_2, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_2, 0);
lean_dec(x_16);
x_17 = lean_array_get_size(x_6);
x_18 = l_Array_empty___closed__1;
lean_inc(x_17);
x_19 = l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_6, x_8, x_17, x_17, x_18);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_6);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_20 = lean_array_get_size(x_6);
x_21 = l_Array_empty___closed__1;
lean_inc(x_20);
x_22 = l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_6, x_8, x_20, x_20, x_21);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_6);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
default: 
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_27 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_26, x_25, x_1);
lean_ctor_set(x_2, 0, x_27);
return x_2;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_30 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_29, x_28, x_1);
x_31 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
return x_1;
}
case 1:
{
lean_object* x_32; 
lean_dec(x_1);
x_32 = lean_box(1);
return x_32;
}
case 2:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_1);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_1, 0);
x_35 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_36 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_35, x_34, x_2);
lean_ctor_set(x_1, 0, x_36);
return x_1;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_dec(x_1);
x_38 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1;
x_39 = l_Lean_IR_UnreachableBranches_Value_addChoice(x_38, x_37, x_2);
x_40 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
}
default: 
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_2);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_2, 0);
x_44 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(x_43, x_41);
lean_ctor_set(x_2, 0, x_44);
return x_2;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_2, 0);
lean_inc(x_45);
lean_dec(x_2);
x_46 = l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2(x_45, x_41);
x_47 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
}
}
lean_object* l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___at_Lean_IR_UnreachableBranches_Value_merge___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_5, x_10, x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_format_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_instReprIterator___closed__3;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Lean_IR_UnreachableBranches_Value_format(x_6);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_2 = x_12;
x_4 = x_10;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_box(0);
return x_7;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2(x_1, x_8, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Std_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_IR_UnreachableBranches_Value_format(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_IR_UnreachableBranches_Value_format(x_7);
lean_inc(x_2);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Std_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(x_4, x_2);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_instReprList___rarg___closed__2;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_3 = l_instReprProd___rarg___closed__2;
x_4 = l_Std_Format_joinSep___at_Lean_IR_UnreachableBranches_Value_format___spec__4(x_1, x_3);
x_5 = l_Std_Format_sbracket___closed__3;
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Std_Format_sbracket___closed__4;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Std_Format_sbracket___closed__2;
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = 0;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bot");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("top");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_UnreachableBranches_Value_format___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_format___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_format(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_Value_format___closed__2;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_Value_format___closed__4;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Array_isEmpty___rarg(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_7);
x_9 = l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(x_5);
lean_dec(x_5);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Std_Format_paren___closed__3;
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Std_Format_paren___closed__4;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Std_Format_paren___closed__2;
x_16 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = 0;
x_18 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_17);
x_19 = l_instToFormatArray___rarg___closed__1;
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
lean_dec(x_4);
x_22 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_21);
x_23 = l_instToFormatArray___rarg___closed__1;
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
default: 
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = l_List_format___at_Lean_IR_UnreachableBranches_Value_format___spec__3(x_25);
x_27 = l_Lean_IR_UnreachableBranches_Value_format___closed__5;
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_Value_format___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at_Lean_IR_UnreachableBranches_Value_format___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_format), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instToFormatValue() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Syntax_instToStringSyntax___closed__1;
x_2 = l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_Value_instToStringValue() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_truncate_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_9, x_2);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_apply_2(x_5, x_1, x_2);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_Value_truncate_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_11, x_2);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_6, x_2);
x_9 = l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_10, x_2);
x_13 = l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
uint8_t l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_IR_UnreachableBranches_Value_beq(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_truncate(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = l_Lean_Name_getPrefix(x_7);
lean_dec(x_7);
x_9 = l_Lean_NameSet_contains(x_3, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_1);
x_10 = lean_environment_find(x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
x_11 = lean_array_get_size(x_6);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = x_6;
x_15 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(x_1, x_3, x_12, x_13, x_14);
x_16 = x_15;
lean_ctor_set(x_2, 1, x_16);
return x_2;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
lean_dec(x_8);
x_18 = lean_array_get_size(x_6);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = x_6;
x_22 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(x_1, x_3, x_19, x_20, x_21);
x_23 = x_22;
lean_ctor_set(x_2, 1, x_23);
return x_2;
}
case 1:
{
lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_17);
lean_dec(x_8);
x_24 = lean_array_get_size(x_6);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = 0;
x_27 = x_6;
x_28 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(x_1, x_3, x_25, x_26, x_27);
x_29 = x_28;
lean_ctor_set(x_2, 1, x_29);
return x_2;
}
case 2:
{
lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_17);
lean_dec(x_8);
x_30 = lean_array_get_size(x_6);
x_31 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_32 = 0;
x_33 = x_6;
x_34 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(x_1, x_3, x_31, x_32, x_33);
x_35 = x_34;
lean_ctor_set(x_2, 1, x_35);
return x_2;
}
case 3:
{
lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_17);
lean_dec(x_8);
x_36 = lean_array_get_size(x_6);
x_37 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_38 = 0;
x_39 = x_6;
x_40 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(x_1, x_3, x_37, x_38, x_39);
x_41 = x_40;
lean_ctor_set(x_2, 1, x_41);
return x_2;
}
case 4:
{
lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_17);
lean_dec(x_8);
x_42 = lean_array_get_size(x_6);
x_43 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_44 = 0;
x_45 = x_6;
x_46 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(x_1, x_3, x_43, x_44, x_45);
x_47 = x_46;
lean_ctor_set(x_2, 1, x_47);
return x_2;
}
case 5:
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_17, 0);
lean_inc(x_48);
lean_dec(x_17);
x_49 = lean_ctor_get_uint8(x_48, sizeof(void*)*5);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_8);
x_50 = lean_array_get_size(x_6);
x_51 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_52 = 0;
x_53 = x_6;
x_54 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(x_1, x_3, x_51, x_52, x_53);
x_55 = x_54;
lean_ctor_set(x_2, 1, x_55);
return x_2;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; size_t x_59; size_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_56 = lean_box(0);
x_57 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_3, x_8, x_56);
x_58 = lean_array_get_size(x_6);
x_59 = lean_usize_of_nat(x_58);
lean_dec(x_58);
x_60 = 0;
x_61 = x_6;
x_62 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(x_1, x_57, x_59, x_60, x_61);
x_63 = x_62;
lean_ctor_set(x_2, 1, x_63);
return x_2;
}
}
case 6:
{
lean_object* x_64; size_t x_65; size_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_17);
lean_dec(x_8);
x_64 = lean_array_get_size(x_6);
x_65 = lean_usize_of_nat(x_64);
lean_dec(x_64);
x_66 = 0;
x_67 = x_6;
x_68 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(x_1, x_3, x_65, x_66, x_67);
x_69 = x_68;
lean_ctor_set(x_2, 1, x_69);
return x_2;
}
default: 
{
lean_object* x_70; size_t x_71; size_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_17);
lean_dec(x_8);
x_70 = lean_array_get_size(x_6);
x_71 = lean_usize_of_nat(x_70);
lean_dec(x_70);
x_72 = 0;
x_73 = x_6;
x_74 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(x_1, x_3, x_71, x_72, x_73);
x_75 = x_74;
lean_ctor_set(x_2, 1, x_75);
return x_2;
}
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_8);
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_76 = lean_box(1);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_77 = lean_ctor_get(x_2, 0);
x_78 = lean_ctor_get(x_2, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_2);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = l_Lean_Name_getPrefix(x_79);
lean_dec(x_79);
x_81 = l_Lean_NameSet_contains(x_3, x_80);
if (x_81 == 0)
{
lean_object* x_82; 
lean_inc(x_80);
lean_inc(x_1);
x_82 = lean_environment_find(x_1, x_80);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; size_t x_84; size_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_80);
x_83 = lean_array_get_size(x_78);
x_84 = lean_usize_of_nat(x_83);
lean_dec(x_83);
x_85 = 0;
x_86 = x_78;
x_87 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(x_1, x_3, x_84, x_85, x_86);
x_88 = x_87;
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_77);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
else
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_82, 0);
lean_inc(x_90);
lean_dec(x_82);
switch (lean_obj_tag(x_90)) {
case 0:
{
lean_object* x_91; size_t x_92; size_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_90);
lean_dec(x_80);
x_91 = lean_array_get_size(x_78);
x_92 = lean_usize_of_nat(x_91);
lean_dec(x_91);
x_93 = 0;
x_94 = x_78;
x_95 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(x_1, x_3, x_92, x_93, x_94);
x_96 = x_95;
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_77);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
case 1:
{
lean_object* x_98; size_t x_99; size_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_90);
lean_dec(x_80);
x_98 = lean_array_get_size(x_78);
x_99 = lean_usize_of_nat(x_98);
lean_dec(x_98);
x_100 = 0;
x_101 = x_78;
x_102 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(x_1, x_3, x_99, x_100, x_101);
x_103 = x_102;
x_104 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_104, 0, x_77);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
case 2:
{
lean_object* x_105; size_t x_106; size_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_90);
lean_dec(x_80);
x_105 = lean_array_get_size(x_78);
x_106 = lean_usize_of_nat(x_105);
lean_dec(x_105);
x_107 = 0;
x_108 = x_78;
x_109 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(x_1, x_3, x_106, x_107, x_108);
x_110 = x_109;
x_111 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_111, 0, x_77);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
case 3:
{
lean_object* x_112; size_t x_113; size_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_90);
lean_dec(x_80);
x_112 = lean_array_get_size(x_78);
x_113 = lean_usize_of_nat(x_112);
lean_dec(x_112);
x_114 = 0;
x_115 = x_78;
x_116 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(x_1, x_3, x_113, x_114, x_115);
x_117 = x_116;
x_118 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_118, 0, x_77);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
case 4:
{
lean_object* x_119; size_t x_120; size_t x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_90);
lean_dec(x_80);
x_119 = lean_array_get_size(x_78);
x_120 = lean_usize_of_nat(x_119);
lean_dec(x_119);
x_121 = 0;
x_122 = x_78;
x_123 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(x_1, x_3, x_120, x_121, x_122);
x_124 = x_123;
x_125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_125, 0, x_77);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
case 5:
{
lean_object* x_126; uint8_t x_127; 
x_126 = lean_ctor_get(x_90, 0);
lean_inc(x_126);
lean_dec(x_90);
x_127 = lean_ctor_get_uint8(x_126, sizeof(void*)*5);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; size_t x_129; size_t x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_80);
x_128 = lean_array_get_size(x_78);
x_129 = lean_usize_of_nat(x_128);
lean_dec(x_128);
x_130 = 0;
x_131 = x_78;
x_132 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(x_1, x_3, x_129, x_130, x_131);
x_133 = x_132;
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_77);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; size_t x_138; size_t x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_135 = lean_box(0);
x_136 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_3, x_80, x_135);
x_137 = lean_array_get_size(x_78);
x_138 = lean_usize_of_nat(x_137);
lean_dec(x_137);
x_139 = 0;
x_140 = x_78;
x_141 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(x_1, x_136, x_138, x_139, x_140);
x_142 = x_141;
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_77);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
case 6:
{
lean_object* x_144; size_t x_145; size_t x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_90);
lean_dec(x_80);
x_144 = lean_array_get_size(x_78);
x_145 = lean_usize_of_nat(x_144);
lean_dec(x_144);
x_146 = 0;
x_147 = x_78;
x_148 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(x_1, x_3, x_145, x_146, x_147);
x_149 = x_148;
x_150 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_150, 0, x_77);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
default: 
{
lean_object* x_151; size_t x_152; size_t x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_90);
lean_dec(x_80);
x_151 = lean_array_get_size(x_78);
x_152 = lean_usize_of_nat(x_151);
lean_dec(x_151);
x_153 = 0;
x_154 = x_78;
x_155 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(x_1, x_3, x_152, x_153, x_154);
x_156 = x_155;
x_157 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_157, 0, x_77);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
}
else
{
lean_object* x_158; 
lean_dec(x_80);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_3);
lean_dec(x_1);
x_158 = lean_box(1);
return x_158;
}
}
}
case 3:
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_2);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_160 = lean_ctor_get(x_2, 0);
x_161 = l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_3, x_160);
x_162 = lean_box(1);
x_163 = l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_162, x_161);
if (x_163 == 0)
{
lean_ctor_set(x_2, 0, x_161);
return x_2;
}
else
{
lean_object* x_164; 
lean_dec(x_161);
lean_free_object(x_2);
x_164 = lean_box(1);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_165 = lean_ctor_get(x_2, 0);
lean_inc(x_165);
lean_dec(x_2);
x_166 = l_List_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__11(x_1, x_3, x_165);
x_167 = lean_box(1);
x_168 = l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_167, x_166);
if (x_168 == 0)
{
lean_object* x_169; 
x_169 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_169, 0, x_166);
return x_169;
}
else
{
lean_object* x_170; 
lean_dec(x_166);
x_170 = lean_box(1);
return x_170;
}
}
}
default: 
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__2(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__3(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__4(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__5(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__6(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__7(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__8(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__9(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_Value_truncate___spec__10(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___at_Lean_IR_UnreachableBranches_Value_truncate___spec__12(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_Value_widening(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_3);
x_5 = l_Lean_NameSet_empty;
x_6 = l_Lean_IR_UnreachableBranches_Value_truncate(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594__match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594__match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15 % (sizeof(size_t) * 8);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_19 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_6, x_16, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_18;
x_6 = x_19;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_37 = x_3 + x_8;
x_38 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_42 = x_3 + x_8;
x_43 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
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
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50 % (sizeof(size_t) * 8);
x_74 = x_3 + x_49;
x_75 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__5(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = x_85 <= x_3;
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_93 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__5(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = x_99 <= x_3;
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_107 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__10(lean_object* x_1, lean_object* x_2) {
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
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__10(x_3, x_6);
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
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__8(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__9(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__8(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__8(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__11(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__2(x_6, x_2, x_3);
x_8 = 0;
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Std_PersistentHashMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__2(x_10, x_2, x_3);
x_12 = 0;
x_13 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*2, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__6(x_15, x_2, x_3);
x_17 = 1;
lean_ctor_set(x_1, 0, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_17);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__6(x_18, x_2, x_3);
x_21 = 1;
x_22 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_21);
return x_22;
}
}
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__1(x_4, x_7, x_8);
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
x_10 = 1;
x_11 = x_2 + x_10;
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
x_2 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_7, x_7);
if (x_13 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
x_2 = x_11;
goto _start;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14(x_6, x_15, x_16, x_4);
lean_dec(x_6);
x_2 = x_11;
x_4 = x_17;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_3, x_3);
if (x_6 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15(x_2, x_7, x_8, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__16(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_persistentEnvExtensionsRef;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_8, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_14 = lean_box(0);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_14, x_7);
return x_15;
}
else
{
size_t x_16; size_t x_17; uint8_t x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_18 = l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19(x_1, x_6, x_16, x_17);
lean_dec(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_4);
x_19 = lean_box(0);
x_20 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_19, x_7);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Name_toString___closed__1;
x_23 = l_Lean_Name_toStringWithSep(x_22, x_21);
x_24 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_registerInternalExceptionId___closed__2;
x_27 = lean_string_append(x_25, x_26);
x_28 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_28);
return x_4;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_31 = lean_array_get_size(x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_31);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_34, x_30);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = lean_nat_dec_le(x_31, x_31);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_31);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_37, x_30);
return x_38;
}
else
{
size_t x_39; size_t x_40; uint8_t x_41; 
x_39 = 0;
x_40 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_41 = l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19(x_1, x_29, x_39, x_40);
lean_dec(x_29);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_box(0);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_42, x_30);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = l_Lean_Name_toString___closed__1;
x_46 = l_Lean_Name_toStringWithSep(x_45, x_44);
x_47 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_48 = lean_string_append(x_47, x_46);
lean_dec(x_46);
x_49 = l_Lean_registerInternalExceptionId___closed__2;
x_50 = lean_string_append(x_48, x_49);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_30);
return x_52;
}
}
}
}
}
}
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = l_Array_empty___closed__1;
lean_inc(x_4);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_11);
lean_ctor_set(x_14, 4, x_12);
lean_ctor_set(x_14, 5, x_13);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__18(x_14, x_2);
return x_15;
}
}
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_SMap_insert___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__1(x_1, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1;
x_3 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2;
x_3 = l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13(x_2, x_1);
x_4 = l_Lean_SMap_switch___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__16(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachBranchesFunSummary");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2;
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3;
x_3 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4;
x_4 = l_Lean_initFn____x40_Lean_Environment___hyg_2960____closed__4;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5;
x_3 = l_Lean_registerSimplePersistentEnvExtension___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__17(x_2, x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__3(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__14(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__15(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkStateFromImportedEntries___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____spec__19(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_empty___closed__1;
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_IO_instInhabitedError___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1;
x_4 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2;
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3;
x_6 = l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt___elambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_addFunctionSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_6 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_5, x_1, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5 % (sizeof(size_t) * 8);
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_4, x_2);
lean_dec(x_4);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_11, x_2);
lean_dec(x_11);
return x_12;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_IR_UnreachableBranches_functionSummariesExt;
x_4 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(x_4, x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find_x3f___at_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_InterpContext_lctx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_7 = lean_array_get(x_6, x_4, x_5);
lean_dec(x_4);
x_8 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_7, x_1);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findVarValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* l_Lean_IR_UnreachableBranches_findArgValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_findArgValue_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_4, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_findArgValue___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_findArgValue(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_mkHashMap___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(lean_object* x_1, lean_object* x_2) {
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
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_usize_of_nat(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_9 = l_Std_AssocList_foldlM___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__6(x_3, x_6);
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
lean_object* l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__4(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__7(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_IR_UnreachableBranches_findVarValue(x_1, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_array_get_size(x_10);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_array_fget(x_10, x_11);
x_16 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_17 = lean_array_fset(x_10, x_11, x_16);
x_18 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_9);
x_19 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_15, x_1, x_18);
x_20 = lean_array_fset(x_17, x_11, x_19);
lean_ctor_set(x_7, 0, x_20);
x_21 = lean_box(0);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_array_get_size(x_23);
x_27 = lean_nat_dec_lt(x_25, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_22);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_box(0);
lean_ctor_set(x_5, 1, x_28);
lean_ctor_set(x_5, 0, x_29);
return x_5;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_array_fget(x_23, x_25);
x_31 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_32 = lean_array_fset(x_23, x_25, x_31);
x_33 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_22);
x_34 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_30, x_1, x_33);
x_35 = lean_array_fset(x_32, x_25, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
x_37 = lean_box(0);
lean_ctor_set(x_5, 1, x_36);
lean_ctor_set(x_5, 0, x_37);
return x_5;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_38 = lean_ctor_get(x_5, 1);
x_39 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
lean_inc(x_39);
lean_dec(x_5);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_array_get_size(x_40);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = lean_array_fget(x_40, x_43);
x_50 = l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1;
x_51 = lean_array_fset(x_40, x_43, x_50);
x_52 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_39);
x_53 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_49, x_1, x_52);
x_54 = lean_array_fset(x_51, x_43, x_53);
if (lean_is_scalar(x_42)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_42;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_41);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
lean_object* l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateVarAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_13 = lean_array_fset(x_5, x_6, x_12);
x_14 = lean_box(0);
x_15 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_11, x_1, x_14);
x_16 = lean_array_fset(x_13, x_6, x_15);
lean_ctor_set(x_3, 0, x_16);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_array_get_size(x_19);
x_23 = lean_nat_dec_lt(x_21, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_array_fget(x_19, x_21);
x_28 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_29 = lean_array_fset(x_19, x_21, x_28);
x_30 = lean_box(0);
x_31 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_27, x_1, x_30);
x_32 = lean_array_fset(x_29, x_21, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_20);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetVarAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_resetVarAssignment(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_IR_UnreachableBranches_resetVarAssignment(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_IR_UnreachableBranches_resetParamAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_UnreachableBranches_resetParamAssignment(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_9, x_2);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_apply_2(x_5, x_1, x_2);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_projValue_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_IR_UnreachableBranches_projValue(x_4, x_1);
x_7 = l_Lean_IR_UnreachableBranches_Value_merge(x_2, x_6);
x_2 = x_7;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_3, x_2);
return x_7;
}
}
case 3:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_box(0);
x_10 = l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1(x_2, x_9, x_8);
return x_10;
}
default: 
{
lean_inc(x_1);
return x_1;
}
}
}
}
lean_object* l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___at_Lean_IR_UnreachableBranches_projValue___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_projValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_projValue(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
case 6:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_4, x_12, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_5, x_1);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr_match__3___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_2 < x_1;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = x_3;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_uget(x_3, x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_3, x_2, x_10);
x_12 = x_9;
x_13 = l_Lean_IR_UnreachableBranches_findArgValue(x_12, x_4, x_5);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_2 + x_16;
x_18 = x_14;
x_19 = lean_array_uset(x_11, x_2, x_18);
x_2 = x_17;
x_3 = x_19;
x_5 = x_15;
goto _start;
}
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = x_2 >> x_3 % (sizeof(size_t) * 8);
x_6 = lean_usize_to_nat(x_5);
x_7 = l_Std_PersistentArray_getAux___rarg___closed__1;
x_8 = lean_array_get(x_7, x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3 % (sizeof(size_t) * 8);
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_usize_to_nat(x_2);
x_18 = l_Lean_IR_UnreachableBranches_instInhabitedValue;
x_19 = lean_array_get(x_18, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_nat_dec_le(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_8 = l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_nat_sub(x_2, x_3);
lean_dec(x_3);
x_11 = l_Lean_IR_UnreachableBranches_instInhabitedValue;
x_12 = lean_array_get(x_11, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
return x_12;
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_interpExpr___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_IR_Decl_name(x_2);
x_4 = lean_name_eq(x_3, x_1);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = x_5;
x_9 = lean_box_usize(x_7);
x_10 = l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1;
x_11 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed), 5, 3);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
lean_closure_set(x_11, 2, x_8);
x_12 = x_11;
x_13 = lean_apply_2(x_12, x_2, x_3);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
case 3:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = l_Lean_IR_UnreachableBranches_findVarValue(x_22, x_2, x_3);
lean_dec(x_2);
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = l_Lean_IR_UnreachableBranches_projValue(x_25, x_21);
lean_dec(x_21);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = l_Lean_IR_UnreachableBranches_projValue(x_27, x_21);
lean_dec(x_21);
lean_dec(x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
case 6:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get(x_2, 2);
lean_inc(x_32);
x_33 = l_Lean_IR_UnreachableBranches_getFunctionSummary_x3f(x_32, x_31);
lean_dec(x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_2, 1);
lean_inc(x_34);
lean_dec(x_2);
x_35 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpExpr___lambda__1___boxed), 2, 1);
lean_closure_set(x_35, 0, x_31);
x_36 = lean_array_get_size(x_34);
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Array_findIdx_x3f_loop___rarg(x_34, x_35, x_36, x_37, lean_box(0));
lean_dec(x_34);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_box(1);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_3);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_ctor_get(x_3, 1);
lean_inc(x_42);
x_43 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_42, x_41);
lean_dec(x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_3);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_31);
lean_dec(x_2);
x_45 = lean_ctor_get(x_33, 0);
lean_inc(x_45);
lean_dec(x_33);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
return x_46;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_box(1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_interpExpr___spec__1(x_6, x_7, x_3, x_4, x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentArray_getAux___at_Lean_IR_UnreachableBranches_interpExpr___spec__3(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpExpr___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_interpExpr___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_apply_2(x_6, x_1, x_2);
return x_7;
}
case 1:
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_apply_1(x_3, x_2);
return x_8;
}
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_3(x_4, x_9, x_10, x_2);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_5, x_12, x_2);
return x_13;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_containsCtor_match__1___rarg), 6, 0);
return x_2;
}
}
uint8_t l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_1, x_2, x_5);
x_7 = l_Lean_IR_UnreachableBranches_containsCtor(x_4, x_1);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_Lean_IR_UnreachableBranches_containsCtor(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
case 2:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Lean_IR_CtorInfo_beq(x_5, x_2);
return x_6;
}
default: 
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 0;
x_9 = l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_2, x_8, x_7);
return x_9;
}
}
}
}
lean_object* l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___at_Lean_IR_UnreachableBranches_containsCtor___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_UnreachableBranches_containsCtor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_UnreachableBranches_containsCtor(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = x_4 >> x_5 % (sizeof(size_t) * 8);
x_9 = 1;
x_10 = x_9 << x_5 % (sizeof(size_t) * 8);
x_11 = x_10 - x_9;
x_12 = x_4 & x_11;
x_13 = 5;
x_14 = x_5 - x_13;
x_15 = lean_usize_to_nat(x_8);
x_16 = lean_array_get_size(x_7);
x_17 = lean_nat_dec_lt(x_15, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_7, x_15);
x_19 = l_Std_instInhabitedPersistentArrayNode___closed__1;
x_20 = lean_array_fset(x_7, x_15, x_19);
x_21 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_18, x_12, x_14);
x_22 = lean_array_fset(x_20, x_15, x_21);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_22);
return x_3;
}
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_dec(x_3);
x_24 = x_4 >> x_5 % (sizeof(size_t) * 8);
x_25 = 1;
x_26 = x_25 << x_5 % (sizeof(size_t) * 8);
x_27 = x_26 - x_25;
x_28 = x_4 & x_27;
x_29 = 5;
x_30 = x_5 - x_29;
x_31 = lean_usize_to_nat(x_24);
x_32 = lean_array_get_size(x_23);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_23);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_array_fget(x_23, x_31);
x_36 = l_Std_instInhabitedPersistentArrayNode___closed__1;
x_37 = lean_array_fset(x_23, x_31, x_36);
x_38 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_35, x_28, x_30);
x_39 = lean_array_fset(x_37, x_31, x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_3);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_3, 0);
x_43 = lean_usize_to_nat(x_4);
x_44 = lean_array_get_size(x_42);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_dec(x_43);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_array_fget(x_42, x_43);
x_47 = lean_box(0);
x_48 = lean_array_fset(x_42, x_43, x_47);
x_49 = lean_ctor_get(x_2, 2);
lean_inc(x_49);
lean_dec(x_2);
x_50 = l_Lean_IR_UnreachableBranches_Value_widening(x_49, x_1, x_46);
x_51 = lean_array_fset(x_48, x_43, x_50);
lean_dec(x_43);
lean_ctor_set(x_3, 0, x_51);
return x_3;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_usize_to_nat(x_4);
x_54 = lean_array_get_size(x_52);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_52);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_57 = lean_array_fget(x_52, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_52, x_53, x_58);
x_60 = lean_ctor_get(x_2, 2);
lean_inc(x_60);
lean_dec(x_2);
x_61 = l_Lean_IR_UnreachableBranches_Value_widening(x_60, x_1, x_57);
x_62 = lean_array_fset(x_59, x_53, x_61);
lean_dec(x_53);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
return x_63;
}
}
}
}
}
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get_usize(x_3, 4);
x_9 = lean_ctor_get(x_3, 3);
x_10 = lean_nat_dec_le(x_9, x_4);
if (x_10 == 0)
{
size_t x_11; lean_object* x_12; 
x_11 = lean_usize_of_nat(x_4);
x_12 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_6, x_11, x_8);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_nat_sub(x_4, x_9);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(0);
x_18 = lean_array_fset(x_7, x_13, x_17);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_IR_UnreachableBranches_Value_widening(x_19, x_1, x_16);
x_21 = lean_array_fset(x_18, x_13, x_20);
lean_dec(x_13);
lean_ctor_set(x_3, 1, x_21);
return x_3;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_3, 0);
x_23 = lean_ctor_get(x_3, 1);
x_24 = lean_ctor_get(x_3, 2);
x_25 = lean_ctor_get_usize(x_3, 4);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_3);
x_27 = lean_nat_dec_le(x_26, x_4);
if (x_27 == 0)
{
size_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_usize_of_nat(x_4);
x_29 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_22, x_28, x_25);
x_30 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_23);
lean_ctor_set(x_30, 2, x_24);
lean_ctor_set(x_30, 3, x_26);
lean_ctor_set_usize(x_30, 4, x_25);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_nat_sub(x_4, x_26);
x_32 = lean_array_get_size(x_23);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_26);
lean_ctor_set_usize(x_34, 4, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_array_fget(x_23, x_31);
x_36 = lean_box(0);
x_37 = lean_array_fset(x_23, x_31, x_36);
x_38 = lean_ctor_get(x_2, 2);
lean_inc(x_38);
lean_dec(x_2);
x_39 = l_Lean_IR_UnreachableBranches_Value_widening(x_38, x_1, x_35);
x_40 = lean_array_fset(x_37, x_31, x_39);
lean_dec(x_31);
x_41 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_41, 0, x_22);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_24);
lean_ctor_set(x_41, 3, x_26);
lean_ctor_set_usize(x_41, 4, x_25);
return x_41;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateCurrFnSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_6, x_4);
lean_dec(x_4);
lean_ctor_set(x_3, 1, x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_11, x_4);
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = l_Std_PersistentArray_modifyAux___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__2(x_1, x_2, x_3, x_6, x_7);
return x_8;
}
}
lean_object* l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentArray_modify___at_Lean_IR_UnreachableBranches_updateCurrFnSummary___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_sub(x_4, x_12);
x_14 = lean_nat_sub(x_13, x_11);
lean_dec(x_13);
x_15 = l_Lean_IR_instInhabitedParam;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = l_Lean_IR_instInhabitedArg;
x_18 = lean_array_get(x_17, x_2, x_14);
lean_dec(x_14);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_IR_UnreachableBranches_findVarValue(x_19, x_7, x_8);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_IR_UnreachableBranches_findArgValue(x_18, x_7, x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_21);
x_26 = l_Lean_IR_UnreachableBranches_Value_merge(x_21, x_24);
x_27 = l_Lean_IR_UnreachableBranches_Value_beq(x_26, x_21);
lean_dec(x_21);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_3, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_26);
lean_dec(x_19);
x_32 = 1;
x_5 = x_12;
x_6 = x_32;
x_8 = x_25;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_array_fget(x_29, x_3);
x_35 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_36 = lean_array_fset(x_29, x_3, x_35);
x_37 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_34, x_19, x_26);
x_38 = lean_array_fset(x_36, x_3, x_37);
lean_ctor_set(x_25, 0, x_38);
x_39 = 1;
x_5 = x_12;
x_6 = x_39;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_array_get_size(x_41);
x_44 = lean_nat_dec_lt(x_3, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_26);
lean_dec(x_19);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
x_46 = 1;
x_5 = x_12;
x_6 = x_46;
x_8 = x_45;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_48 = lean_array_fget(x_41, x_3);
x_49 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_50 = lean_array_fset(x_41, x_3, x_49);
x_51 = l_Std_HashMapImp_insert___at_Lean_IR_UnreachableBranches_updateVarAssignment___spec__2(x_48, x_19, x_26);
x_52 = lean_array_fset(x_50, x_3, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_42);
x_54 = 1;
x_5 = x_12;
x_6 = x_54;
x_8 = x_53;
goto _start;
}
}
}
else
{
lean_dec(x_26);
lean_dec(x_19);
x_5 = x_12;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_5);
x_57 = lean_box(x_6);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_8);
return x_58;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_1);
x_7 = 0;
lean_inc(x_6);
x_8 = l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_5, x_6, x_6, x_7, x_3, x_4);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_updateJPParamsAssignment___spec__1(x_1, x_2, x_3, x_4, x_5, x_9, x_7, x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_UnreachableBranches_updateJPParamsAssignment___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
case 10:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_4, x_1);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_IR_UnreachableBranches_resetParamAssignment(x_8, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
x_4 = x_10;
x_6 = x_11;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_9, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = x_2 + x_13;
x_2 = x_14;
x_4 = x_11;
x_6 = x_12;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_16, x_5, x_6);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_2 = x_21;
x_4 = x_18;
x_6 = x_19;
goto _start;
}
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_6);
return x_23;
}
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_array_get_size(x_4);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_4);
x_1 = x_5;
goto _start;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_6, x_6);
if (x_10 == 0)
{
lean_dec(x_6);
lean_dec(x_4);
x_1 = x_5;
goto _start;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_14 = lean_box(0);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(x_4, x_12, x_13, x_14, x_2, x_3);
lean_dec(x_4);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_1 = x_5;
x_3 = x_16;
goto _start;
}
}
}
case 10:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_array_get_size(x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_18);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_le(x_19, x_19);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_19);
lean_dec(x_18);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_29 = lean_box(0);
x_30 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(x_18, x_27, x_28, x_29, x_2, x_3);
lean_dec(x_18);
return x_30;
}
}
}
default: 
{
uint8_t x_31; 
x_31 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_32;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_4(x_2, x_8, x_9, x_10, x_11);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_4(x_3, x_13, x_14, x_15, x_16);
return x_17;
}
case 10:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_4(x_4, x_18, x_19, x_20, x_21);
return x_22;
}
case 11:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_apply_1(x_5, x_23);
return x_24;
}
case 12:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_apply_2(x_6, x_25, x_26);
return x_27;
}
default: 
{
lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_apply_1(x_7, x_1);
return x_28;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_interpFnBody_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 == x_4;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_IR_UnreachableBranches_containsCtor(x_1, x_10);
lean_dec(x_10);
if (x_12 == 0)
{
size_t x_13; size_t x_14; lean_object* x_15; 
lean_dec(x_11);
x_13 = 1;
x_14 = x_3 + x_13;
x_15 = lean_box(0);
x_3 = x_14;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
lean_inc(x_6);
x_17 = l_Lean_IR_UnreachableBranches_interpFnBody(x_11, x_6, x_7);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_3 + x_20;
x_3 = x_21;
x_5 = x_18;
x_7 = x_19;
goto _start;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; 
x_23 = lean_ctor_get(x_9, 0);
lean_inc(x_23);
lean_dec(x_9);
lean_inc(x_6);
x_24 = l_Lean_IR_UnreachableBranches_interpFnBody(x_23, x_6, x_7);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_3 + x_27;
x_3 = x_28;
x_5 = x_25;
x_7 = x_26;
goto _start;
}
}
else
{
lean_object* x_30; 
lean_dec(x_6);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_7);
return x_30;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_interpFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_2);
x_7 = l_Lean_IR_UnreachableBranches_interpExpr(x_5, x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_4, x_8, x_2, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_1 = x_6;
x_3 = x_11;
goto _start;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 3);
x_19 = l_Lean_IR_LocalContext_addJP(x_18, x_13, x_14, x_15);
lean_ctor_set(x_2, 3, x_19);
x_1 = x_16;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_25 = l_Lean_IR_LocalContext_addJP(x_24, x_13, x_14, x_15);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_1 = x_16;
x_2 = x_26;
goto _start;
}
}
case 10:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_IR_UnreachableBranches_findVarValue(x_28, x_2, x_3);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_array_get_size(x_29);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_2);
x_37 = lean_box(0);
lean_ctor_set(x_30, 0, x_37);
return x_30;
}
else
{
uint8_t x_38; 
x_38 = lean_nat_dec_le(x_34, x_34);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_2);
x_39 = lean_box(0);
lean_ctor_set(x_30, 0, x_39);
return x_30;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_30);
x_40 = 0;
x_41 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_42 = lean_box(0);
x_43 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(x_32, x_29, x_40, x_41, x_42, x_2, x_33);
lean_dec(x_29);
lean_dec(x_32);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_30, 0);
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_30);
x_46 = lean_array_get_size(x_29);
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_nat_dec_lt(x_47, x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_29);
lean_dec(x_2);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_45);
return x_50;
}
else
{
uint8_t x_51; 
x_51 = lean_nat_dec_le(x_46, x_46);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_29);
lean_dec(x_2);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_45);
return x_53;
}
else
{
size_t x_54; size_t x_55; lean_object* x_56; lean_object* x_57; 
x_54 = 0;
x_55 = lean_usize_of_nat(x_46);
lean_dec(x_46);
x_56 = lean_box(0);
x_57 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(x_44, x_29, x_54, x_55, x_56, x_2, x_45);
lean_dec(x_29);
lean_dec(x_44);
return x_57;
}
}
}
}
case 11:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_1, 0);
lean_inc(x_58);
lean_dec(x_1);
x_59 = l_Lean_IR_UnreachableBranches_findArgValue(x_58, x_2, x_3);
lean_dec(x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_IR_UnreachableBranches_updateCurrFnSummary(x_60, x_2, x_61);
return x_62;
}
case 12:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_ctor_get(x_2, 3);
lean_inc(x_65);
x_66 = l_Lean_IR_LocalContext_getJPParams(x_65, x_63);
x_67 = l_Lean_IR_LocalContext_getJPBody(x_65, x_63);
lean_dec(x_63);
lean_dec(x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = l_Array_empty___closed__1;
x_69 = l_Option_get_x21___rarg___closed__4;
x_70 = lean_panic_fn(x_68, x_69);
x_71 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_70, x_64, x_2, x_3);
lean_dec(x_64);
lean_dec(x_70);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_72 = l_Lean_IR_instInhabitedFnBody;
x_73 = lean_panic_fn(x_72, x_69);
x_74 = lean_ctor_get(x_71, 0);
lean_inc(x_74);
x_75 = lean_unbox(x_74);
lean_dec(x_74);
if (x_75 == 0)
{
uint8_t x_76; 
lean_dec(x_73);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_71);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_71, 0);
lean_dec(x_77);
x_78 = lean_box(0);
lean_ctor_set(x_71, 0, x_78);
return x_71;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_71, 1);
lean_inc(x_79);
lean_dec(x_71);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_71, 1);
lean_inc(x_82);
lean_dec(x_71);
lean_inc(x_73);
x_83 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_73, x_2, x_82);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_1 = x_73;
x_3 = x_84;
goto _start;
}
}
else
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_71, 0);
lean_inc(x_86);
x_87 = lean_unbox(x_86);
lean_dec(x_86);
if (x_87 == 0)
{
uint8_t x_88; 
lean_dec(x_67);
lean_dec(x_2);
x_88 = !lean_is_exclusive(x_71);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_71, 0);
lean_dec(x_89);
x_90 = lean_box(0);
lean_ctor_set(x_71, 0, x_90);
return x_71;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_71, 1);
lean_inc(x_91);
lean_dec(x_71);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_67, 0);
lean_inc(x_94);
lean_dec(x_67);
x_95 = lean_ctor_get(x_71, 1);
lean_inc(x_95);
lean_dec(x_71);
lean_inc(x_94);
x_96 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_94, x_2, x_95);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_1 = x_94;
x_3 = x_97;
goto _start;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_66, 0);
lean_inc(x_99);
lean_dec(x_66);
x_100 = l_Lean_IR_UnreachableBranches_updateJPParamsAssignment(x_99, x_64, x_2, x_3);
lean_dec(x_64);
lean_dec(x_99);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_101 = l_Lean_IR_instInhabitedFnBody;
x_102 = l_Option_get_x21___rarg___closed__4;
x_103 = lean_panic_fn(x_101, x_102);
x_104 = lean_ctor_get(x_100, 0);
lean_inc(x_104);
x_105 = lean_unbox(x_104);
lean_dec(x_104);
if (x_105 == 0)
{
uint8_t x_106; 
lean_dec(x_103);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_100);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_100, 0);
lean_dec(x_107);
x_108 = lean_box(0);
lean_ctor_set(x_100, 0, x_108);
return x_100;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_100, 1);
lean_inc(x_109);
lean_dec(x_100);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_100, 1);
lean_inc(x_112);
lean_dec(x_100);
lean_inc(x_103);
x_113 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_103, x_2, x_112);
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
lean_dec(x_113);
x_1 = x_103;
x_3 = x_114;
goto _start;
}
}
else
{
lean_object* x_116; uint8_t x_117; 
x_116 = lean_ctor_get(x_100, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
lean_dec(x_116);
if (x_117 == 0)
{
uint8_t x_118; 
lean_dec(x_67);
lean_dec(x_2);
x_118 = !lean_is_exclusive(x_100);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_100, 0);
lean_dec(x_119);
x_120 = lean_box(0);
lean_ctor_set(x_100, 0, x_120);
return x_100;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_100, 1);
lean_inc(x_121);
lean_dec(x_100);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_67, 0);
lean_inc(x_124);
lean_dec(x_67);
x_125 = lean_ctor_get(x_100, 1);
lean_inc(x_125);
lean_dec(x_100);
lean_inc(x_124);
x_126 = l___private_Lean_Compiler_IR_ElimDeadBranches_0__Lean_IR_UnreachableBranches_resetNestedJPParams(x_124, x_2, x_125);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_1 = x_124;
x_3 = x_127;
goto _start;
}
}
}
}
default: 
{
uint8_t x_129; 
x_129 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_129 == 0)
{
lean_object* x_130; 
x_130 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_130;
goto _start;
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_2);
lean_dec(x_1);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_3);
return x_133;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_interpFnBody___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_inferStep_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_2 = x_1;
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_10 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1;
x_11 = lean_array_uset(x_7, x_2, x_10);
x_2 = x_9;
x_3 = x_11;
goto _start;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(1);
x_11 = l_Lean_IR_UnreachableBranches_updateVarAssignment(x_9, x_10, x_5, x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = x_2 + x_14;
x_2 = x_15;
x_4 = x_12;
x_6 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_6);
return x_17;
}
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_4);
x_12 = lean_nat_sub(x_3, x_11);
x_13 = lean_nat_sub(x_12, x_10);
lean_dec(x_12);
x_14 = l_Lean_IR_instInhabitedDecl;
x_15 = lean_array_get(x_14, x_1, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
x_19 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_18, x_13);
x_20 = lean_array_get_size(x_16);
x_21 = lean_nat_dec_lt(x_8, x_20);
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 2);
x_24 = lean_ctor_get(x_6, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_13);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set(x_25, 3, x_24);
if (x_21 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_20);
lean_dec(x_16);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_7);
x_26 = x_42;
goto block_40;
}
else
{
uint8_t x_43; 
x_43 = lean_nat_dec_le(x_20, x_20);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_20);
lean_dec(x_16);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_7);
x_26 = x_45;
goto block_40;
}
else
{
size_t x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_47 = lean_box(0);
x_48 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2(x_16, x_2, x_46, x_47, x_25, x_7);
lean_dec(x_16);
x_26 = x_48;
goto block_40;
}
}
block_40:
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_IR_UnreachableBranches_interpFnBody(x_17, x_25, x_27);
if (x_5 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
x_31 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_30, x_13);
lean_dec(x_13);
x_32 = l_Lean_IR_UnreachableBranches_Value_beq(x_19, x_31);
lean_dec(x_31);
lean_dec(x_19);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 1;
x_4 = x_11;
x_5 = x_33;
x_7 = x_29;
goto _start;
}
else
{
uint8_t x_35; 
x_35 = 0;
x_4 = x_11;
x_5 = x_35;
x_7 = x_29;
goto _start;
}
}
else
{
lean_object* x_37; uint8_t x_38; 
lean_dec(x_19);
lean_dec(x_13);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_dec(x_28);
x_38 = 1;
x_4 = x_11;
x_5 = x_38;
x_7 = x_37;
goto _start;
}
}
}
else
{
lean_dec(x_15);
lean_dec(x_13);
x_4 = x_11;
goto _start;
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_4);
x_50 = lean_box(x_5);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_7);
return x_51;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferStep(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_4);
x_6 = 0;
lean_inc(x_3);
x_7 = x_3;
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_5, x_6, x_7);
x_9 = x_8;
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_9);
x_12 = 0;
lean_inc(x_4);
x_13 = l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_3, x_6, x_4, x_4, x_12, x_1, x_2);
lean_dec(x_1);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
x_16 = 0;
lean_inc(x_4);
x_17 = l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_3, x_6, x_4, x_4, x_16, x_1, x_15);
lean_dec(x_1);
lean_dec(x_4);
lean_dec(x_3);
return x_17;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_UnreachableBranches_inferStep___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Nat_foldM_loop___at_Lean_IR_UnreachableBranches_inferStep___spec__3(x_1, x_8, x_3, x_4, x_9, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_UnreachableBranches_inferMain(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_3 = l_Lean_IR_UnreachableBranches_inferStep(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_2 = x_12;
goto _start;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDeadAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_4(x_2, x_6, x_7, x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_4(x_3, x_11, x_12, x_13, x_14);
return x_15;
}
case 10:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_4, x_16, x_17, x_18, x_19);
return x_20;
}
default: 
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_5, x_1);
return x_21;
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDeadAux_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = 1;
x_12 = x_3 + x_11;
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
x_16 = lean_box(0);
x_17 = l_Lean_IR_UnreachableBranches_containsCtor(x_16, x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
x_18 = lean_box(13);
lean_ctor_set(x_10, 1, x_18);
x_19 = x_10;
x_20 = lean_array_uset(x_9, x_3, x_19);
x_3 = x_12;
x_4 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_15);
lean_ctor_set(x_10, 1, x_22);
x_23 = x_10;
x_24 = lean_array_uset(x_9, x_3, x_23);
x_3 = x_12;
x_4 = x_24;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_box(0);
x_29 = l_Lean_IR_UnreachableBranches_containsCtor(x_28, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
x_30 = lean_box(13);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
x_32 = x_31;
x_33 = lean_array_uset(x_9, x_3, x_32);
x_3 = x_12;
x_4 = x_33;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_27);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_26);
lean_ctor_set(x_36, 1, x_35);
x_37 = x_36;
x_38 = lean_array_uset(x_9, x_3, x_37);
x_3 = x_12;
x_4 = x_38;
goto _start;
}
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_41);
lean_ctor_set(x_10, 0, x_42);
x_43 = x_10;
x_44 = lean_array_uset(x_9, x_3, x_43);
x_3 = x_12;
x_4 = x_44;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_10, 0);
lean_inc(x_46);
lean_dec(x_10);
x_47 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = x_48;
x_50 = lean_array_uset(x_9, x_3, x_49);
x_3 = x_12;
x_4 = x_50;
goto _start;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
x_12 = 1;
x_13 = x_4 + x_12;
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
x_17 = l_Lean_IR_UnreachableBranches_containsCtor(x_2, x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
x_18 = lean_box(13);
lean_ctor_set(x_11, 1, x_18);
x_19 = x_11;
x_20 = lean_array_uset(x_10, x_4, x_19);
x_4 = x_13;
x_5 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_16);
lean_ctor_set(x_11, 1, x_22);
x_23 = x_11;
x_24 = lean_array_uset(x_10, x_4, x_23);
x_4 = x_13;
x_5 = x_24;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = l_Lean_IR_UnreachableBranches_containsCtor(x_2, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
x_29 = lean_box(13);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = x_30;
x_32 = lean_array_uset(x_10, x_4, x_31);
x_4 = x_13;
x_5 = x_32;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_27);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = x_35;
x_37 = lean_array_uset(x_10, x_4, x_36);
x_4 = x_13;
x_5 = x_37;
goto _start;
}
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_11);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_11, 0);
x_41 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_40);
lean_ctor_set(x_11, 0, x_41);
x_42 = x_11;
x_43 = lean_array_uset(x_10, x_4, x_42);
x_4 = x_13;
x_5 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_11, 0);
lean_inc(x_45);
lean_dec(x_11);
x_46 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = x_47;
x_49 = lean_array_uset(x_10, x_4, x_48);
x_4 = x_13;
x_5 = x_49;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 3);
x_5 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_4);
lean_ctor_set(x_2, 3, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_10 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_9);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
case 1:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_2, 2);
x_14 = lean_ctor_get(x_2, 3);
x_15 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_13);
x_16 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_14);
lean_ctor_set(x_2, 3, x_16);
lean_ctor_set(x_2, 2, x_15);
return x_2;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = lean_ctor_get(x_2, 2);
x_20 = lean_ctor_get(x_2, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_21 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_19);
x_22 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_20);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_22);
return x_23;
}
}
case 10:
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_2, 1);
x_26 = lean_ctor_get(x_2, 3);
x_27 = lean_array_get_size(x_26);
x_28 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_29 = 0;
x_30 = x_26;
x_31 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_25);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_28, x_29, x_30);
x_33 = x_32;
lean_ctor_set(x_2, 3, x_33);
return x_2;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_34, x_28, x_29, x_30);
lean_dec(x_34);
x_36 = x_35;
lean_ctor_set(x_2, 3, x_36);
return x_2;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_2, 0);
x_38 = lean_ctor_get(x_2, 1);
x_39 = lean_ctor_get(x_2, 2);
x_40 = lean_ctor_get(x_2, 3);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_2);
x_41 = lean_array_get_size(x_40);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = 0;
x_44 = x_40;
x_45 = l_Std_HashMapImp_find_x3f___at_Lean_IR_UnreachableBranches_findVarValue___spec__1(x_1, x_38);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_42, x_43, x_44);
x_47 = x_46;
x_48 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_48, 0, x_37);
lean_ctor_set(x_48, 1, x_38);
lean_ctor_set(x_48, 2, x_39);
lean_ctor_set(x_48, 3, x_47);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
lean_dec(x_45);
x_50 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_49, x_42, x_43, x_44);
lean_dec(x_49);
x_51 = x_50;
x_52 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_38);
lean_ctor_set(x_52, 2, x_39);
lean_ctor_set(x_52, 3, x_51);
return x_52;
}
}
}
default: 
{
uint8_t x_53; 
x_53 = l_Lean_IR_FnBody_isTerminal(x_2);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lean_IR_FnBody_body(x_2);
x_55 = lean_box(13);
x_56 = l_Lean_IR_FnBody_setBody(x_2, x_55);
x_57 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_54);
x_58 = l_Lean_IR_FnBody_setBody(x_56, x_57);
return x_58;
}
else
{
return x_2;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_elimDeadAux___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDeadAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Lean_IR_UnreachableBranches_elimDead_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_UnreachableBranches_elimDead_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
x_4 = l_Lean_IR_UnreachableBranches_elimDeadAux(x_1, x_3);
x_5 = l_Lean_IR_Decl_updateBody_x21(x_2, x_4);
return x_5;
}
else
{
return x_2;
}
}
}
lean_object* l_Lean_IR_UnreachableBranches_elimDead___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_UnreachableBranches_elimDead(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_elimDeadBranches_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_elimDeadBranches_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_elimDeadBranches_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_dec(x_4);
x_10 = lean_nat_add(x_9, x_8);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_10);
x_12 = l_Lean_IR_instInhabitedDecl;
x_13 = lean_array_get(x_12, x_1, x_11);
x_14 = l_Lean_IR_Decl_name(x_13);
lean_dec(x_13);
lean_inc(x_2);
x_15 = l_Std_PersistentArray_get_x21___at_Lean_IR_UnreachableBranches_interpExpr___spec__2(x_2, x_11);
lean_dec(x_11);
x_16 = l_Lean_IR_UnreachableBranches_addFunctionSummary(x_5, x_14, x_15);
x_4 = x_9;
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_4);
x_12 = lean_array_fget(x_3, x_5);
x_13 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_14 = lean_array_get(x_13, x_2, x_5);
x_15 = l_Lean_IR_UnreachableBranches_elimDead(x_14, x_12);
lean_dec(x_14);
x_16 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_17 = lean_array_push(x_7, x_15);
x_4 = x_11;
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_17;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
}
lean_object* l_Lean_IR_elimDeadBranches(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_6);
x_8 = 0;
lean_inc(x_1);
x_9 = x_1;
x_10 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_7, x_8, x_9);
x_11 = x_10;
x_12 = lean_box(0);
lean_inc(x_6);
x_13 = l_Std_mkPersistentArray___rarg(x_6, x_12);
x_14 = lean_box(0);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_5);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_1);
lean_ctor_set(x_16, 2, x_5);
lean_ctor_set(x_16, 3, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_13);
x_18 = l_Lean_IR_UnreachableBranches_inferMain(x_16, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_6);
x_22 = l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_20, x_6, x_6, x_5);
lean_ctor_set(x_3, 0, x_22);
x_23 = lean_mk_empty_array_with_capacity(x_6);
x_24 = l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2(x_1, x_21, x_1, x_6, x_15, lean_box(0), x_23);
lean_dec(x_21);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_3);
x_28 = lean_array_get_size(x_1);
x_29 = lean_usize_of_nat(x_28);
x_30 = 0;
lean_inc(x_1);
x_31 = x_1;
x_32 = l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1(x_29, x_30, x_31);
x_33 = x_32;
x_34 = lean_box(0);
lean_inc(x_28);
x_35 = l_Std_mkPersistentArray___rarg(x_28, x_34);
x_36 = lean_box(0);
x_37 = lean_unsigned_to_nat(0u);
lean_inc(x_26);
lean_inc(x_1);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_1);
lean_ctor_set(x_38, 2, x_26);
lean_ctor_set(x_38, 3, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_35);
x_40 = l_Lean_IR_UnreachableBranches_inferMain(x_38, x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
lean_inc(x_28);
x_44 = l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_42, x_28, x_28, x_26);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_27);
x_46 = lean_mk_empty_array_with_capacity(x_28);
x_47 = l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2(x_1, x_43, x_1, x_28, x_37, lean_box(0), x_46);
lean_dec(x_43);
lean_dec(x_1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
}
lean_object* l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___at_Lean_IR_elimDeadBranches___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapIdxM_map___at_Lean_IR_elimDeadBranches___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_IR_elimDeadBranches___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_elimDeadBranches(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_ElimDeadBranches(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_UnreachableBranches_instInhabitedValue = _init_l_Lean_IR_UnreachableBranches_instInhabitedValue();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_instInhabitedValue);
l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instBEqValue___closed__1);
l_Lean_IR_UnreachableBranches_Value_instBEqValue = _init_l_Lean_IR_UnreachableBranches_Value_instBEqValue();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instBEqValue);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__1);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__2);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__3);
l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4 = _init_l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_addChoice___closed__4);
l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1 = _init_l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1();
lean_mark_persistent(l_List_foldl___at_Lean_IR_UnreachableBranches_Value_merge___spec__2___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__1);
l_Lean_IR_UnreachableBranches_Value_format___closed__2 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__2);
l_Lean_IR_UnreachableBranches_Value_format___closed__3 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__3);
l_Lean_IR_UnreachableBranches_Value_format___closed__4 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__4);
l_Lean_IR_UnreachableBranches_Value_format___closed__5 = _init_l_Lean_IR_UnreachableBranches_Value_format___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_format___closed__5);
l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instToFormatValue___closed__1);
l_Lean_IR_UnreachableBranches_Value_instToFormatValue = _init_l_Lean_IR_UnreachableBranches_Value_instToFormatValue();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instToFormatValue);
l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1 = _init_l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instToStringValue___closed__1);
l_Lean_IR_UnreachableBranches_Value_instToStringValue = _init_l_Lean_IR_UnreachableBranches_Value_instToStringValue();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_Value_instToStringValue);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__1);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____lambda__2___closed__2);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__1);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__2);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__3);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__4);
l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5 = _init_l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594____closed__5);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__1);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__2);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__3);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__4);
l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5 = _init_l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt___closed__5);
res = l_Lean_IR_UnreachableBranches_initFn____x40_Lean_Compiler_IR_ElimDeadBranches___hyg_594_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_IR_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_IR_UnreachableBranches_functionSummariesExt);
lean_dec_ref(res);
l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default = _init_l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_InterpContext_currFnIdx___default);
l_Lean_IR_UnreachableBranches_InterpContext_lctx___default = _init_l_Lean_IR_UnreachableBranches_InterpContext_lctx___default();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_InterpContext_lctx___default);
l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1 = _init_l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_updateVarAssignment___closed__1);
l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1 = _init_l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1();
lean_mark_persistent(l_Lean_IR_UnreachableBranches_interpExpr___boxed__const__1);
l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_IR_UnreachableBranches_inferStep___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
