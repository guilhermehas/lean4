// Lean compiler output
// Module: Lean.Compiler.IR.Basic
// Imports: Init Lean.Data.KVMap Lean.Data.Name Lean.Data.Format Lean.Compiler.ExternAttr
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
lean_object* l_Lean_IR_CtorInfo_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getValue___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body___boxed(lean_object*);
size_t l_USize_add(size_t, size_t);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21___closed__1;
lean_object* l_Lean_IR_reshapeAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_addParamsRename(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3(lean_object*);
uint8_t l_Lean_IR_Expr_alphaEqv(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_addVarRename(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_Arg_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_addParamsRename___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedVarIdSet;
lean_object* lean_ir_mk_uproj_expr(lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_IR_IRType_beq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqFnBody;
lean_object* l_Lean_IR_instToStringJoinPointId___closed__1;
lean_object* l_Lean_IR_FnBody_isTerminal_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_Index_lt(lean_object*, lean_object*);
lean_object* lean_ir_mk_vdecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl(lean_object*, lean_object*);
lean_object* l_Lean_IR_reshapeAux_match__1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_IR_LitVal_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isParam_match__1(lean_object*);
lean_object* l_Lean_IR_AltCore_mmodifyBody___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isJP(lean_object*, lean_object*);
lean_object* l_Lean_IR_DeclInfo_sorryDep_x3f___default;
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isStruct_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_instBEqFnBody___closed__1;
extern lean_object* l_Array_empty___closed__1;
extern lean_object* l_Lean_instInhabitedExternAttrData___closed__1;
lean_object* l_Lean_IR_modifyJPs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvVarId___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
uint8_t l_Lean_IR_IRType_isStruct(lean_object*);
lean_object* l_Lean_IR_mmodifyJPs(lean_object*);
lean_object* l_Lean_IR_mmodifyJPs___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isIrrelevant(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isObj_match__1(lean_object*);
lean_object* l_Lean_IR_Expr_alphaEqv_match__1___rarg___boxed(lean_object**);
lean_object* l_Lean_IR_instBEqVarId___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name_match__1(lean_object*);
lean_object* l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object*);
uint8_t l_Lean_IR_LocalContext_isParam(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_alphaEqv(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_ir_mk_str_expr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_setBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21___closed__2;
lean_object* l_Lean_IR_AltCore_setBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvExpr___closed__1;
lean_object* l_Lean_IR_IRType_isIrrelevant___boxed(lean_object*);
lean_object* l_Lean_IR_LocalContext_addParams___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getType_match__1(lean_object*);
lean_object* l_Lean_IR_IRType_isUnion___boxed(lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_mk_param(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_IR_instInhabitedAlt___closed__1;
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isObj(lean_object*);
lean_object* l_Lean_IR_Arg_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_Alt_isDefault___boxed(lean_object*);
lean_object* l_Lean_IR_AltCore_body___boxed(lean_object*);
lean_object* l_Lean_IR_LocalContext_addParams(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_resultType(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_IRType_isIrrelevant_match__1(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_IR_LocalContext_addLocal___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToStringVarId___closed__1;
lean_object* l_Lean_IR_LocalContext_isJP_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_modifyBody_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getType(lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_body(lean_object*);
lean_object* l_Lean_IR_VarId_alphaEqv_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LitVal_beq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getType_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instQuoteBool___closed__5;
lean_object* l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_setBlack___rarg(lean_object*);
lean_object* l_Lean_IR_Arg_beq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_getInfo_match__1(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_ir_mk_papp_expr(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(lean_object*, lean_object*);
lean_object* l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(lean_object*, lean_object*);
uint8_t l_Lean_IR_args_alphaEqv(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_IR_VarId_alphaEqv(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_mk_fapp_expr(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isLocalVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isStruct_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvArrayArg___closed__1;
lean_object* l_Lean_IR_instToStringVarId(lean_object*);
uint8_t l_Lean_IR_CtorInfo_isRef(lean_object*);
lean_object* l_Lean_IR_CtorInfo_isRef___boxed(lean_object*);
lean_object* l_Lean_IR_VarId_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_addParamRename(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isUnion_match__1(lean_object*);
size_t l_Lean_IR_instHashableVarId(lean_object*);
lean_object* l_Lean_IR_IRType_instBEqIRType___closed__1;
lean_object* l_Lean_IR_FnBody_isTerminal___boxed(lean_object*);
lean_object* l_Lean_IR_IRType_isIrrelevant_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_mk_jdecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LitVal_beq_match__1(lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPParams___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_modifyBody(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isObj_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isParam_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_appendTrees___rarg(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedArg___closed__1;
lean_object* l_Lean_IR_Decl_params___boxed(lean_object*);
lean_object* l_Lean_IR_Decl_getInfo___boxed(lean_object*);
uint8_t l_Lean_IR_FnBody_beq(lean_object*, lean_object*);
lean_object* l_Std_RBNode_balRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_RBNode_isBlack___rarg(lean_object*);
lean_object* l_Lean_IR_LocalContext_isLocalVar_match__1(lean_object*);
extern lean_object* l_Lean_instQuoteBool___closed__3;
lean_object* l_Lean_IR_instHashableVarId___boxed(lean_object*);
lean_object* l_Lean_IR_LocalContext_getValue(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addParam(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body_match__1(lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isObj___boxed(lean_object*);
lean_object* l_Lean_IR_AltCore_body_match__1(lean_object*);
extern lean_object* l_Array_swapAt_x21___rarg___closed__4;
uint8_t l_Lean_IR_IRType_beq(lean_object*, lean_object*);
lean_object* l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isLocalVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_args_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_swapAt_x21___rarg___closed__1;
uint8_t l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedFnBody;
extern lean_object* l_Array_swapAt_x21___rarg___closed__2;
lean_object* l_Lean_IR_Decl_updateBody_x21___closed__4;
lean_object* l_Lean_IR_Decl_getInfo(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1(lean_object*);
lean_object* l_Lean_IR_push(lean_object*, lean_object*);
lean_object* l_Lean_IR_Expr_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedDecl;
lean_object* lean_ir_mk_alt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_mkIf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_split(lean_object*);
lean_object* l_Lean_IR_Decl_name___boxed(lean_object*);
lean_object* l_Lean_IR_instInhabitedIRType;
lean_object* lean_ir_mk_num_expr(lean_object*);
lean_object* l_Lean_IR_FnBody_nil;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_flattenAux(lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvArg;
lean_object* lean_ir_mk_app_expr(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqArg;
lean_object* l_Lean_IR_instBEqLitVal;
lean_object* l_Lean_IR_instInhabitedParam;
lean_object* l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1;
lean_object* l_Lean_IR_AltCore_setBody_match__1(lean_object*);
lean_object* l_Std_RBNode_balLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableJoinPointId___boxed(lean_object*);
lean_object* lean_ir_mk_proj_expr(lean_object*, lean_object*);
lean_object* l_Lean_IR_Alt_ctor(lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedParam___closed__1;
uint8_t l_Lean_IR_IRType_isUnion(lean_object*);
lean_object* lean_ir_mk_case(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_IR_addVarRename___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_Decl_isExtern(lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CtorInfo_beq_match__1(lean_object*);
lean_object* l_Lean_IR_MData_empty;
lean_object* lean_ir_mk_extern_decl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21___closed__3;
lean_object* lean_ir_mk_ctor_expr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToFormatVarId(lean_object*);
lean_object* l_Lean_IR_AltCore_mmodifyBody(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Array_swapAt_x21___rarg___closed__3;
lean_object* l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_mkApp___closed__1;
lean_object* l_Lean_IR_FnBody_body_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LitVal_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_setBody(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_contains___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_isExtern_match__1(lean_object*);
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_Index_lt___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_instQuoteBool___closed__2;
uint8_t l_Lean_IR_instBEqVarId(lean_object*, lean_object*);
lean_object* l_Lean_IR_VarId_alphaEqv_match__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Std_RBNode_isRed___rarg(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_CtorInfo_isScalar___boxed(lean_object*);
uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedJoinPointId;
lean_object* l_Lean_IR_instAlphaEqvArrayArg;
lean_object* l_Lean_IR_FnBody_flatten(lean_object*);
lean_object* l_Lean_IR_Expr_alphaEqv_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_mk_var_arg(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvArg___closed__1;
lean_object* lean_ir_mk_jmp(lean_object*, lean_object*);
lean_object* l_Lean_IR_Expr_alphaEqv_match__1(lean_object*);
size_t l_Lean_IR_instHashableJoinPointId(lean_object*);
lean_object* l_Lean_IR_IRType_isUnion_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isJP___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_mkIf___closed__2;
lean_object* l_Lean_IR_mkIf___closed__1;
lean_object* l_Lean_IR_mkIndexSet(lean_object*);
lean_object* l_Lean_IR_reshape(lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvVarId;
lean_object* l_Lean_IR_instInhabitedDecl___closed__1;
lean_object* l_Lean_IR_instBEqCtorInfo;
uint8_t l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_resultType___boxed(lean_object*);
lean_object* l_Lean_IR_LocalContext_addLocal(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToFormatJoinPointId(lean_object*);
lean_object* l_Lean_IR_IRType_isStruct___boxed(lean_object*);
lean_object* l_Lean_IR_IRType_instBEqIRType;
lean_object* l_Lean_IR_IRType_beq_match__1(lean_object*);
lean_object* l_Lean_IR_IRType_isScalar_match__1(lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
lean_object* lean_ir_mk_uset(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedVarId;
lean_object* l_Lean_IR_modifyJPs(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isParam___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToStringJoinPointId(lean_object*);
lean_object* lean_ir_mk_ret(lean_object*);
lean_object* lean_ir_mk_sproj_expr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqArg___closed__1;
lean_object* l_Lean_IR_CtorInfo_beq_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
lean_object* lean_ir_mk_sset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_getInfo_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedAlt;
lean_object* l_Lean_IR_FnBody_resetBody(lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__2(lean_object*);
uint8_t l_Lean_IR_Arg_alphaEqv(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instInhabitedArg;
lean_object* l_Lean_IR_IRType_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqCtorInfo___closed__1;
lean_object* l_Lean_IR_AltCore_body_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instAlphaEqvExpr;
uint8_t l_Lean_IR_instBEqJoinPointId(lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqJoinPointId___boxed(lean_object*, lean_object*);
lean_object* lean_ir_mk_unreachable(lean_object*);
lean_object* l_Lean_IR_modifyJPs_match__1(lean_object*);
lean_object* l_Lean_IR_Arg_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_modifyBody_match__1(lean_object*);
lean_object* l_Lean_IR_mkParam___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_Alt_isDefault(lean_object*);
lean_object* l_Lean_IR_LocalContext_getType___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_isJP_match__1(lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Lean_IR_reshapeAux___closed__1;
lean_object* lean_ir_mk_decl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_reshapeAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_isTerminal_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3___rarg___boxed(lean_object**);
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Lean_IR_IRType_isScalar_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_isExtern_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_Arg_beq_match__1(lean_object*);
lean_object* l_Lean_IR_instBEqLitVal___closed__1;
lean_object* l_Lean_IR_instInhabitedIndexSet;
lean_object* l_Lean_IR_Alt_default(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_IR_mkIndexSet___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_isExtern___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_IR_IRType_isScalar___boxed(lean_object*);
lean_object* l_Lean_IR_FnBody_setBody_match__1(lean_object*);
uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
static lean_object* _init_l_Lean_IR_instInhabitedVarId() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedJoinPointId() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
uint8_t l_Lean_IR_Index_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_Index_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_Index_lt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_IR_instBEqVarId(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_instBEqVarId___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_instBEqVarId(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instToStringVarId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("x_");
return x_1;
}
}
lean_object* l_Lean_IR_instToStringVarId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_IR_instToStringVarId___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_instToFormatVarId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_IR_instToStringVarId___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
size_t l_Lean_IR_instHashableVarId(lean_object* x_1) {
_start:
{
size_t x_2; 
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_instHashableVarId___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_instHashableVarId(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
uint8_t l_Lean_IR_instBEqJoinPointId(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_instBEqJoinPointId___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_instBEqJoinPointId(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instToStringJoinPointId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("block_");
return x_1;
}
}
lean_object* l_Lean_IR_instToStringJoinPointId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_IR_instToStringJoinPointId___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_instToFormatJoinPointId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_IR_instToStringJoinPointId___closed__1;
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
size_t l_Lean_IR_instHashableJoinPointId(lean_object* x_1) {
_start:
{
size_t x_2; 
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_instHashableJoinPointId___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_instHashableJoinPointId(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_MData_empty() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedIRType() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_IR_IRType_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_14);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_3);
x_17 = lean_apply_2(x_14, x_1, x_2);
return x_17;
}
}
case 1:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = lean_apply_1(x_4, x_18);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_4);
x_20 = lean_apply_2(x_14, x_1, x_2);
return x_20;
}
}
case 2:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_14);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_5, x_21);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_5);
x_23 = lean_apply_2(x_14, x_1, x_2);
return x_23;
}
}
case 3:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_14);
x_24 = lean_box(0);
x_25 = lean_apply_1(x_6, x_24);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_6);
x_26 = lean_apply_2(x_14, x_1, x_2);
return x_26;
}
}
case 4:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_14);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_7, x_27);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_7);
x_29 = lean_apply_2(x_14, x_1, x_2);
return x_29;
}
}
case 5:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_14);
x_30 = lean_box(0);
x_31 = lean_apply_1(x_8, x_30);
return x_31;
}
else
{
lean_object* x_32; 
lean_dec(x_8);
x_32 = lean_apply_2(x_14, x_1, x_2);
return x_32;
}
}
case 6:
{
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
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = lean_apply_1(x_9, x_33);
return x_34;
}
else
{
lean_object* x_35; 
lean_dec(x_9);
x_35 = lean_apply_2(x_14, x_1, x_2);
return x_35;
}
}
case 7:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_14);
x_36 = lean_box(0);
x_37 = lean_apply_1(x_10, x_36);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_10);
x_38 = lean_apply_2(x_14, x_1, x_2);
return x_38;
}
}
case 8:
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 8)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_14);
x_39 = lean_box(0);
x_40 = lean_apply_1(x_11, x_39);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_11);
x_41 = lean_apply_2(x_14, x_1, x_2);
return x_41;
}
}
case 9:
{
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_14);
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
lean_dec(x_1);
x_44 = lean_ctor_get(x_2, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_dec(x_2);
x_46 = lean_apply_4(x_12, x_42, x_43, x_44, x_45);
return x_46;
}
else
{
lean_object* x_47; 
lean_dec(x_12);
x_47 = lean_apply_2(x_14, x_1, x_2);
return x_47;
}
}
default: 
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_14);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_2, 1);
lean_inc(x_51);
lean_dec(x_2);
x_52 = lean_apply_4(x_13, x_48, x_49, x_50, x_51);
return x_52;
}
else
{
lean_object* x_53; 
lean_dec(x_13);
x_53 = lean_apply_2(x_14, x_1, x_2);
return x_53;
}
}
}
}
}
lean_object* l_Lean_IR_IRType_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_beq_match__1___rarg), 14, 0);
return x_2;
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_name_eq(x_6, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_12 = l_Lean_IR_IRType_beq(x_10, x_11);
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
uint8_t l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
x_12 = l_Lean_IR_IRType_beq(x_10, x_11);
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
uint8_t l_Lean_IR_IRType_beq(lean_object* x_1, lean_object* x_2) {
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
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
case 3:
{
if (lean_obj_tag(x_2) == 3)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
case 4:
{
if (lean_obj_tag(x_2) == 4)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
case 5:
{
if (lean_obj_tag(x_2) == 5)
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
case 6:
{
if (lean_obj_tag(x_2) == 6)
{
uint8_t x_15; 
x_15 = 1;
return x_15;
}
else
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
case 7:
{
if (lean_obj_tag(x_2) == 7)
{
uint8_t x_17; 
x_17 = 1;
return x_17;
}
else
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
}
case 8:
{
if (lean_obj_tag(x_2) == 8)
{
uint8_t x_19; 
x_19 = 1;
return x_19;
}
else
{
uint8_t x_20; 
x_20 = 0;
return x_20;
}
}
case 9:
{
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_ctor_get(x_2, 1);
x_25 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1(x_21, x_23);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = 0;
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_array_get_size(x_22);
x_28 = lean_array_get_size(x_24);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_28);
lean_dec(x_27);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = 0;
return x_30;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2(x_22, x_24, lean_box(0), x_22, x_24, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = 0;
return x_33;
}
}
default: 
{
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_1, 0);
x_35 = lean_ctor_get(x_1, 1);
x_36 = lean_ctor_get(x_2, 0);
x_37 = lean_ctor_get(x_2, 1);
x_38 = lean_name_eq(x_34, x_36);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = 0;
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_array_get_size(x_35);
x_41 = lean_array_get_size(x_37);
x_42 = lean_nat_dec_eq(x_40, x_41);
lean_dec(x_41);
lean_dec(x_40);
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = 0;
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_unsigned_to_nat(0u);
x_45 = l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3(x_35, x_37, lean_box(0), x_35, x_37, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
x_46 = 0;
return x_46;
}
}
}
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_IR_IRType_beq___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at_Lean_IR_IRType_beq___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_IR_IRType_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_IRType_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_IRType_instBEqIRType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_IRType_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_IRType_instBEqIRType() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_IRType_instBEqIRType___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_IRType_isScalar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
case 2:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
case 3:
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_5, x_15);
return x_16;
}
case 4:
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = lean_apply_1(x_6, x_17);
return x_18;
}
case 5:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_apply_1(x_7, x_19);
return x_20;
}
default: 
{
lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_apply_1(x_8, x_1);
return x_21;
}
}
}
}
lean_object* l_Lean_IR_IRType_isScalar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_isScalar_match__1___rarg), 8, 0);
return x_2;
}
}
uint8_t l_Lean_IR_IRType_isScalar(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 6:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
case 7:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 8:
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
case 9:
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
case 10:
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
default: 
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
}
}
lean_object* l_Lean_IR_IRType_isScalar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_IRType_isScalar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_IRType_isObj_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 7:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 8:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_IR_IRType_isObj_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_isObj_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_Lean_IR_IRType_isObj(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 7:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 8:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
default: 
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
}
}
lean_object* l_Lean_IR_IRType_isObj___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_IRType_isObj(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_IRType_isIrrelevant_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
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
lean_object* l_Lean_IR_IRType_isIrrelevant_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_isIrrelevant_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_IRType_isIrrelevant(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_IR_IRType_isIrrelevant___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_IRType_isIrrelevant(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_IRType_isStruct_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 9)
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
lean_object* l_Lean_IR_IRType_isStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_isStruct_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_IRType_isStruct(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_IR_IRType_isStruct___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_IRType_isStruct(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_IRType_isUnion_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 10)
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
lean_object* l_Lean_IR_IRType_isUnion_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_IRType_isUnion_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_IRType_isUnion(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 10)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_IR_IRType_isUnion___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_IRType_isUnion(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instInhabitedArg___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_Arg_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_2(x_5, x_1, x_2);
return x_9;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_2(x_5, x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_IR_Arg_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Arg_beq_match__1___rarg), 5, 0);
return x_2;
}
}
uint8_t l_Lean_IR_Arg_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_nat_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
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
lean_object* l_Lean_IR_Arg_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_Arg_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instBEqArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_Arg_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instBEqArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instBEqArg___closed__1;
return x_1;
}
}
lean_object* lean_ir_mk_var_arg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_IR_LitVal_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_2(x_5, x_1, x_2);
return x_9;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_2(x_5, x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_IR_LitVal_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_LitVal_beq_match__1___rarg), 5, 0);
return x_2;
}
}
uint8_t l_Lean_IR_LitVal_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_nat_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_string_dec_eq(x_8, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_IR_LitVal_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_LitVal_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instBEqLitVal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_LitVal_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instBEqLitVal() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instBEqLitVal___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_CtorInfo_beq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
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
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 4);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_10(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
lean_object* l_Lean_IR_CtorInfo_beq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_CtorInfo_beq_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_CtorInfo_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_ctor_get(x_1, 4);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 3);
x_12 = lean_ctor_get(x_2, 4);
x_13 = lean_name_eq(x_3, x_8);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_eq(x_4, x_9);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_eq(x_5, x_10);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_eq(x_6, x_11);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = 0;
return x_20;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_eq(x_7, x_12);
return x_21;
}
}
}
}
}
}
lean_object* l_Lean_IR_CtorInfo_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_CtorInfo_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instBEqCtorInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_CtorInfo_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instBEqCtorInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instBEqCtorInfo___closed__1;
return x_1;
}
}
uint8_t l_Lean_IR_CtorInfo_isRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 3);
x_6 = lean_nat_dec_lt(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_1, 4);
x_8 = lean_nat_dec_lt(x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
}
lean_object* l_Lean_IR_CtorInfo_isRef___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_CtorInfo_isRef(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_IR_CtorInfo_isRef(x_1);
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
}
lean_object* l_Lean_IR_CtorInfo_isScalar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_CtorInfo_isScalar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* lean_ir_mk_ctor_expr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* lean_ir_mk_proj_expr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_uproj_expr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_sproj_expr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* lean_ir_mk_fapp_expr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_papp_expr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_app_expr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_num_expr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_str_expr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedParam___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedParam() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instInhabitedParam___closed__1;
return x_1;
}
}
lean_object* lean_ir_mk_param(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_mkParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = lean_ir_mk_param(x_1, x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedFnBody() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(13);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_FnBody_nil() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(13);
return x_1;
}
}
lean_object* lean_ir_mk_vdecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* lean_ir_mk_jdecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* lean_ir_mk_uset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* lean_ir_mk_sset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* lean_ir_mk_case(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(7);
x_5 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
}
lean_object* lean_ir_mk_ret(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* lean_ir_mk_jmp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_ir_mk_unreachable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = lean_box(13);
return x_2;
}
}
lean_object* l_Lean_IR_Alt_ctor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_Alt_default(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedAlt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(13);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedAlt() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instInhabitedAlt___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_FnBody_isTerminal_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 10:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_4(x_2, x_7, x_8, x_9, x_10);
return x_11;
}
case 11:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_3, x_12);
return x_13;
}
case 12:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_4, x_14, x_15);
return x_16;
}
case 13:
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = lean_apply_1(x_5, x_17);
return x_18;
}
default: 
{
lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_apply_1(x_6, x_1);
return x_19;
}
}
}
}
lean_object* l_Lean_IR_FnBody_isTerminal_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_isTerminal_match__1___rarg), 6, 0);
return x_2;
}
}
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 10:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 11:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
case 12:
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
case 13:
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
default: 
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l_Lean_IR_FnBody_isTerminal___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_FnBody_isTerminal(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_FnBody_body_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_4(x_2, x_13, x_14, x_15, x_16);
return x_17;
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
x_22 = lean_apply_4(x_3, x_18, x_19, x_20, x_21);
return x_22;
}
case 2:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 3);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_apply_4(x_4, x_23, x_24, x_25, x_26);
return x_27;
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_apply_3(x_7, x_28, x_29, x_30);
return x_31;
}
case 4:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_apply_4(x_5, x_32, x_33, x_34, x_35);
return x_36;
}
case 5:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 2);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 3);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 4);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 5);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_apply_6(x_6, x_37, x_38, x_39, x_40, x_41, x_42);
return x_43;
}
case 6:
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_47 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_48 = lean_ctor_get(x_1, 2);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_box(x_46);
x_50 = lean_box(x_47);
x_51 = lean_apply_5(x_8, x_44, x_45, x_49, x_50, x_48);
return x_51;
}
case 7:
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
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
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
x_54 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_55 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_56 = lean_ctor_get(x_1, 2);
lean_inc(x_56);
lean_dec(x_1);
x_57 = lean_box(x_54);
x_58 = lean_box(x_55);
x_59 = lean_apply_5(x_9, x_52, x_53, x_57, x_58, x_56);
return x_59;
}
case 8:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = lean_ctor_get(x_1, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_1, 1);
lean_inc(x_61);
lean_dec(x_1);
x_62 = lean_apply_2(x_10, x_60, x_61);
return x_62;
}
case 9:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_apply_2(x_11, x_63, x_64);
return x_65;
}
default: 
{
lean_object* x_66; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_apply_1(x_12, x_1);
return x_66;
}
}
}
}
lean_object* l_Lean_IR_FnBody_body_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_body_match__1___rarg), 12, 0);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_body(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 3:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
case 5:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 5);
lean_inc(x_3);
return x_3;
}
case 6:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
return x_4;
}
case 7:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
return x_5;
}
case 8:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
return x_6;
}
case 9:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
return x_7;
}
case 10:
{
lean_inc(x_1);
return x_1;
}
case 11:
{
lean_inc(x_1);
return x_1;
}
case 12:
{
lean_inc(x_1);
return x_1;
}
case 13:
{
return x_1;
}
default: 
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
return x_8;
}
}
}
}
lean_object* l_Lean_IR_FnBody_body___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_setBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_5(x_3, x_14, x_15, x_16, x_17, x_2);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 3);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_apply_5(x_4, x_19, x_20, x_21, x_22, x_2);
return x_23;
}
case 2:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 3);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_apply_5(x_5, x_24, x_25, x_26, x_27, x_2);
return x_28;
}
case 3:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 2);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_apply_4(x_8, x_29, x_30, x_31, x_2);
return x_32;
}
case 4:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 3);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_apply_5(x_6, x_33, x_34, x_35, x_36, x_2);
return x_37;
}
case 5:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 3);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 4);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 5);
lean_inc(x_43);
lean_dec(x_1);
x_44 = lean_apply_7(x_7, x_38, x_39, x_40, x_41, x_42, x_43, x_2);
return x_44;
}
case 6:
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
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
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 1);
lean_inc(x_46);
x_47 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_48 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_49 = lean_ctor_get(x_1, 2);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_box(x_47);
x_51 = lean_box(x_48);
x_52 = lean_apply_6(x_9, x_45, x_46, x_50, x_51, x_49, x_2);
return x_52;
}
case 7:
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_55 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_57 = lean_ctor_get(x_1, 2);
lean_inc(x_57);
lean_dec(x_1);
x_58 = lean_box(x_55);
x_59 = lean_box(x_56);
x_60 = lean_apply_6(x_10, x_53, x_54, x_58, x_59, x_57, x_2);
return x_60;
}
case 8:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = lean_ctor_get(x_1, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_1, 1);
lean_inc(x_62);
lean_dec(x_1);
x_63 = lean_apply_3(x_11, x_61, x_62, x_2);
return x_63;
}
case 9:
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = lean_ctor_get(x_1, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
lean_dec(x_1);
x_66 = lean_apply_3(x_12, x_64, x_65, x_2);
return x_66;
}
default: 
{
lean_object* x_67; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_67 = lean_apply_2(x_13, x_1, x_2);
return x_67;
}
}
}
}
lean_object* l_Lean_IR_FnBody_setBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_setBody_match__1___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_setBody(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_dec(x_4);
lean_ctor_set(x_1, 3, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set(x_8, 3, x_2);
return x_8;
}
}
case 1:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 3);
lean_dec(x_10);
lean_ctor_set(x_1, 3, x_2);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_14 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
lean_ctor_set(x_14, 3, x_2);
return x_14;
}
}
case 2:
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_1, 3);
lean_dec(x_16);
lean_ctor_set(x_1, 3, x_2);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_1);
x_20 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_2);
return x_20;
}
}
case 3:
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_1, 2);
lean_dec(x_22);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
x_25 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_2);
return x_25;
}
}
case 4:
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_1, 3);
lean_dec(x_27);
lean_ctor_set(x_1, 3, x_2);
return x_1;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_1);
x_31 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_31, 2, x_30);
lean_ctor_set(x_31, 3, x_2);
return x_31;
}
}
case 5:
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_1);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_1, 5);
lean_dec(x_33);
lean_ctor_set(x_1, 5, x_2);
return x_1;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_1, 0);
x_35 = lean_ctor_get(x_1, 1);
x_36 = lean_ctor_get(x_1, 2);
x_37 = lean_ctor_get(x_1, 3);
x_38 = lean_ctor_get(x_1, 4);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_1);
x_39 = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(x_39, 0, x_34);
lean_ctor_set(x_39, 1, x_35);
lean_ctor_set(x_39, 2, x_36);
lean_ctor_set(x_39, 3, x_37);
lean_ctor_set(x_39, 4, x_38);
lean_ctor_set(x_39, 5, x_2);
return x_39;
}
}
case 6:
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_1);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_1, 2);
lean_dec(x_41);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_1, 1);
x_44 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_1);
x_46 = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_43);
lean_ctor_set(x_46, 2, x_2);
lean_ctor_set_uint8(x_46, sizeof(void*)*3, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*3 + 1, x_45);
return x_46;
}
}
case 7:
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_1);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_1, 2);
lean_dec(x_48);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_1, 0);
x_50 = lean_ctor_get(x_1, 1);
x_51 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_52 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_1);
x_53 = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(x_53, 0, x_49);
lean_ctor_set(x_53, 1, x_50);
lean_ctor_set(x_53, 2, x_2);
lean_ctor_set_uint8(x_53, sizeof(void*)*3, x_51);
lean_ctor_set_uint8(x_53, sizeof(void*)*3 + 1, x_52);
return x_53;
}
}
case 8:
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_1);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_1, 1);
lean_dec(x_55);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_1, 0);
lean_inc(x_56);
lean_dec(x_1);
x_57 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_2);
return x_57;
}
}
case 9:
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_1);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_1, 1);
lean_dec(x_59);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_1, 0);
lean_inc(x_60);
lean_dec(x_1);
x_61 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_2);
return x_61;
}
}
default: 
{
lean_dec(x_2);
return x_1;
}
}
}
}
lean_object* l_Lean_IR_FnBody_resetBody(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(13);
x_3 = l_Lean_IR_FnBody_setBody(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_FnBody_split(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_IR_FnBody_body(x_1);
x_3 = lean_box(13);
x_4 = l_Lean_IR_FnBody_setBody(x_1, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
lean_object* l_Lean_IR_AltCore_body_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_AltCore_body_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_AltCore_body_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_AltCore_body(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
lean_object* l_Lean_IR_AltCore_body___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_AltCore_body(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_AltCore_setBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_3, x_5, x_6, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
}
}
lean_object* l_Lean_IR_AltCore_setBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_AltCore_setBody_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_AltCore_setBody(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_2);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
}
}
}
lean_object* l_Lean_IR_AltCore_modifyBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_AltCore_modifyBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_AltCore_modifyBody_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_AltCore_modifyBody(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_apply_1(x_1, x_11);
lean_ctor_set(x_2, 0, x_12);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_1(x_1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
static lean_object* _init_l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_Alt_default), 1, 0);
return x_1;
}
}
lean_object* l_Lean_IR_AltCore_mmodifyBody___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_IR_Alt_ctor), 2, 1);
lean_closure_set(x_9, 0, x_4);
x_10 = lean_apply_1(x_2, x_5);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_1(x_2, x_12);
x_17 = l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1;
x_18 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_17, x_16);
return x_18;
}
}
}
lean_object* l_Lean_IR_AltCore_mmodifyBody(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_AltCore_mmodifyBody___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_Alt_isDefault(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_IR_Alt_isDefault___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_Alt_isDefault(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_push(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(13);
x_4 = l_Lean_IR_FnBody_setBody(x_2, x_3);
x_5 = lean_array_push(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_flattenAux(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_FnBody_body(x_1);
x_5 = l_Lean_IR_push(x_2, x_1);
x_1 = x_4;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_1);
return x_7;
}
}
}
lean_object* l_Lean_IR_FnBody_flatten(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Array_empty___closed__1;
x_3 = l_Lean_IR_flattenAux(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_reshapeAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_reshapeAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_reshapeAux_match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_reshapeAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(13);
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_reshapeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
lean_inc(x_7);
x_10 = l_Nat_repr(x_7);
x_11 = l_Array_swapAt_x21___rarg___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Array_swapAt_x21___rarg___closed__2;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Array_swapAt_x21___rarg___closed__3;
x_16 = l_Array_swapAt_x21___rarg___closed__4;
x_17 = lean_unsigned_to_nat(94u);
x_18 = lean_unsigned_to_nat(4u);
x_19 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_15, x_16, x_17, x_18, x_14);
lean_dec(x_14);
x_20 = l_Lean_IR_reshapeAux___closed__1;
x_21 = lean_panic_fn(x_20, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_IR_FnBody_setBody(x_22, x_3);
x_1 = x_23;
x_2 = x_7;
x_3 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_array_fget(x_1, x_7);
x_27 = lean_box(13);
x_28 = lean_array_fset(x_1, x_7, x_27);
x_29 = l_Lean_IR_FnBody_setBody(x_26, x_3);
x_1 = x_28;
x_2 = x_7;
x_3 = x_29;
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l_Lean_IR_reshape(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = l_Lean_IR_reshapeAux(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_modifyJPs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
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
lean_object* l_Lean_IR_modifyJPs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_modifyJPs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = 1;
x_12 = x_3 + x_11;
if (lean_obj_tag(x_10) == 1)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_10, 2);
lean_inc(x_1);
x_20 = lean_apply_1(x_1, x_19);
lean_ctor_set(x_10, 2, x_20);
x_13 = x_10;
goto block_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
x_23 = lean_ctor_get(x_10, 2);
x_24 = lean_ctor_get(x_10, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
lean_inc(x_1);
x_25 = lean_apply_1(x_1, x_23);
x_26 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_25);
lean_ctor_set(x_26, 3, x_24);
x_13 = x_26;
goto block_17;
}
}
else
{
x_13 = x_10;
goto block_17;
}
block_17:
{
lean_object* x_14; lean_object* x_15; 
x_14 = x_13;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_12;
x_4 = x_15;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_modifyJPs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_5 = 0;
x_6 = x_1;
x_7 = l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1(x_2, x_4, x_5, x_6);
x_8 = x_7;
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_IR_modifyJPs___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = x_6;
x_10 = lean_array_uset(x_2, x_1, x_9);
x_11 = l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg(x_3, x_4, x_5, x_8, x_10);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = x_5;
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_array_uget(x_5, x_4);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_5, x_4, x_12);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = x_11;
x_16 = lean_box_usize(x_4);
x_17 = lean_box_usize(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_18 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_13);
lean_closure_set(x_18, 2, x_1);
lean_closure_set(x_18, 3, x_2);
lean_closure_set(x_18, 4, x_17);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_15, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_15, 3);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_apply_1(x_2, x_21);
x_24 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__2), 5, 4);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_19);
lean_closure_set(x_24, 2, x_20);
lean_closure_set(x_24, 3, x_22);
lean_inc(x_14);
x_25 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_23, x_24);
x_26 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_25, x_18);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_2);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_apply_2(x_28, lean_box(0), x_15);
x_30 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_29, x_18);
return x_30;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_IR_mmodifyJPs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = x_2;
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg(x_1, x_3, x_5, x_6, x_7);
x_9 = x_8;
return x_9;
}
}
lean_object* l_Lean_IR_mmodifyJPs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_mmodifyJPs___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_IR_mmodifyJPs___spec__1___rarg(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* lean_ir_mk_alt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_IR_DeclInfo_sorryDep_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedDecl___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = l_Array_empty___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_instInhabitedExternAttrData___closed__1;
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedDecl() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instInhabitedDecl___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_Decl_name_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_Decl_name_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Decl_name_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_name(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_name___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_Decl_name(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_params(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_params___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_Decl_params(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_resultType(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_resultType___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_Decl_resultType(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_isExtern_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
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
}
}
lean_object* l_Lean_IR_Decl_isExtern_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Decl_isExtern_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_Decl_isExtern(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_IR_Decl_isExtern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_Decl_isExtern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_Decl_getInfo_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_Decl_getInfo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Decl_getInfo_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_getInfo(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
}
lean_object* l_Lean_IR_Decl_getInfo___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_Decl_getInfo(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_Decl_updateBody_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Compiler.IR.Basic");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_Decl_updateBody_x21___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.IR.Decl.updateBody!");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_Decl_updateBody_x21___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected definition");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_Decl_updateBody_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_IR_Decl_updateBody_x21___closed__1;
x_2 = l_Lean_IR_Decl_updateBody_x21___closed__2;
x_3 = lean_unsigned_to_nat(430u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_IR_Decl_updateBody_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_dec(x_4);
lean_ctor_set(x_1, 3, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_2);
lean_ctor_set(x_9, 4, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_IR_instInhabitedDecl;
x_11 = l_Lean_IR_Decl_updateBody_x21___closed__4;
x_12 = lean_panic_fn(x_10, x_11);
return x_12;
}
}
}
lean_object* lean_ir_mk_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
lean_object* lean_ir_mk_extern_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedIndexSet() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = lean_nat_dec_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_10, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_15);
return x_1;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_12, x_2, x_3);
x_17 = 0;
lean_ctor_set(x_1, 3, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_nat_dec_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_nat_dec_lt(x_21, x_2);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_21);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set(x_27, 2, x_3);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_26);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_23, x_2, x_3);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_22);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
x_39 = lean_nat_dec_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = lean_nat_dec_lt(x_36, x_2);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_37);
lean_dec(x_36);
x_41 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_41);
return x_1;
}
else
{
uint8_t x_42; 
x_42 = l_Std_RBNode_isRed___rarg(x_38);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_38, x_2, x_3);
x_44 = 1;
lean_ctor_set(x_1, 3, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_44);
return x_1;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_38, x_2, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_45, 3);
lean_dec(x_49);
x_50 = lean_ctor_get(x_45, 0);
lean_dec(x_50);
x_51 = 0;
lean_ctor_set(x_45, 0, x_47);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_51);
x_52 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_45, 1);
x_54 = lean_ctor_get(x_45, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = 0;
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = 1;
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_57);
return x_1;
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_47, sizeof(void*)*4);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_45);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_45, 1);
x_61 = lean_ctor_get(x_45, 2);
x_62 = lean_ctor_get(x_45, 3);
lean_dec(x_62);
x_63 = lean_ctor_get(x_45, 0);
lean_dec(x_63);
x_64 = !lean_is_exclusive(x_47);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_47, 0);
x_66 = lean_ctor_get(x_47, 1);
x_67 = lean_ctor_get(x_47, 2);
x_68 = lean_ctor_get(x_47, 3);
x_69 = 1;
lean_ctor_set(x_47, 3, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 1, x_36);
lean_ctor_set(x_47, 0, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_69);
lean_ctor_set(x_45, 3, x_68);
lean_ctor_set(x_45, 2, x_67);
lean_ctor_set(x_45, 1, x_66);
lean_ctor_set(x_45, 0, x_65);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_69);
x_70 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_70);
return x_1;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_47, 0);
x_72 = lean_ctor_get(x_47, 1);
x_73 = lean_ctor_get(x_47, 2);
x_74 = lean_ctor_get(x_47, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_47);
x_75 = 1;
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_36);
lean_ctor_set(x_76, 2, x_37);
lean_ctor_set(x_76, 3, x_46);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_75);
lean_ctor_set(x_45, 3, x_74);
lean_ctor_set(x_45, 2, x_73);
lean_ctor_set(x_45, 1, x_72);
lean_ctor_set(x_45, 0, x_71);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_75);
x_77 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_76);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_77);
return x_1;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_78 = lean_ctor_get(x_45, 1);
x_79 = lean_ctor_get(x_45, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_45);
x_80 = lean_ctor_get(x_47, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_47, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_47, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_47, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 x_84 = x_47;
} else {
 lean_dec_ref(x_47);
 x_84 = lean_box(0);
}
x_85 = 1;
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(1, 4, 1);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_35);
lean_ctor_set(x_86, 1, x_36);
lean_ctor_set(x_86, 2, x_37);
lean_ctor_set(x_86, 3, x_46);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
x_87 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_87, 0, x_80);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_82);
lean_ctor_set(x_87, 3, x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_85);
x_88 = 0;
lean_ctor_set(x_1, 3, x_87);
lean_ctor_set(x_1, 2, x_79);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_86);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_88);
return x_1;
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_45);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_45, 3);
lean_dec(x_90);
x_91 = lean_ctor_get(x_45, 0);
lean_dec(x_91);
x_92 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_92);
x_93 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_93);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_45, 1);
x_95 = lean_ctor_get(x_45, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_45);
x_96 = 0;
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_46);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_47);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = 1;
lean_ctor_set(x_1, 3, x_97);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_98);
return x_1;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = lean_ctor_get_uint8(x_46, sizeof(void*)*4);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_45);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_45, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_46);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_46, 0);
x_104 = lean_ctor_get(x_46, 1);
x_105 = lean_ctor_get(x_46, 2);
x_106 = lean_ctor_get(x_46, 3);
x_107 = 1;
lean_ctor_set(x_46, 3, x_103);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_107);
lean_ctor_set(x_45, 0, x_106);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_107);
x_108 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
x_111 = lean_ctor_get(x_46, 2);
x_112 = lean_ctor_get(x_46, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_113 = 1;
x_114 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_114, 0, x_35);
lean_ctor_set(x_114, 1, x_36);
lean_ctor_set(x_114, 2, x_37);
lean_ctor_set(x_114, 3, x_109);
lean_ctor_set_uint8(x_114, sizeof(void*)*4, x_113);
lean_ctor_set(x_45, 0, x_112);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_113);
x_115 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_111);
lean_ctor_set(x_1, 1, x_110);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_115);
return x_1;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_116 = lean_ctor_get(x_45, 1);
x_117 = lean_ctor_get(x_45, 2);
x_118 = lean_ctor_get(x_45, 3);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_45);
x_119 = lean_ctor_get(x_46, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_46, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_46, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_46, 3);
lean_inc(x_122);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_123 = x_46;
} else {
 lean_dec_ref(x_46);
 x_123 = lean_box(0);
}
x_124 = 1;
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(1, 4, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_36);
lean_ctor_set(x_125, 2, x_37);
lean_ctor_set(x_125, 3, x_119);
lean_ctor_set_uint8(x_125, sizeof(void*)*4, x_124);
x_126 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_117);
lean_ctor_set(x_126, 3, x_118);
lean_ctor_set_uint8(x_126, sizeof(void*)*4, x_124);
x_127 = 0;
lean_ctor_set(x_1, 3, x_126);
lean_ctor_set(x_1, 2, x_121);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_125);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_127);
return x_1;
}
}
else
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_45, 3);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_45);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_45, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_45, 0);
lean_dec(x_131);
x_132 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_132);
x_133 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_133);
return x_1;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_45, 1);
x_135 = lean_ctor_get(x_45, 2);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_45);
x_136 = 0;
x_137 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_137, 0, x_46);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_135);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set_uint8(x_137, sizeof(void*)*4, x_136);
x_138 = 1;
lean_ctor_set(x_1, 3, x_137);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_138);
return x_1;
}
}
else
{
uint8_t x_139; 
x_139 = lean_ctor_get_uint8(x_128, sizeof(void*)*4);
if (x_139 == 0)
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_45);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_45, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_45, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_128);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; uint8_t x_149; 
x_144 = lean_ctor_get(x_128, 0);
x_145 = lean_ctor_get(x_128, 1);
x_146 = lean_ctor_get(x_128, 2);
x_147 = lean_ctor_get(x_128, 3);
x_148 = 1;
lean_inc(x_46);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 2, x_37);
lean_ctor_set(x_128, 1, x_36);
lean_ctor_set(x_128, 0, x_35);
x_149 = !lean_is_exclusive(x_46);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_46, 3);
lean_dec(x_150);
x_151 = lean_ctor_get(x_46, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_46, 1);
lean_dec(x_152);
x_153 = lean_ctor_get(x_46, 0);
lean_dec(x_153);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
lean_ctor_set(x_46, 3, x_147);
lean_ctor_set(x_46, 2, x_146);
lean_ctor_set(x_46, 1, x_145);
lean_ctor_set(x_46, 0, x_144);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_148);
x_154 = 0;
lean_ctor_set(x_45, 3, x_46);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_154);
return x_45;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_46);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
x_155 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_155, 0, x_144);
lean_ctor_set(x_155, 1, x_145);
lean_ctor_set(x_155, 2, x_146);
lean_ctor_set(x_155, 3, x_147);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_148);
x_156 = 0;
lean_ctor_set(x_45, 3, x_155);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_156);
return x_45;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_157 = lean_ctor_get(x_128, 0);
x_158 = lean_ctor_get(x_128, 1);
x_159 = lean_ctor_get(x_128, 2);
x_160 = lean_ctor_get(x_128, 3);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_128);
x_161 = 1;
lean_inc(x_46);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_36);
lean_ctor_set(x_162, 2, x_37);
lean_ctor_set(x_162, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_163 = x_46;
} else {
 lean_dec_ref(x_46);
 x_163 = lean_box(0);
}
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_161);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 4, 1);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_157);
lean_ctor_set(x_164, 1, x_158);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*4, x_161);
x_165 = 0;
lean_ctor_set(x_45, 3, x_164);
lean_ctor_set(x_45, 0, x_162);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_165);
return x_45;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_166 = lean_ctor_get(x_45, 1);
x_167 = lean_ctor_get(x_45, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_45);
x_168 = lean_ctor_get(x_128, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_128, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_128, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_128, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 x_172 = x_128;
} else {
 lean_dec_ref(x_128);
 x_172 = lean_box(0);
}
x_173 = 1;
lean_inc(x_46);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(1, 4, 1);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_35);
lean_ctor_set(x_174, 1, x_36);
lean_ctor_set(x_174, 2, x_37);
lean_ctor_set(x_174, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_175 = x_46;
} else {
 lean_dec_ref(x_46);
 x_175 = lean_box(0);
}
lean_ctor_set_uint8(x_174, sizeof(void*)*4, x_173);
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_168);
lean_ctor_set(x_176, 1, x_169);
lean_ctor_set(x_176, 2, x_170);
lean_ctor_set(x_176, 3, x_171);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_173);
x_177 = 0;
x_178 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_166);
lean_ctor_set(x_178, 2, x_167);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_45, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_45, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_46);
if (x_182 == 0)
{
uint8_t x_183; uint8_t x_184; 
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_139);
x_183 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_183);
x_184 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_184);
return x_1;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_185 = lean_ctor_get(x_46, 0);
x_186 = lean_ctor_get(x_46, 1);
x_187 = lean_ctor_get(x_46, 2);
x_188 = lean_ctor_get(x_46, 3);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_46);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_187);
lean_ctor_set(x_189, 3, x_188);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_139);
x_190 = 0;
lean_ctor_set(x_45, 0, x_189);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_190);
x_191 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; uint8_t x_202; 
x_192 = lean_ctor_get(x_45, 1);
x_193 = lean_ctor_get(x_45, 2);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_45);
x_194 = lean_ctor_get(x_46, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_46, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_46, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_46, 3);
lean_inc(x_197);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_198 = x_46;
} else {
 lean_dec_ref(x_46);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 4, 1);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*4, x_139);
x_200 = 0;
x_201 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_128);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = 1;
lean_ctor_set(x_1, 3, x_201);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_202);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_203; 
x_203 = l_Std_RBNode_isRed___rarg(x_35);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_35, x_2, x_3);
x_205 = 1;
lean_ctor_set(x_1, 0, x_204);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_205);
return x_1;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_35, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 3);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; uint8_t x_212; uint8_t x_213; 
x_210 = lean_ctor_get(x_206, 3);
lean_dec(x_210);
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
x_212 = 0;
lean_ctor_set(x_206, 0, x_208);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_212);
x_213 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_213);
return x_1;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
x_214 = lean_ctor_get(x_206, 1);
x_215 = lean_ctor_get(x_206, 2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_206);
x_216 = 0;
x_217 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_214);
lean_ctor_set(x_217, 2, x_215);
lean_ctor_set(x_217, 3, x_208);
lean_ctor_set_uint8(x_217, sizeof(void*)*4, x_216);
x_218 = 1;
lean_ctor_set(x_1, 0, x_217);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_218);
return x_1;
}
}
else
{
uint8_t x_219; 
x_219 = lean_ctor_get_uint8(x_208, sizeof(void*)*4);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_206);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_206, 1);
x_222 = lean_ctor_get(x_206, 2);
x_223 = lean_ctor_get(x_206, 3);
lean_dec(x_223);
x_224 = lean_ctor_get(x_206, 0);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_208);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_208, 0);
x_227 = lean_ctor_get(x_208, 1);
x_228 = lean_ctor_get(x_208, 2);
x_229 = lean_ctor_get(x_208, 3);
x_230 = 1;
lean_ctor_set(x_208, 3, x_226);
lean_ctor_set(x_208, 2, x_222);
lean_ctor_set(x_208, 1, x_221);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set_uint8(x_208, sizeof(void*)*4, x_230);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_229);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_230);
x_231 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_208);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_231);
return x_1;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; uint8_t x_238; 
x_232 = lean_ctor_get(x_208, 0);
x_233 = lean_ctor_get(x_208, 1);
x_234 = lean_ctor_get(x_208, 2);
x_235 = lean_ctor_get(x_208, 3);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_208);
x_236 = 1;
x_237 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_237, 0, x_207);
lean_ctor_set(x_237, 1, x_221);
lean_ctor_set(x_237, 2, x_222);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set_uint8(x_237, sizeof(void*)*4, x_236);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_235);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_236);
x_238 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_234);
lean_ctor_set(x_1, 1, x_233);
lean_ctor_set(x_1, 0, x_237);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_238);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_239 = lean_ctor_get(x_206, 1);
x_240 = lean_ctor_get(x_206, 2);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_206);
x_241 = lean_ctor_get(x_208, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_208, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_208, 2);
lean_inc(x_243);
x_244 = lean_ctor_get(x_208, 3);
lean_inc(x_244);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 lean_ctor_release(x_208, 2);
 lean_ctor_release(x_208, 3);
 x_245 = x_208;
} else {
 lean_dec_ref(x_208);
 x_245 = lean_box(0);
}
x_246 = 1;
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(1, 4, 1);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_207);
lean_ctor_set(x_247, 1, x_239);
lean_ctor_set(x_247, 2, x_240);
lean_ctor_set(x_247, 3, x_241);
lean_ctor_set_uint8(x_247, sizeof(void*)*4, x_246);
x_248 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_36);
lean_ctor_set(x_248, 2, x_37);
lean_ctor_set(x_248, 3, x_38);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_246);
x_249 = 0;
lean_ctor_set(x_1, 3, x_248);
lean_ctor_set(x_1, 2, x_243);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_247);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_249);
return x_1;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_206);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; uint8_t x_254; 
x_251 = lean_ctor_get(x_206, 3);
lean_dec(x_251);
x_252 = lean_ctor_get(x_206, 0);
lean_dec(x_252);
x_253 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_253);
x_254 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_254);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_206, 1);
x_256 = lean_ctor_get(x_206, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_206);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_207);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_208);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
x_259 = 1;
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
else
{
uint8_t x_260; 
x_260 = lean_ctor_get_uint8(x_207, sizeof(void*)*4);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = !lean_is_exclusive(x_206);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_262 = lean_ctor_get(x_206, 1);
x_263 = lean_ctor_get(x_206, 2);
x_264 = lean_ctor_get(x_206, 3);
x_265 = lean_ctor_get(x_206, 0);
lean_dec(x_265);
x_266 = !lean_is_exclusive(x_207);
if (x_266 == 0)
{
uint8_t x_267; uint8_t x_268; 
x_267 = 1;
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_267);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_267);
x_268 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_207);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_268);
return x_1;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_275; 
x_269 = lean_ctor_get(x_207, 0);
x_270 = lean_ctor_get(x_207, 1);
x_271 = lean_ctor_get(x_207, 2);
x_272 = lean_ctor_get(x_207, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_207);
x_273 = 1;
x_274 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_274, 0, x_269);
lean_ctor_set(x_274, 1, x_270);
lean_ctor_set(x_274, 2, x_271);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set_uint8(x_274, sizeof(void*)*4, x_273);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_273);
x_275 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_274);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_275);
return x_1;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_276 = lean_ctor_get(x_206, 1);
x_277 = lean_ctor_get(x_206, 2);
x_278 = lean_ctor_get(x_206, 3);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_206);
x_279 = lean_ctor_get(x_207, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_207, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_207, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_207, 3);
lean_inc(x_282);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_283 = x_207;
} else {
 lean_dec_ref(x_207);
 x_283 = lean_box(0);
}
x_284 = 1;
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(1, 4, 1);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_280);
lean_ctor_set(x_285, 2, x_281);
lean_ctor_set(x_285, 3, x_282);
lean_ctor_set_uint8(x_285, sizeof(void*)*4, x_284);
x_286 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_36);
lean_ctor_set(x_286, 2, x_37);
lean_ctor_set(x_286, 3, x_38);
lean_ctor_set_uint8(x_286, sizeof(void*)*4, x_284);
x_287 = 0;
lean_ctor_set(x_1, 3, x_286);
lean_ctor_set(x_1, 2, x_277);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_285);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_287);
return x_1;
}
}
else
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_206, 3);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_206);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_206, 3);
lean_dec(x_290);
x_291 = lean_ctor_get(x_206, 0);
lean_dec(x_291);
x_292 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_292);
x_293 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_293);
return x_1;
}
else
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_206, 1);
x_295 = lean_ctor_get(x_206, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_206);
x_296 = 0;
x_297 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_297, 0, x_207);
lean_ctor_set(x_297, 1, x_294);
lean_ctor_set(x_297, 2, x_295);
lean_ctor_set(x_297, 3, x_288);
lean_ctor_set_uint8(x_297, sizeof(void*)*4, x_296);
x_298 = 1;
lean_ctor_set(x_1, 0, x_297);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_298);
return x_1;
}
}
else
{
uint8_t x_299; 
x_299 = lean_ctor_get_uint8(x_288, sizeof(void*)*4);
if (x_299 == 0)
{
uint8_t x_300; 
lean_free_object(x_1);
x_300 = !lean_is_exclusive(x_206);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_206, 1);
x_302 = lean_ctor_get(x_206, 2);
x_303 = lean_ctor_get(x_206, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_206, 0);
lean_dec(x_304);
x_305 = !lean_is_exclusive(x_288);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; 
x_306 = lean_ctor_get(x_288, 0);
x_307 = lean_ctor_get(x_288, 1);
x_308 = lean_ctor_get(x_288, 2);
x_309 = lean_ctor_get(x_288, 3);
x_310 = 1;
lean_inc(x_207);
lean_ctor_set(x_288, 3, x_306);
lean_ctor_set(x_288, 2, x_302);
lean_ctor_set(x_288, 1, x_301);
lean_ctor_set(x_288, 0, x_207);
x_311 = !lean_is_exclusive(x_207);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_207, 3);
lean_dec(x_312);
x_313 = lean_ctor_get(x_207, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_207, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_207, 0);
lean_dec(x_315);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
lean_ctor_set(x_207, 3, x_38);
lean_ctor_set(x_207, 2, x_37);
lean_ctor_set(x_207, 1, x_36);
lean_ctor_set(x_207, 0, x_309);
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_310);
x_316 = 0;
lean_ctor_set(x_206, 3, x_207);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_316);
return x_206;
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_dec(x_207);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
x_317 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_36);
lean_ctor_set(x_317, 2, x_37);
lean_ctor_set(x_317, 3, x_38);
lean_ctor_set_uint8(x_317, sizeof(void*)*4, x_310);
x_318 = 0;
lean_ctor_set(x_206, 3, x_317);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_318);
return x_206;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_319 = lean_ctor_get(x_288, 0);
x_320 = lean_ctor_get(x_288, 1);
x_321 = lean_ctor_get(x_288, 2);
x_322 = lean_ctor_get(x_288, 3);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_288);
x_323 = 1;
lean_inc(x_207);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_207);
lean_ctor_set(x_324, 1, x_301);
lean_ctor_set(x_324, 2, x_302);
lean_ctor_set(x_324, 3, x_319);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_325 = x_207;
} else {
 lean_dec_ref(x_207);
 x_325 = lean_box(0);
}
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_323);
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 4, 1);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_322);
lean_ctor_set(x_326, 1, x_36);
lean_ctor_set(x_326, 2, x_37);
lean_ctor_set(x_326, 3, x_38);
lean_ctor_set_uint8(x_326, sizeof(void*)*4, x_323);
x_327 = 0;
lean_ctor_set(x_206, 3, x_326);
lean_ctor_set(x_206, 2, x_321);
lean_ctor_set(x_206, 1, x_320);
lean_ctor_set(x_206, 0, x_324);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_327);
return x_206;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; 
x_328 = lean_ctor_get(x_206, 1);
x_329 = lean_ctor_get(x_206, 2);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_206);
x_330 = lean_ctor_get(x_288, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_288, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_288, 2);
lean_inc(x_332);
x_333 = lean_ctor_get(x_288, 3);
lean_inc(x_333);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 lean_ctor_release(x_288, 2);
 lean_ctor_release(x_288, 3);
 x_334 = x_288;
} else {
 lean_dec_ref(x_288);
 x_334 = lean_box(0);
}
x_335 = 1;
lean_inc(x_207);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 4, 1);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_207);
lean_ctor_set(x_336, 1, x_328);
lean_ctor_set(x_336, 2, x_329);
lean_ctor_set(x_336, 3, x_330);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_337 = x_207;
} else {
 lean_dec_ref(x_207);
 x_337 = lean_box(0);
}
lean_ctor_set_uint8(x_336, sizeof(void*)*4, x_335);
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 4, 1);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_333);
lean_ctor_set(x_338, 1, x_36);
lean_ctor_set(x_338, 2, x_37);
lean_ctor_set(x_338, 3, x_38);
lean_ctor_set_uint8(x_338, sizeof(void*)*4, x_335);
x_339 = 0;
x_340 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_340, 0, x_336);
lean_ctor_set(x_340, 1, x_331);
lean_ctor_set(x_340, 2, x_332);
lean_ctor_set(x_340, 3, x_338);
lean_ctor_set_uint8(x_340, sizeof(void*)*4, x_339);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_206);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = lean_ctor_get(x_206, 3);
lean_dec(x_342);
x_343 = lean_ctor_get(x_206, 0);
lean_dec(x_343);
x_344 = !lean_is_exclusive(x_207);
if (x_344 == 0)
{
uint8_t x_345; uint8_t x_346; 
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_299);
x_345 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_345);
x_346 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_346);
return x_1;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; uint8_t x_353; 
x_347 = lean_ctor_get(x_207, 0);
x_348 = lean_ctor_get(x_207, 1);
x_349 = lean_ctor_get(x_207, 2);
x_350 = lean_ctor_get(x_207, 3);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_207);
x_351 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_348);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set(x_351, 3, x_350);
lean_ctor_set_uint8(x_351, sizeof(void*)*4, x_299);
x_352 = 0;
lean_ctor_set(x_206, 0, x_351);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_352);
x_353 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_353);
return x_1;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; uint8_t x_364; 
x_354 = lean_ctor_get(x_206, 1);
x_355 = lean_ctor_get(x_206, 2);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_206);
x_356 = lean_ctor_get(x_207, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_207, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_207, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_207, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_360 = x_207;
} else {
 lean_dec_ref(x_207);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 4, 1);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_357);
lean_ctor_set(x_361, 2, x_358);
lean_ctor_set(x_361, 3, x_359);
lean_ctor_set_uint8(x_361, sizeof(void*)*4, x_299);
x_362 = 0;
x_363 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_354);
lean_ctor_set(x_363, 2, x_355);
lean_ctor_set(x_363, 3, x_288);
lean_ctor_set_uint8(x_363, sizeof(void*)*4, x_362);
x_364 = 1;
lean_ctor_set(x_1, 0, x_363);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_364);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_365 = lean_ctor_get(x_1, 0);
x_366 = lean_ctor_get(x_1, 1);
x_367 = lean_ctor_get(x_1, 2);
x_368 = lean_ctor_get(x_1, 3);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_1);
x_369 = lean_nat_dec_lt(x_2, x_366);
if (x_369 == 0)
{
uint8_t x_370; 
x_370 = lean_nat_dec_lt(x_366, x_2);
if (x_370 == 0)
{
uint8_t x_371; lean_object* x_372; 
lean_dec(x_367);
lean_dec(x_366);
x_371 = 1;
x_372 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_2);
lean_ctor_set(x_372, 2, x_3);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_371);
return x_372;
}
else
{
uint8_t x_373; 
x_373 = l_Std_RBNode_isRed___rarg(x_368);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; 
x_374 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_368, x_2, x_3);
x_375 = 1;
x_376 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_367);
lean_ctor_set(x_376, 3, x_374);
lean_ctor_set_uint8(x_376, sizeof(void*)*4, x_375);
return x_376;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_368, x_2, x_3);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 3);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; uint8_t x_385; lean_object* x_386; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_377, 2);
lean_inc(x_381);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_382 = x_377;
} else {
 lean_dec_ref(x_377);
 x_382 = lean_box(0);
}
x_383 = 0;
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_379);
lean_ctor_set(x_384, 1, x_380);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_379);
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_383);
x_385 = 1;
x_386 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_386, 0, x_365);
lean_ctor_set(x_386, 1, x_366);
lean_ctor_set(x_386, 2, x_367);
lean_ctor_set(x_386, 3, x_384);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_385);
return x_386;
}
else
{
uint8_t x_387; 
x_387 = lean_ctor_get_uint8(x_379, sizeof(void*)*4);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; 
x_388 = lean_ctor_get(x_377, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_377, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_390 = x_377;
} else {
 lean_dec_ref(x_377);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_379, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_379, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 lean_ctor_release(x_379, 3);
 x_395 = x_379;
} else {
 lean_dec_ref(x_379);
 x_395 = lean_box(0);
}
x_396 = 1;
if (lean_is_scalar(x_395)) {
 x_397 = lean_alloc_ctor(1, 4, 1);
} else {
 x_397 = x_395;
}
lean_ctor_set(x_397, 0, x_365);
lean_ctor_set(x_397, 1, x_366);
lean_ctor_set(x_397, 2, x_367);
lean_ctor_set(x_397, 3, x_378);
lean_ctor_set_uint8(x_397, sizeof(void*)*4, x_396);
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_392);
lean_ctor_set(x_398, 2, x_393);
lean_ctor_set(x_398, 3, x_394);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_396);
x_399 = 0;
x_400 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_388);
lean_ctor_set(x_400, 2, x_389);
lean_ctor_set(x_400, 3, x_398);
lean_ctor_set_uint8(x_400, sizeof(void*)*4, x_399);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; 
x_401 = lean_ctor_get(x_377, 1);
lean_inc(x_401);
x_402 = lean_ctor_get(x_377, 2);
lean_inc(x_402);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_403 = x_377;
} else {
 lean_dec_ref(x_377);
 x_403 = lean_box(0);
}
x_404 = 0;
if (lean_is_scalar(x_403)) {
 x_405 = lean_alloc_ctor(1, 4, 1);
} else {
 x_405 = x_403;
}
lean_ctor_set(x_405, 0, x_378);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_405, 2, x_402);
lean_ctor_set(x_405, 3, x_379);
lean_ctor_set_uint8(x_405, sizeof(void*)*4, x_404);
x_406 = 1;
x_407 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_407, 0, x_365);
lean_ctor_set(x_407, 1, x_366);
lean_ctor_set(x_407, 2, x_367);
lean_ctor_set(x_407, 3, x_405);
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
return x_407;
}
}
}
else
{
uint8_t x_408; 
x_408 = lean_ctor_get_uint8(x_378, sizeof(void*)*4);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_409 = lean_ctor_get(x_377, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_377, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_377, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_412 = x_377;
} else {
 lean_dec_ref(x_377);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_378, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_378, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_378, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_378, 3);
lean_inc(x_416);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_417 = x_378;
} else {
 lean_dec_ref(x_378);
 x_417 = lean_box(0);
}
x_418 = 1;
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(1, 4, 1);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_365);
lean_ctor_set(x_419, 1, x_366);
lean_ctor_set(x_419, 2, x_367);
lean_ctor_set(x_419, 3, x_413);
lean_ctor_set_uint8(x_419, sizeof(void*)*4, x_418);
if (lean_is_scalar(x_412)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_412;
}
lean_ctor_set(x_420, 0, x_416);
lean_ctor_set(x_420, 1, x_409);
lean_ctor_set(x_420, 2, x_410);
lean_ctor_set(x_420, 3, x_411);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_418);
x_421 = 0;
x_422 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_414);
lean_ctor_set(x_422, 2, x_415);
lean_ctor_set(x_422, 3, x_420);
lean_ctor_set_uint8(x_422, sizeof(void*)*4, x_421);
return x_422;
}
else
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_377, 3);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; 
x_424 = lean_ctor_get(x_377, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_377, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_426 = x_377;
} else {
 lean_dec_ref(x_377);
 x_426 = lean_box(0);
}
x_427 = 0;
if (lean_is_scalar(x_426)) {
 x_428 = lean_alloc_ctor(1, 4, 1);
} else {
 x_428 = x_426;
}
lean_ctor_set(x_428, 0, x_378);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_425);
lean_ctor_set(x_428, 3, x_423);
lean_ctor_set_uint8(x_428, sizeof(void*)*4, x_427);
x_429 = 1;
x_430 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_430, 0, x_365);
lean_ctor_set(x_430, 1, x_366);
lean_ctor_set(x_430, 2, x_367);
lean_ctor_set(x_430, 3, x_428);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
return x_430;
}
else
{
uint8_t x_431; 
x_431 = lean_ctor_get_uint8(x_423, sizeof(void*)*4);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; uint8_t x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; lean_object* x_445; 
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_423, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_423, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_423, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_423, 3);
lean_inc(x_438);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_439 = x_423;
} else {
 lean_dec_ref(x_423);
 x_439 = lean_box(0);
}
x_440 = 1;
lean_inc(x_378);
if (lean_is_scalar(x_439)) {
 x_441 = lean_alloc_ctor(1, 4, 1);
} else {
 x_441 = x_439;
}
lean_ctor_set(x_441, 0, x_365);
lean_ctor_set(x_441, 1, x_366);
lean_ctor_set(x_441, 2, x_367);
lean_ctor_set(x_441, 3, x_378);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_442 = x_378;
} else {
 lean_dec_ref(x_378);
 x_442 = lean_box(0);
}
lean_ctor_set_uint8(x_441, sizeof(void*)*4, x_440);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_435);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_437);
lean_ctor_set(x_443, 3, x_438);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_440);
x_444 = 0;
if (lean_is_scalar(x_434)) {
 x_445 = lean_alloc_ctor(1, 4, 1);
} else {
 x_445 = x_434;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_432);
lean_ctor_set(x_445, 2, x_433);
lean_ctor_set(x_445, 3, x_443);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_444);
return x_445;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; uint8_t x_457; lean_object* x_458; 
x_446 = lean_ctor_get(x_377, 1);
lean_inc(x_446);
x_447 = lean_ctor_get(x_377, 2);
lean_inc(x_447);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_448 = x_377;
} else {
 lean_dec_ref(x_377);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_378, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_378, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = lean_ctor_get(x_378, 3);
lean_inc(x_452);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_453 = x_378;
} else {
 lean_dec_ref(x_378);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_449);
lean_ctor_set(x_454, 1, x_450);
lean_ctor_set(x_454, 2, x_451);
lean_ctor_set(x_454, 3, x_452);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_431);
x_455 = 0;
if (lean_is_scalar(x_448)) {
 x_456 = lean_alloc_ctor(1, 4, 1);
} else {
 x_456 = x_448;
}
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_446);
lean_ctor_set(x_456, 2, x_447);
lean_ctor_set(x_456, 3, x_423);
lean_ctor_set_uint8(x_456, sizeof(void*)*4, x_455);
x_457 = 1;
x_458 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_458, 0, x_365);
lean_ctor_set(x_458, 1, x_366);
lean_ctor_set(x_458, 2, x_367);
lean_ctor_set(x_458, 3, x_456);
lean_ctor_set_uint8(x_458, sizeof(void*)*4, x_457);
return x_458;
}
}
}
}
}
}
}
else
{
uint8_t x_459; 
x_459 = l_Std_RBNode_isRed___rarg(x_365);
if (x_459 == 0)
{
lean_object* x_460; uint8_t x_461; lean_object* x_462; 
x_460 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_365, x_2, x_3);
x_461 = 1;
x_462 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_366);
lean_ctor_set(x_462, 2, x_367);
lean_ctor_set(x_462, 3, x_368);
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_461);
return x_462;
}
else
{
lean_object* x_463; lean_object* x_464; 
x_463 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_365, x_2, x_3);
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; 
x_465 = lean_ctor_get(x_463, 3);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; 
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_463, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_468 = x_463;
} else {
 lean_dec_ref(x_463);
 x_468 = lean_box(0);
}
x_469 = 0;
if (lean_is_scalar(x_468)) {
 x_470 = lean_alloc_ctor(1, 4, 1);
} else {
 x_470 = x_468;
}
lean_ctor_set(x_470, 0, x_465);
lean_ctor_set(x_470, 1, x_466);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_465);
lean_ctor_set_uint8(x_470, sizeof(void*)*4, x_469);
x_471 = 1;
x_472 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_366);
lean_ctor_set(x_472, 2, x_367);
lean_ctor_set(x_472, 3, x_368);
lean_ctor_set_uint8(x_472, sizeof(void*)*4, x_471);
return x_472;
}
else
{
uint8_t x_473; 
x_473 = lean_ctor_get_uint8(x_465, sizeof(void*)*4);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; lean_object* x_486; 
x_474 = lean_ctor_get(x_463, 1);
lean_inc(x_474);
x_475 = lean_ctor_get(x_463, 2);
lean_inc(x_475);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_476 = x_463;
} else {
 lean_dec_ref(x_463);
 x_476 = lean_box(0);
}
x_477 = lean_ctor_get(x_465, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_465, 2);
lean_inc(x_479);
x_480 = lean_ctor_get(x_465, 3);
lean_inc(x_480);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 lean_ctor_release(x_465, 2);
 lean_ctor_release(x_465, 3);
 x_481 = x_465;
} else {
 lean_dec_ref(x_465);
 x_481 = lean_box(0);
}
x_482 = 1;
if (lean_is_scalar(x_481)) {
 x_483 = lean_alloc_ctor(1, 4, 1);
} else {
 x_483 = x_481;
}
lean_ctor_set(x_483, 0, x_464);
lean_ctor_set(x_483, 1, x_474);
lean_ctor_set(x_483, 2, x_475);
lean_ctor_set(x_483, 3, x_477);
lean_ctor_set_uint8(x_483, sizeof(void*)*4, x_482);
if (lean_is_scalar(x_476)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_476;
}
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_366);
lean_ctor_set(x_484, 2, x_367);
lean_ctor_set(x_484, 3, x_368);
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_482);
x_485 = 0;
x_486 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_478);
lean_ctor_set(x_486, 2, x_479);
lean_ctor_set(x_486, 3, x_484);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_485);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_487 = lean_ctor_get(x_463, 1);
lean_inc(x_487);
x_488 = lean_ctor_get(x_463, 2);
lean_inc(x_488);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_489 = x_463;
} else {
 lean_dec_ref(x_463);
 x_489 = lean_box(0);
}
x_490 = 0;
if (lean_is_scalar(x_489)) {
 x_491 = lean_alloc_ctor(1, 4, 1);
} else {
 x_491 = x_489;
}
lean_ctor_set(x_491, 0, x_464);
lean_ctor_set(x_491, 1, x_487);
lean_ctor_set(x_491, 2, x_488);
lean_ctor_set(x_491, 3, x_465);
lean_ctor_set_uint8(x_491, sizeof(void*)*4, x_490);
x_492 = 1;
x_493 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_366);
lean_ctor_set(x_493, 2, x_367);
lean_ctor_set(x_493, 3, x_368);
lean_ctor_set_uint8(x_493, sizeof(void*)*4, x_492);
return x_493;
}
}
}
else
{
uint8_t x_494; 
x_494 = lean_ctor_get_uint8(x_464, sizeof(void*)*4);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; uint8_t x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; 
x_495 = lean_ctor_get(x_463, 1);
lean_inc(x_495);
x_496 = lean_ctor_get(x_463, 2);
lean_inc(x_496);
x_497 = lean_ctor_get(x_463, 3);
lean_inc(x_497);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_498 = x_463;
} else {
 lean_dec_ref(x_463);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_464, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_464, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_464, 2);
lean_inc(x_501);
x_502 = lean_ctor_get(x_464, 3);
lean_inc(x_502);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_503 = x_464;
} else {
 lean_dec_ref(x_464);
 x_503 = lean_box(0);
}
x_504 = 1;
if (lean_is_scalar(x_503)) {
 x_505 = lean_alloc_ctor(1, 4, 1);
} else {
 x_505 = x_503;
}
lean_ctor_set(x_505, 0, x_499);
lean_ctor_set(x_505, 1, x_500);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_502);
lean_ctor_set_uint8(x_505, sizeof(void*)*4, x_504);
if (lean_is_scalar(x_498)) {
 x_506 = lean_alloc_ctor(1, 4, 1);
} else {
 x_506 = x_498;
}
lean_ctor_set(x_506, 0, x_497);
lean_ctor_set(x_506, 1, x_366);
lean_ctor_set(x_506, 2, x_367);
lean_ctor_set(x_506, 3, x_368);
lean_ctor_set_uint8(x_506, sizeof(void*)*4, x_504);
x_507 = 0;
x_508 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_508, 0, x_505);
lean_ctor_set(x_508, 1, x_495);
lean_ctor_set(x_508, 2, x_496);
lean_ctor_set(x_508, 3, x_506);
lean_ctor_set_uint8(x_508, sizeof(void*)*4, x_507);
return x_508;
}
else
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_463, 3);
lean_inc(x_509);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; uint8_t x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_463, 1);
lean_inc(x_510);
x_511 = lean_ctor_get(x_463, 2);
lean_inc(x_511);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_512 = x_463;
} else {
 lean_dec_ref(x_463);
 x_512 = lean_box(0);
}
x_513 = 0;
if (lean_is_scalar(x_512)) {
 x_514 = lean_alloc_ctor(1, 4, 1);
} else {
 x_514 = x_512;
}
lean_ctor_set(x_514, 0, x_464);
lean_ctor_set(x_514, 1, x_510);
lean_ctor_set(x_514, 2, x_511);
lean_ctor_set(x_514, 3, x_509);
lean_ctor_set_uint8(x_514, sizeof(void*)*4, x_513);
x_515 = 1;
x_516 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_366);
lean_ctor_set(x_516, 2, x_367);
lean_ctor_set(x_516, 3, x_368);
lean_ctor_set_uint8(x_516, sizeof(void*)*4, x_515);
return x_516;
}
else
{
uint8_t x_517; 
x_517 = lean_ctor_get_uint8(x_509, sizeof(void*)*4);
if (x_517 == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; lean_object* x_531; 
x_518 = lean_ctor_get(x_463, 1);
lean_inc(x_518);
x_519 = lean_ctor_get(x_463, 2);
lean_inc(x_519);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_520 = x_463;
} else {
 lean_dec_ref(x_463);
 x_520 = lean_box(0);
}
x_521 = lean_ctor_get(x_509, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_509, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_509, 2);
lean_inc(x_523);
x_524 = lean_ctor_get(x_509, 3);
lean_inc(x_524);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 lean_ctor_release(x_509, 2);
 lean_ctor_release(x_509, 3);
 x_525 = x_509;
} else {
 lean_dec_ref(x_509);
 x_525 = lean_box(0);
}
x_526 = 1;
lean_inc(x_464);
if (lean_is_scalar(x_525)) {
 x_527 = lean_alloc_ctor(1, 4, 1);
} else {
 x_527 = x_525;
}
lean_ctor_set(x_527, 0, x_464);
lean_ctor_set(x_527, 1, x_518);
lean_ctor_set(x_527, 2, x_519);
lean_ctor_set(x_527, 3, x_521);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_528 = x_464;
} else {
 lean_dec_ref(x_464);
 x_528 = lean_box(0);
}
lean_ctor_set_uint8(x_527, sizeof(void*)*4, x_526);
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 4, 1);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_524);
lean_ctor_set(x_529, 1, x_366);
lean_ctor_set(x_529, 2, x_367);
lean_ctor_set(x_529, 3, x_368);
lean_ctor_set_uint8(x_529, sizeof(void*)*4, x_526);
x_530 = 0;
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(1, 4, 1);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_522);
lean_ctor_set(x_531, 2, x_523);
lean_ctor_set(x_531, 3, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*4, x_530);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; uint8_t x_541; lean_object* x_542; uint8_t x_543; lean_object* x_544; 
x_532 = lean_ctor_get(x_463, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_463, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_534 = x_463;
} else {
 lean_dec_ref(x_463);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_464, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_464, 1);
lean_inc(x_536);
x_537 = lean_ctor_get(x_464, 2);
lean_inc(x_537);
x_538 = lean_ctor_get(x_464, 3);
lean_inc(x_538);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_539 = x_464;
} else {
 lean_dec_ref(x_464);
 x_539 = lean_box(0);
}
if (lean_is_scalar(x_539)) {
 x_540 = lean_alloc_ctor(1, 4, 1);
} else {
 x_540 = x_539;
}
lean_ctor_set(x_540, 0, x_535);
lean_ctor_set(x_540, 1, x_536);
lean_ctor_set(x_540, 2, x_537);
lean_ctor_set(x_540, 3, x_538);
lean_ctor_set_uint8(x_540, sizeof(void*)*4, x_517);
x_541 = 0;
if (lean_is_scalar(x_534)) {
 x_542 = lean_alloc_ctor(1, 4, 1);
} else {
 x_542 = x_534;
}
lean_ctor_set(x_542, 0, x_540);
lean_ctor_set(x_542, 1, x_532);
lean_ctor_set(x_542, 2, x_533);
lean_ctor_set(x_542, 3, x_509);
lean_ctor_set_uint8(x_542, sizeof(void*)*4, x_541);
x_543 = 1;
x_544 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_366);
lean_ctor_set(x_544, 2, x_367);
lean_ctor_set(x_544, 3, x_368);
lean_ctor_set_uint8(x_544, sizeof(void*)*4, x_543);
return x_544;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_IR_mkIndexSet___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___at_Lean_IR_mkIndexSet___spec__2(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_mkIndexSet(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = l_Std_RBNode_insert___at_Lean_IR_mkIndexSet___spec__1(x_2, x_1, x_3);
return x_4;
}
}
lean_object* l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = lean_nat_dec_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_10, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_15);
return x_1;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_12, x_2, x_3);
x_17 = 0;
lean_ctor_set(x_1, 3, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_nat_dec_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_nat_dec_lt(x_21, x_2);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_21);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set(x_27, 2, x_3);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_26);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_23, x_2, x_3);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_22);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
x_39 = lean_nat_dec_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = lean_nat_dec_lt(x_36, x_2);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_37);
lean_dec(x_36);
x_41 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_41);
return x_1;
}
else
{
uint8_t x_42; 
x_42 = l_Std_RBNode_isRed___rarg(x_38);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_38, x_2, x_3);
x_44 = 1;
lean_ctor_set(x_1, 3, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_44);
return x_1;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_38, x_2, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_45, 3);
lean_dec(x_49);
x_50 = lean_ctor_get(x_45, 0);
lean_dec(x_50);
x_51 = 0;
lean_ctor_set(x_45, 0, x_47);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_51);
x_52 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_45, 1);
x_54 = lean_ctor_get(x_45, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = 0;
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = 1;
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_57);
return x_1;
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_47, sizeof(void*)*4);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_45);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_45, 1);
x_61 = lean_ctor_get(x_45, 2);
x_62 = lean_ctor_get(x_45, 3);
lean_dec(x_62);
x_63 = lean_ctor_get(x_45, 0);
lean_dec(x_63);
x_64 = !lean_is_exclusive(x_47);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_47, 0);
x_66 = lean_ctor_get(x_47, 1);
x_67 = lean_ctor_get(x_47, 2);
x_68 = lean_ctor_get(x_47, 3);
x_69 = 1;
lean_ctor_set(x_47, 3, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 1, x_36);
lean_ctor_set(x_47, 0, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_69);
lean_ctor_set(x_45, 3, x_68);
lean_ctor_set(x_45, 2, x_67);
lean_ctor_set(x_45, 1, x_66);
lean_ctor_set(x_45, 0, x_65);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_69);
x_70 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_70);
return x_1;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_47, 0);
x_72 = lean_ctor_get(x_47, 1);
x_73 = lean_ctor_get(x_47, 2);
x_74 = lean_ctor_get(x_47, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_47);
x_75 = 1;
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_36);
lean_ctor_set(x_76, 2, x_37);
lean_ctor_set(x_76, 3, x_46);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_75);
lean_ctor_set(x_45, 3, x_74);
lean_ctor_set(x_45, 2, x_73);
lean_ctor_set(x_45, 1, x_72);
lean_ctor_set(x_45, 0, x_71);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_75);
x_77 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_76);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_77);
return x_1;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_78 = lean_ctor_get(x_45, 1);
x_79 = lean_ctor_get(x_45, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_45);
x_80 = lean_ctor_get(x_47, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_47, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_47, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_47, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 x_84 = x_47;
} else {
 lean_dec_ref(x_47);
 x_84 = lean_box(0);
}
x_85 = 1;
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(1, 4, 1);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_35);
lean_ctor_set(x_86, 1, x_36);
lean_ctor_set(x_86, 2, x_37);
lean_ctor_set(x_86, 3, x_46);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
x_87 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_87, 0, x_80);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_82);
lean_ctor_set(x_87, 3, x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_85);
x_88 = 0;
lean_ctor_set(x_1, 3, x_87);
lean_ctor_set(x_1, 2, x_79);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_86);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_88);
return x_1;
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_45);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_45, 3);
lean_dec(x_90);
x_91 = lean_ctor_get(x_45, 0);
lean_dec(x_91);
x_92 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_92);
x_93 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_93);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_45, 1);
x_95 = lean_ctor_get(x_45, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_45);
x_96 = 0;
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_46);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_47);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = 1;
lean_ctor_set(x_1, 3, x_97);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_98);
return x_1;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = lean_ctor_get_uint8(x_46, sizeof(void*)*4);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_45);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_45, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_46);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_46, 0);
x_104 = lean_ctor_get(x_46, 1);
x_105 = lean_ctor_get(x_46, 2);
x_106 = lean_ctor_get(x_46, 3);
x_107 = 1;
lean_ctor_set(x_46, 3, x_103);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_107);
lean_ctor_set(x_45, 0, x_106);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_107);
x_108 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
x_111 = lean_ctor_get(x_46, 2);
x_112 = lean_ctor_get(x_46, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_113 = 1;
x_114 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_114, 0, x_35);
lean_ctor_set(x_114, 1, x_36);
lean_ctor_set(x_114, 2, x_37);
lean_ctor_set(x_114, 3, x_109);
lean_ctor_set_uint8(x_114, sizeof(void*)*4, x_113);
lean_ctor_set(x_45, 0, x_112);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_113);
x_115 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_111);
lean_ctor_set(x_1, 1, x_110);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_115);
return x_1;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_116 = lean_ctor_get(x_45, 1);
x_117 = lean_ctor_get(x_45, 2);
x_118 = lean_ctor_get(x_45, 3);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_45);
x_119 = lean_ctor_get(x_46, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_46, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_46, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_46, 3);
lean_inc(x_122);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_123 = x_46;
} else {
 lean_dec_ref(x_46);
 x_123 = lean_box(0);
}
x_124 = 1;
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(1, 4, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_36);
lean_ctor_set(x_125, 2, x_37);
lean_ctor_set(x_125, 3, x_119);
lean_ctor_set_uint8(x_125, sizeof(void*)*4, x_124);
x_126 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_117);
lean_ctor_set(x_126, 3, x_118);
lean_ctor_set_uint8(x_126, sizeof(void*)*4, x_124);
x_127 = 0;
lean_ctor_set(x_1, 3, x_126);
lean_ctor_set(x_1, 2, x_121);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_125);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_127);
return x_1;
}
}
else
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_45, 3);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_45);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_45, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_45, 0);
lean_dec(x_131);
x_132 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_132);
x_133 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_133);
return x_1;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_45, 1);
x_135 = lean_ctor_get(x_45, 2);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_45);
x_136 = 0;
x_137 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_137, 0, x_46);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_135);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set_uint8(x_137, sizeof(void*)*4, x_136);
x_138 = 1;
lean_ctor_set(x_1, 3, x_137);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_138);
return x_1;
}
}
else
{
uint8_t x_139; 
x_139 = lean_ctor_get_uint8(x_128, sizeof(void*)*4);
if (x_139 == 0)
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_45);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_45, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_45, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_128);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; uint8_t x_149; 
x_144 = lean_ctor_get(x_128, 0);
x_145 = lean_ctor_get(x_128, 1);
x_146 = lean_ctor_get(x_128, 2);
x_147 = lean_ctor_get(x_128, 3);
x_148 = 1;
lean_inc(x_46);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 2, x_37);
lean_ctor_set(x_128, 1, x_36);
lean_ctor_set(x_128, 0, x_35);
x_149 = !lean_is_exclusive(x_46);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_46, 3);
lean_dec(x_150);
x_151 = lean_ctor_get(x_46, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_46, 1);
lean_dec(x_152);
x_153 = lean_ctor_get(x_46, 0);
lean_dec(x_153);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
lean_ctor_set(x_46, 3, x_147);
lean_ctor_set(x_46, 2, x_146);
lean_ctor_set(x_46, 1, x_145);
lean_ctor_set(x_46, 0, x_144);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_148);
x_154 = 0;
lean_ctor_set(x_45, 3, x_46);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_154);
return x_45;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_46);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
x_155 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_155, 0, x_144);
lean_ctor_set(x_155, 1, x_145);
lean_ctor_set(x_155, 2, x_146);
lean_ctor_set(x_155, 3, x_147);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_148);
x_156 = 0;
lean_ctor_set(x_45, 3, x_155);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_156);
return x_45;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_157 = lean_ctor_get(x_128, 0);
x_158 = lean_ctor_get(x_128, 1);
x_159 = lean_ctor_get(x_128, 2);
x_160 = lean_ctor_get(x_128, 3);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_128);
x_161 = 1;
lean_inc(x_46);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_36);
lean_ctor_set(x_162, 2, x_37);
lean_ctor_set(x_162, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_163 = x_46;
} else {
 lean_dec_ref(x_46);
 x_163 = lean_box(0);
}
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_161);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 4, 1);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_157);
lean_ctor_set(x_164, 1, x_158);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*4, x_161);
x_165 = 0;
lean_ctor_set(x_45, 3, x_164);
lean_ctor_set(x_45, 0, x_162);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_165);
return x_45;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_166 = lean_ctor_get(x_45, 1);
x_167 = lean_ctor_get(x_45, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_45);
x_168 = lean_ctor_get(x_128, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_128, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_128, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_128, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 x_172 = x_128;
} else {
 lean_dec_ref(x_128);
 x_172 = lean_box(0);
}
x_173 = 1;
lean_inc(x_46);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(1, 4, 1);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_35);
lean_ctor_set(x_174, 1, x_36);
lean_ctor_set(x_174, 2, x_37);
lean_ctor_set(x_174, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_175 = x_46;
} else {
 lean_dec_ref(x_46);
 x_175 = lean_box(0);
}
lean_ctor_set_uint8(x_174, sizeof(void*)*4, x_173);
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_168);
lean_ctor_set(x_176, 1, x_169);
lean_ctor_set(x_176, 2, x_170);
lean_ctor_set(x_176, 3, x_171);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_173);
x_177 = 0;
x_178 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_166);
lean_ctor_set(x_178, 2, x_167);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_45, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_45, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_46);
if (x_182 == 0)
{
uint8_t x_183; uint8_t x_184; 
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_139);
x_183 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_183);
x_184 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_184);
return x_1;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_185 = lean_ctor_get(x_46, 0);
x_186 = lean_ctor_get(x_46, 1);
x_187 = lean_ctor_get(x_46, 2);
x_188 = lean_ctor_get(x_46, 3);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_46);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_187);
lean_ctor_set(x_189, 3, x_188);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_139);
x_190 = 0;
lean_ctor_set(x_45, 0, x_189);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_190);
x_191 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; uint8_t x_202; 
x_192 = lean_ctor_get(x_45, 1);
x_193 = lean_ctor_get(x_45, 2);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_45);
x_194 = lean_ctor_get(x_46, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_46, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_46, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_46, 3);
lean_inc(x_197);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_198 = x_46;
} else {
 lean_dec_ref(x_46);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 4, 1);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*4, x_139);
x_200 = 0;
x_201 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_128);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = 1;
lean_ctor_set(x_1, 3, x_201);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_202);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_203; 
x_203 = l_Std_RBNode_isRed___rarg(x_35);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_35, x_2, x_3);
x_205 = 1;
lean_ctor_set(x_1, 0, x_204);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_205);
return x_1;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_35, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 3);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; uint8_t x_212; uint8_t x_213; 
x_210 = lean_ctor_get(x_206, 3);
lean_dec(x_210);
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
x_212 = 0;
lean_ctor_set(x_206, 0, x_208);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_212);
x_213 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_213);
return x_1;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
x_214 = lean_ctor_get(x_206, 1);
x_215 = lean_ctor_get(x_206, 2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_206);
x_216 = 0;
x_217 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_214);
lean_ctor_set(x_217, 2, x_215);
lean_ctor_set(x_217, 3, x_208);
lean_ctor_set_uint8(x_217, sizeof(void*)*4, x_216);
x_218 = 1;
lean_ctor_set(x_1, 0, x_217);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_218);
return x_1;
}
}
else
{
uint8_t x_219; 
x_219 = lean_ctor_get_uint8(x_208, sizeof(void*)*4);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_206);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_206, 1);
x_222 = lean_ctor_get(x_206, 2);
x_223 = lean_ctor_get(x_206, 3);
lean_dec(x_223);
x_224 = lean_ctor_get(x_206, 0);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_208);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_208, 0);
x_227 = lean_ctor_get(x_208, 1);
x_228 = lean_ctor_get(x_208, 2);
x_229 = lean_ctor_get(x_208, 3);
x_230 = 1;
lean_ctor_set(x_208, 3, x_226);
lean_ctor_set(x_208, 2, x_222);
lean_ctor_set(x_208, 1, x_221);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set_uint8(x_208, sizeof(void*)*4, x_230);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_229);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_230);
x_231 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_208);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_231);
return x_1;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; uint8_t x_238; 
x_232 = lean_ctor_get(x_208, 0);
x_233 = lean_ctor_get(x_208, 1);
x_234 = lean_ctor_get(x_208, 2);
x_235 = lean_ctor_get(x_208, 3);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_208);
x_236 = 1;
x_237 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_237, 0, x_207);
lean_ctor_set(x_237, 1, x_221);
lean_ctor_set(x_237, 2, x_222);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set_uint8(x_237, sizeof(void*)*4, x_236);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_235);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_236);
x_238 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_234);
lean_ctor_set(x_1, 1, x_233);
lean_ctor_set(x_1, 0, x_237);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_238);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_239 = lean_ctor_get(x_206, 1);
x_240 = lean_ctor_get(x_206, 2);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_206);
x_241 = lean_ctor_get(x_208, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_208, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_208, 2);
lean_inc(x_243);
x_244 = lean_ctor_get(x_208, 3);
lean_inc(x_244);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 lean_ctor_release(x_208, 2);
 lean_ctor_release(x_208, 3);
 x_245 = x_208;
} else {
 lean_dec_ref(x_208);
 x_245 = lean_box(0);
}
x_246 = 1;
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(1, 4, 1);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_207);
lean_ctor_set(x_247, 1, x_239);
lean_ctor_set(x_247, 2, x_240);
lean_ctor_set(x_247, 3, x_241);
lean_ctor_set_uint8(x_247, sizeof(void*)*4, x_246);
x_248 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_36);
lean_ctor_set(x_248, 2, x_37);
lean_ctor_set(x_248, 3, x_38);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_246);
x_249 = 0;
lean_ctor_set(x_1, 3, x_248);
lean_ctor_set(x_1, 2, x_243);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_247);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_249);
return x_1;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_206);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; uint8_t x_254; 
x_251 = lean_ctor_get(x_206, 3);
lean_dec(x_251);
x_252 = lean_ctor_get(x_206, 0);
lean_dec(x_252);
x_253 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_253);
x_254 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_254);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_206, 1);
x_256 = lean_ctor_get(x_206, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_206);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_207);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_208);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
x_259 = 1;
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
else
{
uint8_t x_260; 
x_260 = lean_ctor_get_uint8(x_207, sizeof(void*)*4);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = !lean_is_exclusive(x_206);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_262 = lean_ctor_get(x_206, 1);
x_263 = lean_ctor_get(x_206, 2);
x_264 = lean_ctor_get(x_206, 3);
x_265 = lean_ctor_get(x_206, 0);
lean_dec(x_265);
x_266 = !lean_is_exclusive(x_207);
if (x_266 == 0)
{
uint8_t x_267; uint8_t x_268; 
x_267 = 1;
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_267);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_267);
x_268 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_207);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_268);
return x_1;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_275; 
x_269 = lean_ctor_get(x_207, 0);
x_270 = lean_ctor_get(x_207, 1);
x_271 = lean_ctor_get(x_207, 2);
x_272 = lean_ctor_get(x_207, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_207);
x_273 = 1;
x_274 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_274, 0, x_269);
lean_ctor_set(x_274, 1, x_270);
lean_ctor_set(x_274, 2, x_271);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set_uint8(x_274, sizeof(void*)*4, x_273);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_273);
x_275 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_274);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_275);
return x_1;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_276 = lean_ctor_get(x_206, 1);
x_277 = lean_ctor_get(x_206, 2);
x_278 = lean_ctor_get(x_206, 3);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_206);
x_279 = lean_ctor_get(x_207, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_207, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_207, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_207, 3);
lean_inc(x_282);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_283 = x_207;
} else {
 lean_dec_ref(x_207);
 x_283 = lean_box(0);
}
x_284 = 1;
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(1, 4, 1);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_280);
lean_ctor_set(x_285, 2, x_281);
lean_ctor_set(x_285, 3, x_282);
lean_ctor_set_uint8(x_285, sizeof(void*)*4, x_284);
x_286 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_36);
lean_ctor_set(x_286, 2, x_37);
lean_ctor_set(x_286, 3, x_38);
lean_ctor_set_uint8(x_286, sizeof(void*)*4, x_284);
x_287 = 0;
lean_ctor_set(x_1, 3, x_286);
lean_ctor_set(x_1, 2, x_277);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_285);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_287);
return x_1;
}
}
else
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_206, 3);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_206);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_206, 3);
lean_dec(x_290);
x_291 = lean_ctor_get(x_206, 0);
lean_dec(x_291);
x_292 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_292);
x_293 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_293);
return x_1;
}
else
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_206, 1);
x_295 = lean_ctor_get(x_206, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_206);
x_296 = 0;
x_297 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_297, 0, x_207);
lean_ctor_set(x_297, 1, x_294);
lean_ctor_set(x_297, 2, x_295);
lean_ctor_set(x_297, 3, x_288);
lean_ctor_set_uint8(x_297, sizeof(void*)*4, x_296);
x_298 = 1;
lean_ctor_set(x_1, 0, x_297);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_298);
return x_1;
}
}
else
{
uint8_t x_299; 
x_299 = lean_ctor_get_uint8(x_288, sizeof(void*)*4);
if (x_299 == 0)
{
uint8_t x_300; 
lean_free_object(x_1);
x_300 = !lean_is_exclusive(x_206);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_206, 1);
x_302 = lean_ctor_get(x_206, 2);
x_303 = lean_ctor_get(x_206, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_206, 0);
lean_dec(x_304);
x_305 = !lean_is_exclusive(x_288);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; 
x_306 = lean_ctor_get(x_288, 0);
x_307 = lean_ctor_get(x_288, 1);
x_308 = lean_ctor_get(x_288, 2);
x_309 = lean_ctor_get(x_288, 3);
x_310 = 1;
lean_inc(x_207);
lean_ctor_set(x_288, 3, x_306);
lean_ctor_set(x_288, 2, x_302);
lean_ctor_set(x_288, 1, x_301);
lean_ctor_set(x_288, 0, x_207);
x_311 = !lean_is_exclusive(x_207);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_207, 3);
lean_dec(x_312);
x_313 = lean_ctor_get(x_207, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_207, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_207, 0);
lean_dec(x_315);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
lean_ctor_set(x_207, 3, x_38);
lean_ctor_set(x_207, 2, x_37);
lean_ctor_set(x_207, 1, x_36);
lean_ctor_set(x_207, 0, x_309);
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_310);
x_316 = 0;
lean_ctor_set(x_206, 3, x_207);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_316);
return x_206;
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_dec(x_207);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
x_317 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_36);
lean_ctor_set(x_317, 2, x_37);
lean_ctor_set(x_317, 3, x_38);
lean_ctor_set_uint8(x_317, sizeof(void*)*4, x_310);
x_318 = 0;
lean_ctor_set(x_206, 3, x_317);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_318);
return x_206;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_319 = lean_ctor_get(x_288, 0);
x_320 = lean_ctor_get(x_288, 1);
x_321 = lean_ctor_get(x_288, 2);
x_322 = lean_ctor_get(x_288, 3);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_288);
x_323 = 1;
lean_inc(x_207);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_207);
lean_ctor_set(x_324, 1, x_301);
lean_ctor_set(x_324, 2, x_302);
lean_ctor_set(x_324, 3, x_319);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_325 = x_207;
} else {
 lean_dec_ref(x_207);
 x_325 = lean_box(0);
}
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_323);
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 4, 1);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_322);
lean_ctor_set(x_326, 1, x_36);
lean_ctor_set(x_326, 2, x_37);
lean_ctor_set(x_326, 3, x_38);
lean_ctor_set_uint8(x_326, sizeof(void*)*4, x_323);
x_327 = 0;
lean_ctor_set(x_206, 3, x_326);
lean_ctor_set(x_206, 2, x_321);
lean_ctor_set(x_206, 1, x_320);
lean_ctor_set(x_206, 0, x_324);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_327);
return x_206;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; 
x_328 = lean_ctor_get(x_206, 1);
x_329 = lean_ctor_get(x_206, 2);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_206);
x_330 = lean_ctor_get(x_288, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_288, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_288, 2);
lean_inc(x_332);
x_333 = lean_ctor_get(x_288, 3);
lean_inc(x_333);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 lean_ctor_release(x_288, 2);
 lean_ctor_release(x_288, 3);
 x_334 = x_288;
} else {
 lean_dec_ref(x_288);
 x_334 = lean_box(0);
}
x_335 = 1;
lean_inc(x_207);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 4, 1);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_207);
lean_ctor_set(x_336, 1, x_328);
lean_ctor_set(x_336, 2, x_329);
lean_ctor_set(x_336, 3, x_330);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_337 = x_207;
} else {
 lean_dec_ref(x_207);
 x_337 = lean_box(0);
}
lean_ctor_set_uint8(x_336, sizeof(void*)*4, x_335);
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 4, 1);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_333);
lean_ctor_set(x_338, 1, x_36);
lean_ctor_set(x_338, 2, x_37);
lean_ctor_set(x_338, 3, x_38);
lean_ctor_set_uint8(x_338, sizeof(void*)*4, x_335);
x_339 = 0;
x_340 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_340, 0, x_336);
lean_ctor_set(x_340, 1, x_331);
lean_ctor_set(x_340, 2, x_332);
lean_ctor_set(x_340, 3, x_338);
lean_ctor_set_uint8(x_340, sizeof(void*)*4, x_339);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_206);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = lean_ctor_get(x_206, 3);
lean_dec(x_342);
x_343 = lean_ctor_get(x_206, 0);
lean_dec(x_343);
x_344 = !lean_is_exclusive(x_207);
if (x_344 == 0)
{
uint8_t x_345; uint8_t x_346; 
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_299);
x_345 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_345);
x_346 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_346);
return x_1;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; uint8_t x_353; 
x_347 = lean_ctor_get(x_207, 0);
x_348 = lean_ctor_get(x_207, 1);
x_349 = lean_ctor_get(x_207, 2);
x_350 = lean_ctor_get(x_207, 3);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_207);
x_351 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_348);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set(x_351, 3, x_350);
lean_ctor_set_uint8(x_351, sizeof(void*)*4, x_299);
x_352 = 0;
lean_ctor_set(x_206, 0, x_351);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_352);
x_353 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_353);
return x_1;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; uint8_t x_364; 
x_354 = lean_ctor_get(x_206, 1);
x_355 = lean_ctor_get(x_206, 2);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_206);
x_356 = lean_ctor_get(x_207, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_207, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_207, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_207, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_360 = x_207;
} else {
 lean_dec_ref(x_207);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 4, 1);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_357);
lean_ctor_set(x_361, 2, x_358);
lean_ctor_set(x_361, 3, x_359);
lean_ctor_set_uint8(x_361, sizeof(void*)*4, x_299);
x_362 = 0;
x_363 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_354);
lean_ctor_set(x_363, 2, x_355);
lean_ctor_set(x_363, 3, x_288);
lean_ctor_set_uint8(x_363, sizeof(void*)*4, x_362);
x_364 = 1;
lean_ctor_set(x_1, 0, x_363);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_364);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_365 = lean_ctor_get(x_1, 0);
x_366 = lean_ctor_get(x_1, 1);
x_367 = lean_ctor_get(x_1, 2);
x_368 = lean_ctor_get(x_1, 3);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_1);
x_369 = lean_nat_dec_lt(x_2, x_366);
if (x_369 == 0)
{
uint8_t x_370; 
x_370 = lean_nat_dec_lt(x_366, x_2);
if (x_370 == 0)
{
uint8_t x_371; lean_object* x_372; 
lean_dec(x_367);
lean_dec(x_366);
x_371 = 1;
x_372 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_2);
lean_ctor_set(x_372, 2, x_3);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_371);
return x_372;
}
else
{
uint8_t x_373; 
x_373 = l_Std_RBNode_isRed___rarg(x_368);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; 
x_374 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_368, x_2, x_3);
x_375 = 1;
x_376 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_367);
lean_ctor_set(x_376, 3, x_374);
lean_ctor_set_uint8(x_376, sizeof(void*)*4, x_375);
return x_376;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_368, x_2, x_3);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 3);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; uint8_t x_385; lean_object* x_386; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_377, 2);
lean_inc(x_381);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_382 = x_377;
} else {
 lean_dec_ref(x_377);
 x_382 = lean_box(0);
}
x_383 = 0;
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_379);
lean_ctor_set(x_384, 1, x_380);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_379);
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_383);
x_385 = 1;
x_386 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_386, 0, x_365);
lean_ctor_set(x_386, 1, x_366);
lean_ctor_set(x_386, 2, x_367);
lean_ctor_set(x_386, 3, x_384);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_385);
return x_386;
}
else
{
uint8_t x_387; 
x_387 = lean_ctor_get_uint8(x_379, sizeof(void*)*4);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; 
x_388 = lean_ctor_get(x_377, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_377, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_390 = x_377;
} else {
 lean_dec_ref(x_377);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_379, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_379, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 lean_ctor_release(x_379, 3);
 x_395 = x_379;
} else {
 lean_dec_ref(x_379);
 x_395 = lean_box(0);
}
x_396 = 1;
if (lean_is_scalar(x_395)) {
 x_397 = lean_alloc_ctor(1, 4, 1);
} else {
 x_397 = x_395;
}
lean_ctor_set(x_397, 0, x_365);
lean_ctor_set(x_397, 1, x_366);
lean_ctor_set(x_397, 2, x_367);
lean_ctor_set(x_397, 3, x_378);
lean_ctor_set_uint8(x_397, sizeof(void*)*4, x_396);
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_392);
lean_ctor_set(x_398, 2, x_393);
lean_ctor_set(x_398, 3, x_394);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_396);
x_399 = 0;
x_400 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_388);
lean_ctor_set(x_400, 2, x_389);
lean_ctor_set(x_400, 3, x_398);
lean_ctor_set_uint8(x_400, sizeof(void*)*4, x_399);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; 
x_401 = lean_ctor_get(x_377, 1);
lean_inc(x_401);
x_402 = lean_ctor_get(x_377, 2);
lean_inc(x_402);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_403 = x_377;
} else {
 lean_dec_ref(x_377);
 x_403 = lean_box(0);
}
x_404 = 0;
if (lean_is_scalar(x_403)) {
 x_405 = lean_alloc_ctor(1, 4, 1);
} else {
 x_405 = x_403;
}
lean_ctor_set(x_405, 0, x_378);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_405, 2, x_402);
lean_ctor_set(x_405, 3, x_379);
lean_ctor_set_uint8(x_405, sizeof(void*)*4, x_404);
x_406 = 1;
x_407 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_407, 0, x_365);
lean_ctor_set(x_407, 1, x_366);
lean_ctor_set(x_407, 2, x_367);
lean_ctor_set(x_407, 3, x_405);
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
return x_407;
}
}
}
else
{
uint8_t x_408; 
x_408 = lean_ctor_get_uint8(x_378, sizeof(void*)*4);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_409 = lean_ctor_get(x_377, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_377, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_377, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_412 = x_377;
} else {
 lean_dec_ref(x_377);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_378, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_378, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_378, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_378, 3);
lean_inc(x_416);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_417 = x_378;
} else {
 lean_dec_ref(x_378);
 x_417 = lean_box(0);
}
x_418 = 1;
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(1, 4, 1);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_365);
lean_ctor_set(x_419, 1, x_366);
lean_ctor_set(x_419, 2, x_367);
lean_ctor_set(x_419, 3, x_413);
lean_ctor_set_uint8(x_419, sizeof(void*)*4, x_418);
if (lean_is_scalar(x_412)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_412;
}
lean_ctor_set(x_420, 0, x_416);
lean_ctor_set(x_420, 1, x_409);
lean_ctor_set(x_420, 2, x_410);
lean_ctor_set(x_420, 3, x_411);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_418);
x_421 = 0;
x_422 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_414);
lean_ctor_set(x_422, 2, x_415);
lean_ctor_set(x_422, 3, x_420);
lean_ctor_set_uint8(x_422, sizeof(void*)*4, x_421);
return x_422;
}
else
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_377, 3);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; 
x_424 = lean_ctor_get(x_377, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_377, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_426 = x_377;
} else {
 lean_dec_ref(x_377);
 x_426 = lean_box(0);
}
x_427 = 0;
if (lean_is_scalar(x_426)) {
 x_428 = lean_alloc_ctor(1, 4, 1);
} else {
 x_428 = x_426;
}
lean_ctor_set(x_428, 0, x_378);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_425);
lean_ctor_set(x_428, 3, x_423);
lean_ctor_set_uint8(x_428, sizeof(void*)*4, x_427);
x_429 = 1;
x_430 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_430, 0, x_365);
lean_ctor_set(x_430, 1, x_366);
lean_ctor_set(x_430, 2, x_367);
lean_ctor_set(x_430, 3, x_428);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
return x_430;
}
else
{
uint8_t x_431; 
x_431 = lean_ctor_get_uint8(x_423, sizeof(void*)*4);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; uint8_t x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; lean_object* x_445; 
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_423, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_423, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_423, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_423, 3);
lean_inc(x_438);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_439 = x_423;
} else {
 lean_dec_ref(x_423);
 x_439 = lean_box(0);
}
x_440 = 1;
lean_inc(x_378);
if (lean_is_scalar(x_439)) {
 x_441 = lean_alloc_ctor(1, 4, 1);
} else {
 x_441 = x_439;
}
lean_ctor_set(x_441, 0, x_365);
lean_ctor_set(x_441, 1, x_366);
lean_ctor_set(x_441, 2, x_367);
lean_ctor_set(x_441, 3, x_378);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_442 = x_378;
} else {
 lean_dec_ref(x_378);
 x_442 = lean_box(0);
}
lean_ctor_set_uint8(x_441, sizeof(void*)*4, x_440);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_435);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_437);
lean_ctor_set(x_443, 3, x_438);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_440);
x_444 = 0;
if (lean_is_scalar(x_434)) {
 x_445 = lean_alloc_ctor(1, 4, 1);
} else {
 x_445 = x_434;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_432);
lean_ctor_set(x_445, 2, x_433);
lean_ctor_set(x_445, 3, x_443);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_444);
return x_445;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; uint8_t x_457; lean_object* x_458; 
x_446 = lean_ctor_get(x_377, 1);
lean_inc(x_446);
x_447 = lean_ctor_get(x_377, 2);
lean_inc(x_447);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_448 = x_377;
} else {
 lean_dec_ref(x_377);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_378, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_378, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = lean_ctor_get(x_378, 3);
lean_inc(x_452);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_453 = x_378;
} else {
 lean_dec_ref(x_378);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_449);
lean_ctor_set(x_454, 1, x_450);
lean_ctor_set(x_454, 2, x_451);
lean_ctor_set(x_454, 3, x_452);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_431);
x_455 = 0;
if (lean_is_scalar(x_448)) {
 x_456 = lean_alloc_ctor(1, 4, 1);
} else {
 x_456 = x_448;
}
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_446);
lean_ctor_set(x_456, 2, x_447);
lean_ctor_set(x_456, 3, x_423);
lean_ctor_set_uint8(x_456, sizeof(void*)*4, x_455);
x_457 = 1;
x_458 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_458, 0, x_365);
lean_ctor_set(x_458, 1, x_366);
lean_ctor_set(x_458, 2, x_367);
lean_ctor_set(x_458, 3, x_456);
lean_ctor_set_uint8(x_458, sizeof(void*)*4, x_457);
return x_458;
}
}
}
}
}
}
}
else
{
uint8_t x_459; 
x_459 = l_Std_RBNode_isRed___rarg(x_365);
if (x_459 == 0)
{
lean_object* x_460; uint8_t x_461; lean_object* x_462; 
x_460 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_365, x_2, x_3);
x_461 = 1;
x_462 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_366);
lean_ctor_set(x_462, 2, x_367);
lean_ctor_set(x_462, 3, x_368);
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_461);
return x_462;
}
else
{
lean_object* x_463; lean_object* x_464; 
x_463 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_365, x_2, x_3);
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; 
x_465 = lean_ctor_get(x_463, 3);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; 
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_463, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_468 = x_463;
} else {
 lean_dec_ref(x_463);
 x_468 = lean_box(0);
}
x_469 = 0;
if (lean_is_scalar(x_468)) {
 x_470 = lean_alloc_ctor(1, 4, 1);
} else {
 x_470 = x_468;
}
lean_ctor_set(x_470, 0, x_465);
lean_ctor_set(x_470, 1, x_466);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_465);
lean_ctor_set_uint8(x_470, sizeof(void*)*4, x_469);
x_471 = 1;
x_472 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_366);
lean_ctor_set(x_472, 2, x_367);
lean_ctor_set(x_472, 3, x_368);
lean_ctor_set_uint8(x_472, sizeof(void*)*4, x_471);
return x_472;
}
else
{
uint8_t x_473; 
x_473 = lean_ctor_get_uint8(x_465, sizeof(void*)*4);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; lean_object* x_486; 
x_474 = lean_ctor_get(x_463, 1);
lean_inc(x_474);
x_475 = lean_ctor_get(x_463, 2);
lean_inc(x_475);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_476 = x_463;
} else {
 lean_dec_ref(x_463);
 x_476 = lean_box(0);
}
x_477 = lean_ctor_get(x_465, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_465, 2);
lean_inc(x_479);
x_480 = lean_ctor_get(x_465, 3);
lean_inc(x_480);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 lean_ctor_release(x_465, 2);
 lean_ctor_release(x_465, 3);
 x_481 = x_465;
} else {
 lean_dec_ref(x_465);
 x_481 = lean_box(0);
}
x_482 = 1;
if (lean_is_scalar(x_481)) {
 x_483 = lean_alloc_ctor(1, 4, 1);
} else {
 x_483 = x_481;
}
lean_ctor_set(x_483, 0, x_464);
lean_ctor_set(x_483, 1, x_474);
lean_ctor_set(x_483, 2, x_475);
lean_ctor_set(x_483, 3, x_477);
lean_ctor_set_uint8(x_483, sizeof(void*)*4, x_482);
if (lean_is_scalar(x_476)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_476;
}
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_366);
lean_ctor_set(x_484, 2, x_367);
lean_ctor_set(x_484, 3, x_368);
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_482);
x_485 = 0;
x_486 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_478);
lean_ctor_set(x_486, 2, x_479);
lean_ctor_set(x_486, 3, x_484);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_485);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_487 = lean_ctor_get(x_463, 1);
lean_inc(x_487);
x_488 = lean_ctor_get(x_463, 2);
lean_inc(x_488);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_489 = x_463;
} else {
 lean_dec_ref(x_463);
 x_489 = lean_box(0);
}
x_490 = 0;
if (lean_is_scalar(x_489)) {
 x_491 = lean_alloc_ctor(1, 4, 1);
} else {
 x_491 = x_489;
}
lean_ctor_set(x_491, 0, x_464);
lean_ctor_set(x_491, 1, x_487);
lean_ctor_set(x_491, 2, x_488);
lean_ctor_set(x_491, 3, x_465);
lean_ctor_set_uint8(x_491, sizeof(void*)*4, x_490);
x_492 = 1;
x_493 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_366);
lean_ctor_set(x_493, 2, x_367);
lean_ctor_set(x_493, 3, x_368);
lean_ctor_set_uint8(x_493, sizeof(void*)*4, x_492);
return x_493;
}
}
}
else
{
uint8_t x_494; 
x_494 = lean_ctor_get_uint8(x_464, sizeof(void*)*4);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; uint8_t x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; 
x_495 = lean_ctor_get(x_463, 1);
lean_inc(x_495);
x_496 = lean_ctor_get(x_463, 2);
lean_inc(x_496);
x_497 = lean_ctor_get(x_463, 3);
lean_inc(x_497);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_498 = x_463;
} else {
 lean_dec_ref(x_463);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_464, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_464, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_464, 2);
lean_inc(x_501);
x_502 = lean_ctor_get(x_464, 3);
lean_inc(x_502);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_503 = x_464;
} else {
 lean_dec_ref(x_464);
 x_503 = lean_box(0);
}
x_504 = 1;
if (lean_is_scalar(x_503)) {
 x_505 = lean_alloc_ctor(1, 4, 1);
} else {
 x_505 = x_503;
}
lean_ctor_set(x_505, 0, x_499);
lean_ctor_set(x_505, 1, x_500);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_502);
lean_ctor_set_uint8(x_505, sizeof(void*)*4, x_504);
if (lean_is_scalar(x_498)) {
 x_506 = lean_alloc_ctor(1, 4, 1);
} else {
 x_506 = x_498;
}
lean_ctor_set(x_506, 0, x_497);
lean_ctor_set(x_506, 1, x_366);
lean_ctor_set(x_506, 2, x_367);
lean_ctor_set(x_506, 3, x_368);
lean_ctor_set_uint8(x_506, sizeof(void*)*4, x_504);
x_507 = 0;
x_508 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_508, 0, x_505);
lean_ctor_set(x_508, 1, x_495);
lean_ctor_set(x_508, 2, x_496);
lean_ctor_set(x_508, 3, x_506);
lean_ctor_set_uint8(x_508, sizeof(void*)*4, x_507);
return x_508;
}
else
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_463, 3);
lean_inc(x_509);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; uint8_t x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_463, 1);
lean_inc(x_510);
x_511 = lean_ctor_get(x_463, 2);
lean_inc(x_511);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_512 = x_463;
} else {
 lean_dec_ref(x_463);
 x_512 = lean_box(0);
}
x_513 = 0;
if (lean_is_scalar(x_512)) {
 x_514 = lean_alloc_ctor(1, 4, 1);
} else {
 x_514 = x_512;
}
lean_ctor_set(x_514, 0, x_464);
lean_ctor_set(x_514, 1, x_510);
lean_ctor_set(x_514, 2, x_511);
lean_ctor_set(x_514, 3, x_509);
lean_ctor_set_uint8(x_514, sizeof(void*)*4, x_513);
x_515 = 1;
x_516 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_366);
lean_ctor_set(x_516, 2, x_367);
lean_ctor_set(x_516, 3, x_368);
lean_ctor_set_uint8(x_516, sizeof(void*)*4, x_515);
return x_516;
}
else
{
uint8_t x_517; 
x_517 = lean_ctor_get_uint8(x_509, sizeof(void*)*4);
if (x_517 == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; lean_object* x_531; 
x_518 = lean_ctor_get(x_463, 1);
lean_inc(x_518);
x_519 = lean_ctor_get(x_463, 2);
lean_inc(x_519);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_520 = x_463;
} else {
 lean_dec_ref(x_463);
 x_520 = lean_box(0);
}
x_521 = lean_ctor_get(x_509, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_509, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_509, 2);
lean_inc(x_523);
x_524 = lean_ctor_get(x_509, 3);
lean_inc(x_524);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 lean_ctor_release(x_509, 2);
 lean_ctor_release(x_509, 3);
 x_525 = x_509;
} else {
 lean_dec_ref(x_509);
 x_525 = lean_box(0);
}
x_526 = 1;
lean_inc(x_464);
if (lean_is_scalar(x_525)) {
 x_527 = lean_alloc_ctor(1, 4, 1);
} else {
 x_527 = x_525;
}
lean_ctor_set(x_527, 0, x_464);
lean_ctor_set(x_527, 1, x_518);
lean_ctor_set(x_527, 2, x_519);
lean_ctor_set(x_527, 3, x_521);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_528 = x_464;
} else {
 lean_dec_ref(x_464);
 x_528 = lean_box(0);
}
lean_ctor_set_uint8(x_527, sizeof(void*)*4, x_526);
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 4, 1);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_524);
lean_ctor_set(x_529, 1, x_366);
lean_ctor_set(x_529, 2, x_367);
lean_ctor_set(x_529, 3, x_368);
lean_ctor_set_uint8(x_529, sizeof(void*)*4, x_526);
x_530 = 0;
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(1, 4, 1);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_522);
lean_ctor_set(x_531, 2, x_523);
lean_ctor_set(x_531, 3, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*4, x_530);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; uint8_t x_541; lean_object* x_542; uint8_t x_543; lean_object* x_544; 
x_532 = lean_ctor_get(x_463, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_463, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_534 = x_463;
} else {
 lean_dec_ref(x_463);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_464, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_464, 1);
lean_inc(x_536);
x_537 = lean_ctor_get(x_464, 2);
lean_inc(x_537);
x_538 = lean_ctor_get(x_464, 3);
lean_inc(x_538);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_539 = x_464;
} else {
 lean_dec_ref(x_464);
 x_539 = lean_box(0);
}
if (lean_is_scalar(x_539)) {
 x_540 = lean_alloc_ctor(1, 4, 1);
} else {
 x_540 = x_539;
}
lean_ctor_set(x_540, 0, x_535);
lean_ctor_set(x_540, 1, x_536);
lean_ctor_set(x_540, 2, x_537);
lean_ctor_set(x_540, 3, x_538);
lean_ctor_set_uint8(x_540, sizeof(void*)*4, x_517);
x_541 = 0;
if (lean_is_scalar(x_534)) {
 x_542 = lean_alloc_ctor(1, 4, 1);
} else {
 x_542 = x_534;
}
lean_ctor_set(x_542, 0, x_540);
lean_ctor_set(x_542, 1, x_532);
lean_ctor_set(x_542, 2, x_533);
lean_ctor_set(x_542, 3, x_509);
lean_ctor_set_uint8(x_542, sizeof(void*)*4, x_541);
x_543 = 1;
x_544 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_366);
lean_ctor_set(x_544, 2, x_367);
lean_ctor_set(x_544, 3, x_368);
lean_ctor_set_uint8(x_544, sizeof(void*)*4, x_543);
return x_544;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_IR_LocalContext_addLocal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___at_Lean_IR_LocalContext_addLocal___spec__2(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_LocalContext_addLocal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Std_RBNode_insert___at_Lean_IR_LocalContext_addLocal___spec__1(x_1, x_2, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_LocalContext_addJP(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Std_RBNode_insert___at_Lean_IR_LocalContext_addLocal___spec__1(x_1, x_2, x_5);
return x_6;
}
}
lean_object* l_Lean_IR_LocalContext_addParam(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Std_RBNode_insert___at_Lean_IR_LocalContext_addLocal___spec__1(x_1, x_3, x_5);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_IR_LocalContext_addParam(x_4, x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_IR_LocalContext_addParams(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1(x_2, x_7, x_8, x_1);
return x_9;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_LocalContext_addParams___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_LocalContext_addParams___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_addParams(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_isJP_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
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
lean_object* l_Lean_IR_LocalContext_isJP_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_LocalContext_isJP_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_lt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
uint8_t l_Lean_IR_LocalContext_isJP(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 2)
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_isJP___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_LocalContext_isJP(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
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
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; 
lean_free_object(x_3);
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
return x_12;
}
}
}
}
}
lean_object* l_Lean_IR_LocalContext_getJPBody___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_getJPBody(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
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
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; 
lean_free_object(x_3);
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
return x_12;
}
}
}
}
}
lean_object* l_Lean_IR_LocalContext_getJPParams___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_getJPParams(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_isParam_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_LocalContext_isParam_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_LocalContext_isParam_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_LocalContext_isParam(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
}
}
}
lean_object* l_Lean_IR_LocalContext_isParam___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_LocalContext_isParam(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_LocalContext_isLocalVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
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
lean_object* l_Lean_IR_LocalContext_isLocalVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_LocalContext_isLocalVar_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 1)
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
}
}
}
lean_object* l_Lean_IR_LocalContext_isLocalVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_LocalContext_isLocalVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_IR_LocalContext_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l_Lean_IR_LocalContext_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_LocalContext_contains(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_nat_dec_lt(x_1, x_6);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = lean_nat_dec_lt(x_6, x_1);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_6);
x_11 = l_Std_RBNode_appendTrees___rarg(x_5, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Std_RBNode_isBlack___rarg(x_8);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_8);
x_14 = 0;
lean_ctor_set(x_2, 3, x_13);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_14);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_2);
x_15 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_8);
x_16 = l_Std_RBNode_balRight___rarg(x_5, x_6, x_7, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = l_Std_RBNode_isBlack___rarg(x_5);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_5);
x_19 = 0;
lean_ctor_set(x_2, 0, x_18);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_19);
return x_2;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_2);
x_20 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_5);
x_21 = l_Std_RBNode_balLeft___rarg(x_20, x_6, x_7, x_8);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_26 = lean_nat_dec_lt(x_1, x_23);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = lean_nat_dec_lt(x_23, x_1);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_23);
x_28 = l_Std_RBNode_appendTrees___rarg(x_22, x_25);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l_Std_RBNode_isBlack___rarg(x_25);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_30 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_25);
x_31 = 0;
x_32 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_23);
lean_ctor_set(x_32, 2, x_24);
lean_ctor_set(x_32, 3, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*4, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_25);
x_34 = l_Std_RBNode_balRight___rarg(x_22, x_23, x_24, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = l_Std_RBNode_isBlack___rarg(x_22);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_22);
x_37 = 0;
x_38 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_23);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_25);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_22);
x_40 = l_Std_RBNode_balLeft___rarg(x_39, x_23, x_24, x_25);
return x_40;
}
}
}
}
}
}
lean_object* l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_2);
x_4 = l_Std_RBNode_setBlack___rarg(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_del___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_erase___at_Lean_IR_LocalContext_eraseJoinPointDecl___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_eraseJoinPointDecl(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_getType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
default: 
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_apply_1(x_4, x_1);
return x_12;
}
}
}
}
}
lean_object* l_Lean_IR_LocalContext_getType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_LocalContext_getType_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_LocalContext_getType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
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
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; 
lean_free_object(x_3);
lean_dec(x_6);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; 
lean_dec(x_9);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
}
lean_object* l_Lean_IR_LocalContext_getType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_getType(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_LocalContext_getValue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_LocalContext_isJP___spec__1(x_1, x_2);
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
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; 
lean_free_object(x_3);
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
return x_12;
}
}
}
}
}
lean_object* l_Lean_IR_LocalContext_getValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LocalContext_getValue(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_VarId_alphaEqv_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_VarId_alphaEqv_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_VarId_alphaEqv_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_lt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
uint8_t l_Lean_IR_VarId_alphaEqv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_nat_dec_eq(x_6, x_3);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_IR_VarId_alphaEqv___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_VarId_alphaEqv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_VarId_alphaEqv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvVarId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_VarId_alphaEqv___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvVarId() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instAlphaEqvVarId___closed__1;
return x_1;
}
}
uint8_t l_Lean_IR_Arg_alphaEqv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Lean_IR_VarId_alphaEqv(x_1, x_4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
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
lean_object* l_Lean_IR_Arg_alphaEqv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_Arg_alphaEqv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_Arg_alphaEqv___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instAlphaEqvArg___closed__1;
return x_1;
}
}
uint8_t l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = 1;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_fget(x_5, x_7);
x_12 = lean_array_fget(x_6, x_7);
x_13 = l_Lean_IR_Arg_alphaEqv(x_1, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_7);
x_14 = 0;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_7, x_15);
lean_dec(x_7);
x_4 = lean_box(0);
x_7 = x_16;
goto _start;
}
}
}
}
uint8_t l_Lean_IR_args_alphaEqv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1(x_1, x_2, x_3, lean_box(0), x_2, x_3, x_8);
return x_9;
}
}
}
lean_object* l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = l_Array_isEqvAux___at_Lean_IR_args_alphaEqv___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(x_8);
return x_9;
}
}
lean_object* l_Lean_IR_args_alphaEqv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_args_alphaEqv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvArrayArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_args_alphaEqv___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvArrayArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instAlphaEqvArrayArg___closed__1;
return x_1;
}
}
lean_object* l_Lean_IR_Expr_alphaEqv_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
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
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_apply_4(x_3, x_18, x_19, x_20, x_21);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_3);
x_23 = lean_apply_2(x_17, x_1, x_2);
return x_23;
}
}
case 1:
{
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
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_17);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_apply_4(x_4, x_24, x_25, x_26, x_27);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_4);
x_29 = lean_apply_2(x_17, x_1, x_2);
return x_29;
}
}
case 2:
{
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
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_17);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
x_36 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_37 = lean_ctor_get(x_2, 2);
lean_inc(x_37);
lean_dec(x_2);
x_38 = lean_box(x_32);
x_39 = lean_box(x_36);
x_40 = lean_apply_8(x_5, x_30, x_31, x_38, x_33, x_34, x_35, x_39, x_37);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_5);
x_41 = lean_apply_2(x_17, x_1, x_2);
return x_41;
}
}
case 3:
{
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_17);
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
lean_dec(x_1);
x_44 = lean_ctor_get(x_2, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_dec(x_2);
x_46 = lean_apply_4(x_6, x_42, x_43, x_44, x_45);
return x_46;
}
else
{
lean_object* x_47; 
lean_dec(x_6);
x_47 = lean_apply_2(x_17, x_1, x_2);
return x_47;
}
}
case 4:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_17);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_2, 1);
lean_inc(x_51);
lean_dec(x_2);
x_52 = lean_apply_4(x_7, x_48, x_49, x_50, x_51);
return x_52;
}
else
{
lean_object* x_53; 
lean_dec(x_7);
x_53 = lean_apply_2(x_17, x_1, x_2);
return x_53;
}
}
case 5:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 5)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_17);
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 2);
lean_inc(x_56);
lean_dec(x_1);
x_57 = lean_ctor_get(x_2, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
x_59 = lean_ctor_get(x_2, 2);
lean_inc(x_59);
lean_dec(x_2);
x_60 = lean_apply_6(x_8, x_54, x_55, x_56, x_57, x_58, x_59);
return x_60;
}
else
{
lean_object* x_61; 
lean_dec(x_8);
x_61 = lean_apply_2(x_17, x_1, x_2);
return x_61;
}
}
case 6:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_17);
x_62 = lean_ctor_get(x_1, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
lean_dec(x_1);
x_64 = lean_ctor_get(x_2, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_2, 1);
lean_inc(x_65);
lean_dec(x_2);
x_66 = lean_apply_4(x_9, x_62, x_63, x_64, x_65);
return x_66;
}
else
{
lean_object* x_67; 
lean_dec(x_9);
x_67 = lean_apply_2(x_17, x_1, x_2);
return x_67;
}
}
case 7:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_17);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
lean_dec(x_1);
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
lean_dec(x_2);
x_72 = lean_apply_4(x_10, x_68, x_69, x_70, x_71);
return x_72;
}
else
{
lean_object* x_73; 
lean_dec(x_10);
x_73 = lean_apply_2(x_17, x_1, x_2);
return x_73;
}
}
case 8:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 8)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_17);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_1, 1);
lean_inc(x_75);
lean_dec(x_1);
x_76 = lean_ctor_get(x_2, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_2, 1);
lean_inc(x_77);
lean_dec(x_2);
x_78 = lean_apply_4(x_11, x_74, x_75, x_76, x_77);
return x_78;
}
else
{
lean_object* x_79; 
lean_dec(x_11);
x_79 = lean_apply_2(x_17, x_1, x_2);
return x_79;
}
}
case 9:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_17);
x_80 = lean_ctor_get(x_1, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_1, 1);
lean_inc(x_81);
lean_dec(x_1);
x_82 = lean_ctor_get(x_2, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_2, 1);
lean_inc(x_83);
lean_dec(x_2);
x_84 = lean_apply_4(x_12, x_80, x_81, x_82, x_83);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_12);
x_85 = lean_apply_2(x_17, x_1, x_2);
return x_85;
}
}
case 10:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_17);
x_86 = lean_ctor_get(x_1, 0);
lean_inc(x_86);
lean_dec(x_1);
x_87 = lean_ctor_get(x_2, 0);
lean_inc(x_87);
lean_dec(x_2);
x_88 = lean_apply_2(x_13, x_86, x_87);
return x_88;
}
else
{
lean_object* x_89; 
lean_dec(x_13);
x_89 = lean_apply_2(x_17, x_1, x_2);
return x_89;
}
}
case 11:
{
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 11)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_17);
x_90 = lean_ctor_get(x_1, 0);
lean_inc(x_90);
lean_dec(x_1);
x_91 = lean_ctor_get(x_2, 0);
lean_inc(x_91);
lean_dec(x_2);
x_92 = lean_apply_2(x_14, x_90, x_91);
return x_92;
}
else
{
lean_object* x_93; 
lean_dec(x_14);
x_93 = lean_apply_2(x_17, x_1, x_2);
return x_93;
}
}
case 12:
{
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 12)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_17);
x_94 = lean_ctor_get(x_1, 0);
lean_inc(x_94);
lean_dec(x_1);
x_95 = lean_ctor_get(x_2, 0);
lean_inc(x_95);
lean_dec(x_2);
x_96 = lean_apply_2(x_15, x_94, x_95);
return x_96;
}
else
{
lean_object* x_97; 
lean_dec(x_15);
x_97 = lean_apply_2(x_17, x_1, x_2);
return x_97;
}
}
default: 
{
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 13)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_17);
x_98 = lean_ctor_get(x_1, 0);
lean_inc(x_98);
lean_dec(x_1);
x_99 = lean_ctor_get(x_2, 0);
lean_inc(x_99);
lean_dec(x_2);
x_100 = lean_apply_2(x_16, x_98, x_99);
return x_100;
}
else
{
lean_object* x_101; 
lean_dec(x_16);
x_101 = lean_apply_2(x_17, x_1, x_2);
return x_101;
}
}
}
}
}
lean_object* l_Lean_IR_Expr_alphaEqv_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Expr_alphaEqv_match__1___rarg___boxed), 17, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Expr_alphaEqv_match__1___rarg___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_18; 
x_18 = l_Lean_IR_Expr_alphaEqv_match__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_18;
}
}
uint8_t l_Lean_IR_Expr_alphaEqv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_IR_CtorInfo_beq(x_4, x_6);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = l_Lean_IR_args_alphaEqv(x_1, x_5, x_7);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
case 1:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_nat_dec_eq(x_12, x_14);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
else
{
uint8_t x_18; 
x_18 = l_Lean_IR_VarId_alphaEqv(x_1, x_13, x_15);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
}
case 2:
{
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_3, 1);
x_26 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_27 = lean_ctor_get(x_3, 2);
x_28 = l_Lean_IR_VarId_alphaEqv(x_1, x_20, x_24);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
else
{
uint8_t x_30; 
x_30 = l_Lean_IR_CtorInfo_beq(x_21, x_25);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = 0;
return x_31;
}
else
{
if (x_22 == 0)
{
if (x_26 == 0)
{
uint8_t x_32; 
x_32 = l_Lean_IR_args_alphaEqv(x_1, x_23, x_27);
return x_32;
}
else
{
uint8_t x_33; 
x_33 = 0;
return x_33;
}
}
else
{
if (x_26 == 0)
{
uint8_t x_34; 
x_34 = 0;
return x_34;
}
else
{
uint8_t x_35; 
x_35 = l_Lean_IR_args_alphaEqv(x_1, x_23, x_27);
return x_35;
}
}
}
}
}
else
{
uint8_t x_36; 
x_36 = 0;
return x_36;
}
}
case 3:
{
if (lean_obj_tag(x_3) == 3)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_2, 0);
x_38 = lean_ctor_get(x_2, 1);
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_nat_dec_eq(x_37, x_39);
if (x_41 == 0)
{
uint8_t x_42; 
x_42 = 0;
return x_42;
}
else
{
uint8_t x_43; 
x_43 = l_Lean_IR_VarId_alphaEqv(x_1, x_38, x_40);
return x_43;
}
}
else
{
uint8_t x_44; 
x_44 = 0;
return x_44;
}
}
case 4:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = lean_ctor_get(x_2, 0);
x_46 = lean_ctor_get(x_2, 1);
x_47 = lean_ctor_get(x_3, 0);
x_48 = lean_ctor_get(x_3, 1);
x_49 = lean_nat_dec_eq(x_45, x_47);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = 0;
return x_50;
}
else
{
uint8_t x_51; 
x_51 = l_Lean_IR_VarId_alphaEqv(x_1, x_46, x_48);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = 0;
return x_52;
}
}
case 5:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_53 = lean_ctor_get(x_2, 0);
x_54 = lean_ctor_get(x_2, 1);
x_55 = lean_ctor_get(x_2, 2);
x_56 = lean_ctor_get(x_3, 0);
x_57 = lean_ctor_get(x_3, 1);
x_58 = lean_ctor_get(x_3, 2);
x_59 = lean_nat_dec_eq(x_53, x_56);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = 0;
return x_60;
}
else
{
uint8_t x_61; 
x_61 = lean_nat_dec_eq(x_54, x_57);
if (x_61 == 0)
{
uint8_t x_62; 
x_62 = 0;
return x_62;
}
else
{
uint8_t x_63; 
x_63 = l_Lean_IR_VarId_alphaEqv(x_1, x_55, x_58);
return x_63;
}
}
}
else
{
uint8_t x_64; 
x_64 = 0;
return x_64;
}
}
case 6:
{
if (lean_obj_tag(x_3) == 6)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = lean_ctor_get(x_2, 0);
x_66 = lean_ctor_get(x_2, 1);
x_67 = lean_ctor_get(x_3, 0);
x_68 = lean_ctor_get(x_3, 1);
x_69 = lean_name_eq(x_65, x_67);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = 0;
return x_70;
}
else
{
uint8_t x_71; 
x_71 = l_Lean_IR_args_alphaEqv(x_1, x_66, x_68);
return x_71;
}
}
else
{
uint8_t x_72; 
x_72 = 0;
return x_72;
}
}
case 7:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_73 = lean_ctor_get(x_2, 0);
x_74 = lean_ctor_get(x_2, 1);
x_75 = lean_ctor_get(x_3, 0);
x_76 = lean_ctor_get(x_3, 1);
x_77 = lean_name_eq(x_73, x_75);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = 0;
return x_78;
}
else
{
uint8_t x_79; 
x_79 = l_Lean_IR_args_alphaEqv(x_1, x_74, x_76);
return x_79;
}
}
else
{
uint8_t x_80; 
x_80 = 0;
return x_80;
}
}
case 8:
{
if (lean_obj_tag(x_3) == 8)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_81 = lean_ctor_get(x_2, 0);
x_82 = lean_ctor_get(x_2, 1);
x_83 = lean_ctor_get(x_3, 0);
x_84 = lean_ctor_get(x_3, 1);
x_85 = l_Lean_IR_VarId_alphaEqv(x_1, x_81, x_83);
if (x_85 == 0)
{
uint8_t x_86; 
x_86 = 0;
return x_86;
}
else
{
uint8_t x_87; 
x_87 = l_Lean_IR_args_alphaEqv(x_1, x_82, x_84);
return x_87;
}
}
else
{
uint8_t x_88; 
x_88 = 0;
return x_88;
}
}
case 9:
{
if (lean_obj_tag(x_3) == 9)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_2, 0);
x_90 = lean_ctor_get(x_2, 1);
x_91 = lean_ctor_get(x_3, 0);
x_92 = lean_ctor_get(x_3, 1);
x_93 = l_Lean_IR_IRType_beq(x_89, x_91);
if (x_93 == 0)
{
uint8_t x_94; 
x_94 = 0;
return x_94;
}
else
{
uint8_t x_95; 
x_95 = l_Lean_IR_VarId_alphaEqv(x_1, x_90, x_92);
return x_95;
}
}
else
{
uint8_t x_96; 
x_96 = 0;
return x_96;
}
}
case 10:
{
if (lean_obj_tag(x_3) == 10)
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_97 = lean_ctor_get(x_2, 0);
x_98 = lean_ctor_get(x_3, 0);
x_99 = l_Lean_IR_VarId_alphaEqv(x_1, x_97, x_98);
return x_99;
}
else
{
uint8_t x_100; 
x_100 = 0;
return x_100;
}
}
case 11:
{
if (lean_obj_tag(x_3) == 11)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = lean_ctor_get(x_2, 0);
x_102 = lean_ctor_get(x_3, 0);
x_103 = l_Lean_IR_LitVal_beq(x_101, x_102);
return x_103;
}
else
{
uint8_t x_104; 
x_104 = 0;
return x_104;
}
}
case 12:
{
if (lean_obj_tag(x_3) == 12)
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_105 = lean_ctor_get(x_2, 0);
x_106 = lean_ctor_get(x_3, 0);
x_107 = l_Lean_IR_VarId_alphaEqv(x_1, x_105, x_106);
return x_107;
}
else
{
uint8_t x_108; 
x_108 = 0;
return x_108;
}
}
default: 
{
if (lean_obj_tag(x_3) == 13)
{
lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_109 = lean_ctor_get(x_2, 0);
x_110 = lean_ctor_get(x_3, 0);
x_111 = l_Lean_IR_VarId_alphaEqv(x_1, x_109, x_110);
return x_111;
}
else
{
uint8_t x_112; 
x_112 = 0;
return x_112;
}
}
}
}
}
lean_object* l_Lean_IR_Expr_alphaEqv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_Expr_alphaEqv(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_Expr_alphaEqv___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instAlphaEqvExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instAlphaEqvExpr___closed__1;
return x_1;
}
}
lean_object* l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
x_13 = lean_nat_dec_lt(x_2, x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_10, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = 0;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_15);
return x_1;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_12, x_2, x_3);
x_17 = 0;
lean_ctor_set(x_1, 3, x_16);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_17);
return x_1;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_9, x_2, x_3);
x_19 = 0;
lean_ctor_set(x_1, 0, x_18);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_nat_dec_lt(x_2, x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_nat_dec_lt(x_21, x_2);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_21);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set(x_27, 2, x_3);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_26);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_23, x_2, x_3);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_22);
lean_ctor_set(x_30, 3, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
return x_30;
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_20, x_2, x_3);
x_32 = 0;
x_33 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_1);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
x_39 = lean_nat_dec_lt(x_2, x_36);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = lean_nat_dec_lt(x_36, x_2);
if (x_40 == 0)
{
uint8_t x_41; 
lean_dec(x_37);
lean_dec(x_36);
x_41 = 1;
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_41);
return x_1;
}
else
{
uint8_t x_42; 
x_42 = l_Std_RBNode_isRed___rarg(x_38);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_38, x_2, x_3);
x_44 = 1;
lean_ctor_set(x_1, 3, x_43);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_44);
return x_1;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_38, x_2, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_45, 3);
lean_dec(x_49);
x_50 = lean_ctor_get(x_45, 0);
lean_dec(x_50);
x_51 = 0;
lean_ctor_set(x_45, 0, x_47);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_51);
x_52 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_52);
return x_1;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
x_53 = lean_ctor_get(x_45, 1);
x_54 = lean_ctor_get(x_45, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = 0;
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_47);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = 1;
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_57);
return x_1;
}
}
else
{
uint8_t x_58; 
x_58 = lean_ctor_get_uint8(x_47, sizeof(void*)*4);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_45);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_45, 1);
x_61 = lean_ctor_get(x_45, 2);
x_62 = lean_ctor_get(x_45, 3);
lean_dec(x_62);
x_63 = lean_ctor_get(x_45, 0);
lean_dec(x_63);
x_64 = !lean_is_exclusive(x_47);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_65 = lean_ctor_get(x_47, 0);
x_66 = lean_ctor_get(x_47, 1);
x_67 = lean_ctor_get(x_47, 2);
x_68 = lean_ctor_get(x_47, 3);
x_69 = 1;
lean_ctor_set(x_47, 3, x_46);
lean_ctor_set(x_47, 2, x_37);
lean_ctor_set(x_47, 1, x_36);
lean_ctor_set(x_47, 0, x_35);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_69);
lean_ctor_set(x_45, 3, x_68);
lean_ctor_set(x_45, 2, x_67);
lean_ctor_set(x_45, 1, x_66);
lean_ctor_set(x_45, 0, x_65);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_69);
x_70 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_70);
return x_1;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_47, 0);
x_72 = lean_ctor_get(x_47, 1);
x_73 = lean_ctor_get(x_47, 2);
x_74 = lean_ctor_get(x_47, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_47);
x_75 = 1;
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_36);
lean_ctor_set(x_76, 2, x_37);
lean_ctor_set(x_76, 3, x_46);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_75);
lean_ctor_set(x_45, 3, x_74);
lean_ctor_set(x_45, 2, x_73);
lean_ctor_set(x_45, 1, x_72);
lean_ctor_set(x_45, 0, x_71);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_75);
x_77 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_61);
lean_ctor_set(x_1, 1, x_60);
lean_ctor_set(x_1, 0, x_76);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_77);
return x_1;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_78 = lean_ctor_get(x_45, 1);
x_79 = lean_ctor_get(x_45, 2);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_45);
x_80 = lean_ctor_get(x_47, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_47, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_47, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_47, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 lean_ctor_release(x_47, 2);
 lean_ctor_release(x_47, 3);
 x_84 = x_47;
} else {
 lean_dec_ref(x_47);
 x_84 = lean_box(0);
}
x_85 = 1;
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(1, 4, 1);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_35);
lean_ctor_set(x_86, 1, x_36);
lean_ctor_set(x_86, 2, x_37);
lean_ctor_set(x_86, 3, x_46);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
x_87 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_87, 0, x_80);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_82);
lean_ctor_set(x_87, 3, x_83);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_85);
x_88 = 0;
lean_ctor_set(x_1, 3, x_87);
lean_ctor_set(x_1, 2, x_79);
lean_ctor_set(x_1, 1, x_78);
lean_ctor_set(x_1, 0, x_86);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_88);
return x_1;
}
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_45);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_45, 3);
lean_dec(x_90);
x_91 = lean_ctor_get(x_45, 0);
lean_dec(x_91);
x_92 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_92);
x_93 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_93);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_45, 1);
x_95 = lean_ctor_get(x_45, 2);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_45);
x_96 = 0;
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_46);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_47);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = 1;
lean_ctor_set(x_1, 3, x_97);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_98);
return x_1;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = lean_ctor_get_uint8(x_46, sizeof(void*)*4);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_45);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_45, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_46);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; uint8_t x_108; 
x_103 = lean_ctor_get(x_46, 0);
x_104 = lean_ctor_get(x_46, 1);
x_105 = lean_ctor_get(x_46, 2);
x_106 = lean_ctor_get(x_46, 3);
x_107 = 1;
lean_ctor_set(x_46, 3, x_103);
lean_ctor_set(x_46, 2, x_37);
lean_ctor_set(x_46, 1, x_36);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_107);
lean_ctor_set(x_45, 0, x_106);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_107);
x_108 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_46);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_108);
return x_1;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; uint8_t x_115; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
x_111 = lean_ctor_get(x_46, 2);
x_112 = lean_ctor_get(x_46, 3);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_113 = 1;
x_114 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_114, 0, x_35);
lean_ctor_set(x_114, 1, x_36);
lean_ctor_set(x_114, 2, x_37);
lean_ctor_set(x_114, 3, x_109);
lean_ctor_set_uint8(x_114, sizeof(void*)*4, x_113);
lean_ctor_set(x_45, 0, x_112);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_113);
x_115 = 0;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set(x_1, 2, x_111);
lean_ctor_set(x_1, 1, x_110);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_115);
return x_1;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_116 = lean_ctor_get(x_45, 1);
x_117 = lean_ctor_get(x_45, 2);
x_118 = lean_ctor_get(x_45, 3);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_45);
x_119 = lean_ctor_get(x_46, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_46, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_46, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_46, 3);
lean_inc(x_122);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_123 = x_46;
} else {
 lean_dec_ref(x_46);
 x_123 = lean_box(0);
}
x_124 = 1;
if (lean_is_scalar(x_123)) {
 x_125 = lean_alloc_ctor(1, 4, 1);
} else {
 x_125 = x_123;
}
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_36);
lean_ctor_set(x_125, 2, x_37);
lean_ctor_set(x_125, 3, x_119);
lean_ctor_set_uint8(x_125, sizeof(void*)*4, x_124);
x_126 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_116);
lean_ctor_set(x_126, 2, x_117);
lean_ctor_set(x_126, 3, x_118);
lean_ctor_set_uint8(x_126, sizeof(void*)*4, x_124);
x_127 = 0;
lean_ctor_set(x_1, 3, x_126);
lean_ctor_set(x_1, 2, x_121);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_125);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_127);
return x_1;
}
}
else
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_45, 3);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_45);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_ctor_get(x_45, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_45, 0);
lean_dec(x_131);
x_132 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_132);
x_133 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_133);
return x_1;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; uint8_t x_138; 
x_134 = lean_ctor_get(x_45, 1);
x_135 = lean_ctor_get(x_45, 2);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_45);
x_136 = 0;
x_137 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_137, 0, x_46);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_135);
lean_ctor_set(x_137, 3, x_128);
lean_ctor_set_uint8(x_137, sizeof(void*)*4, x_136);
x_138 = 1;
lean_ctor_set(x_1, 3, x_137);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_138);
return x_1;
}
}
else
{
uint8_t x_139; 
x_139 = lean_ctor_get_uint8(x_128, sizeof(void*)*4);
if (x_139 == 0)
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_45);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_141 = lean_ctor_get(x_45, 3);
lean_dec(x_141);
x_142 = lean_ctor_get(x_45, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_128);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; uint8_t x_149; 
x_144 = lean_ctor_get(x_128, 0);
x_145 = lean_ctor_get(x_128, 1);
x_146 = lean_ctor_get(x_128, 2);
x_147 = lean_ctor_get(x_128, 3);
x_148 = 1;
lean_inc(x_46);
lean_ctor_set(x_128, 3, x_46);
lean_ctor_set(x_128, 2, x_37);
lean_ctor_set(x_128, 1, x_36);
lean_ctor_set(x_128, 0, x_35);
x_149 = !lean_is_exclusive(x_46);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_150 = lean_ctor_get(x_46, 3);
lean_dec(x_150);
x_151 = lean_ctor_get(x_46, 2);
lean_dec(x_151);
x_152 = lean_ctor_get(x_46, 1);
lean_dec(x_152);
x_153 = lean_ctor_get(x_46, 0);
lean_dec(x_153);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
lean_ctor_set(x_46, 3, x_147);
lean_ctor_set(x_46, 2, x_146);
lean_ctor_set(x_46, 1, x_145);
lean_ctor_set(x_46, 0, x_144);
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_148);
x_154 = 0;
lean_ctor_set(x_45, 3, x_46);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_154);
return x_45;
}
else
{
lean_object* x_155; uint8_t x_156; 
lean_dec(x_46);
lean_ctor_set_uint8(x_128, sizeof(void*)*4, x_148);
x_155 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_155, 0, x_144);
lean_ctor_set(x_155, 1, x_145);
lean_ctor_set(x_155, 2, x_146);
lean_ctor_set(x_155, 3, x_147);
lean_ctor_set_uint8(x_155, sizeof(void*)*4, x_148);
x_156 = 0;
lean_ctor_set(x_45, 3, x_155);
lean_ctor_set(x_45, 0, x_128);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_156);
return x_45;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_157 = lean_ctor_get(x_128, 0);
x_158 = lean_ctor_get(x_128, 1);
x_159 = lean_ctor_get(x_128, 2);
x_160 = lean_ctor_get(x_128, 3);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_128);
x_161 = 1;
lean_inc(x_46);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_36);
lean_ctor_set(x_162, 2, x_37);
lean_ctor_set(x_162, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_163 = x_46;
} else {
 lean_dec_ref(x_46);
 x_163 = lean_box(0);
}
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_161);
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 4, 1);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_157);
lean_ctor_set(x_164, 1, x_158);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_160);
lean_ctor_set_uint8(x_164, sizeof(void*)*4, x_161);
x_165 = 0;
lean_ctor_set(x_45, 3, x_164);
lean_ctor_set(x_45, 0, x_162);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_165);
return x_45;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint8_t x_177; lean_object* x_178; 
x_166 = lean_ctor_get(x_45, 1);
x_167 = lean_ctor_get(x_45, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_45);
x_168 = lean_ctor_get(x_128, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_128, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_128, 2);
lean_inc(x_170);
x_171 = lean_ctor_get(x_128, 3);
lean_inc(x_171);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 lean_ctor_release(x_128, 3);
 x_172 = x_128;
} else {
 lean_dec_ref(x_128);
 x_172 = lean_box(0);
}
x_173 = 1;
lean_inc(x_46);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(1, 4, 1);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_35);
lean_ctor_set(x_174, 1, x_36);
lean_ctor_set(x_174, 2, x_37);
lean_ctor_set(x_174, 3, x_46);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_175 = x_46;
} else {
 lean_dec_ref(x_46);
 x_175 = lean_box(0);
}
lean_ctor_set_uint8(x_174, sizeof(void*)*4, x_173);
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 1);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_168);
lean_ctor_set(x_176, 1, x_169);
lean_ctor_set(x_176, 2, x_170);
lean_ctor_set(x_176, 3, x_171);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_173);
x_177 = 0;
x_178 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_166);
lean_ctor_set(x_178, 2, x_167);
lean_ctor_set(x_178, 3, x_176);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_180 = lean_ctor_get(x_45, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_45, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_46);
if (x_182 == 0)
{
uint8_t x_183; uint8_t x_184; 
lean_ctor_set_uint8(x_46, sizeof(void*)*4, x_139);
x_183 = 0;
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_183);
x_184 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_184);
return x_1;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_185 = lean_ctor_get(x_46, 0);
x_186 = lean_ctor_get(x_46, 1);
x_187 = lean_ctor_get(x_46, 2);
x_188 = lean_ctor_get(x_46, 3);
lean_inc(x_188);
lean_inc(x_187);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_46);
x_189 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_189, 0, x_185);
lean_ctor_set(x_189, 1, x_186);
lean_ctor_set(x_189, 2, x_187);
lean_ctor_set(x_189, 3, x_188);
lean_ctor_set_uint8(x_189, sizeof(void*)*4, x_139);
x_190 = 0;
lean_ctor_set(x_45, 0, x_189);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_190);
x_191 = 1;
lean_ctor_set(x_1, 3, x_45);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_191);
return x_1;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; uint8_t x_202; 
x_192 = lean_ctor_get(x_45, 1);
x_193 = lean_ctor_get(x_45, 2);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_45);
x_194 = lean_ctor_get(x_46, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_46, 1);
lean_inc(x_195);
x_196 = lean_ctor_get(x_46, 2);
lean_inc(x_196);
x_197 = lean_ctor_get(x_46, 3);
lean_inc(x_197);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 lean_ctor_release(x_46, 2);
 lean_ctor_release(x_46, 3);
 x_198 = x_46;
} else {
 lean_dec_ref(x_46);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 4, 1);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_194);
lean_ctor_set(x_199, 1, x_195);
lean_ctor_set(x_199, 2, x_196);
lean_ctor_set(x_199, 3, x_197);
lean_ctor_set_uint8(x_199, sizeof(void*)*4, x_139);
x_200 = 0;
x_201 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_128);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = 1;
lean_ctor_set(x_1, 3, x_201);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_202);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_203; 
x_203 = l_Std_RBNode_isRed___rarg(x_35);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_35, x_2, x_3);
x_205 = 1;
lean_ctor_set(x_1, 0, x_204);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_205);
return x_1;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_35, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_206, 3);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; uint8_t x_212; uint8_t x_213; 
x_210 = lean_ctor_get(x_206, 3);
lean_dec(x_210);
x_211 = lean_ctor_get(x_206, 0);
lean_dec(x_211);
x_212 = 0;
lean_ctor_set(x_206, 0, x_208);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_212);
x_213 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_213);
return x_1;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
x_214 = lean_ctor_get(x_206, 1);
x_215 = lean_ctor_get(x_206, 2);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_206);
x_216 = 0;
x_217 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_217, 0, x_208);
lean_ctor_set(x_217, 1, x_214);
lean_ctor_set(x_217, 2, x_215);
lean_ctor_set(x_217, 3, x_208);
lean_ctor_set_uint8(x_217, sizeof(void*)*4, x_216);
x_218 = 1;
lean_ctor_set(x_1, 0, x_217);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_218);
return x_1;
}
}
else
{
uint8_t x_219; 
x_219 = lean_ctor_get_uint8(x_208, sizeof(void*)*4);
if (x_219 == 0)
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_206);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_221 = lean_ctor_get(x_206, 1);
x_222 = lean_ctor_get(x_206, 2);
x_223 = lean_ctor_get(x_206, 3);
lean_dec(x_223);
x_224 = lean_ctor_get(x_206, 0);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_208);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_226 = lean_ctor_get(x_208, 0);
x_227 = lean_ctor_get(x_208, 1);
x_228 = lean_ctor_get(x_208, 2);
x_229 = lean_ctor_get(x_208, 3);
x_230 = 1;
lean_ctor_set(x_208, 3, x_226);
lean_ctor_set(x_208, 2, x_222);
lean_ctor_set(x_208, 1, x_221);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set_uint8(x_208, sizeof(void*)*4, x_230);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_229);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_230);
x_231 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_208);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_231);
return x_1;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; uint8_t x_238; 
x_232 = lean_ctor_get(x_208, 0);
x_233 = lean_ctor_get(x_208, 1);
x_234 = lean_ctor_get(x_208, 2);
x_235 = lean_ctor_get(x_208, 3);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_208);
x_236 = 1;
x_237 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_237, 0, x_207);
lean_ctor_set(x_237, 1, x_221);
lean_ctor_set(x_237, 2, x_222);
lean_ctor_set(x_237, 3, x_232);
lean_ctor_set_uint8(x_237, sizeof(void*)*4, x_236);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_235);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_236);
x_238 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_234);
lean_ctor_set(x_1, 1, x_233);
lean_ctor_set(x_1, 0, x_237);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_238);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_239 = lean_ctor_get(x_206, 1);
x_240 = lean_ctor_get(x_206, 2);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_206);
x_241 = lean_ctor_get(x_208, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_208, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_208, 2);
lean_inc(x_243);
x_244 = lean_ctor_get(x_208, 3);
lean_inc(x_244);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 lean_ctor_release(x_208, 2);
 lean_ctor_release(x_208, 3);
 x_245 = x_208;
} else {
 lean_dec_ref(x_208);
 x_245 = lean_box(0);
}
x_246 = 1;
if (lean_is_scalar(x_245)) {
 x_247 = lean_alloc_ctor(1, 4, 1);
} else {
 x_247 = x_245;
}
lean_ctor_set(x_247, 0, x_207);
lean_ctor_set(x_247, 1, x_239);
lean_ctor_set(x_247, 2, x_240);
lean_ctor_set(x_247, 3, x_241);
lean_ctor_set_uint8(x_247, sizeof(void*)*4, x_246);
x_248 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_36);
lean_ctor_set(x_248, 2, x_37);
lean_ctor_set(x_248, 3, x_38);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_246);
x_249 = 0;
lean_ctor_set(x_1, 3, x_248);
lean_ctor_set(x_1, 2, x_243);
lean_ctor_set(x_1, 1, x_242);
lean_ctor_set(x_1, 0, x_247);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_249);
return x_1;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_206);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; uint8_t x_254; 
x_251 = lean_ctor_get(x_206, 3);
lean_dec(x_251);
x_252 = lean_ctor_get(x_206, 0);
lean_dec(x_252);
x_253 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_253);
x_254 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_254);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; uint8_t x_259; 
x_255 = lean_ctor_get(x_206, 1);
x_256 = lean_ctor_get(x_206, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_206);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_207);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_208);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
x_259 = 1;
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
else
{
uint8_t x_260; 
x_260 = lean_ctor_get_uint8(x_207, sizeof(void*)*4);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = !lean_is_exclusive(x_206);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_262 = lean_ctor_get(x_206, 1);
x_263 = lean_ctor_get(x_206, 2);
x_264 = lean_ctor_get(x_206, 3);
x_265 = lean_ctor_get(x_206, 0);
lean_dec(x_265);
x_266 = !lean_is_exclusive(x_207);
if (x_266 == 0)
{
uint8_t x_267; uint8_t x_268; 
x_267 = 1;
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_267);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_267);
x_268 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_207);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_268);
return x_1;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; uint8_t x_275; 
x_269 = lean_ctor_get(x_207, 0);
x_270 = lean_ctor_get(x_207, 1);
x_271 = lean_ctor_get(x_207, 2);
x_272 = lean_ctor_get(x_207, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_207);
x_273 = 1;
x_274 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_274, 0, x_269);
lean_ctor_set(x_274, 1, x_270);
lean_ctor_set(x_274, 2, x_271);
lean_ctor_set(x_274, 3, x_272);
lean_ctor_set_uint8(x_274, sizeof(void*)*4, x_273);
lean_ctor_set(x_206, 3, x_38);
lean_ctor_set(x_206, 2, x_37);
lean_ctor_set(x_206, 1, x_36);
lean_ctor_set(x_206, 0, x_264);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_273);
x_275 = 0;
lean_ctor_set(x_1, 3, x_206);
lean_ctor_set(x_1, 2, x_263);
lean_ctor_set(x_1, 1, x_262);
lean_ctor_set(x_1, 0, x_274);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_275);
return x_1;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
x_276 = lean_ctor_get(x_206, 1);
x_277 = lean_ctor_get(x_206, 2);
x_278 = lean_ctor_get(x_206, 3);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_206);
x_279 = lean_ctor_get(x_207, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_207, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_207, 2);
lean_inc(x_281);
x_282 = lean_ctor_get(x_207, 3);
lean_inc(x_282);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_283 = x_207;
} else {
 lean_dec_ref(x_207);
 x_283 = lean_box(0);
}
x_284 = 1;
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(1, 4, 1);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_280);
lean_ctor_set(x_285, 2, x_281);
lean_ctor_set(x_285, 3, x_282);
lean_ctor_set_uint8(x_285, sizeof(void*)*4, x_284);
x_286 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_36);
lean_ctor_set(x_286, 2, x_37);
lean_ctor_set(x_286, 3, x_38);
lean_ctor_set_uint8(x_286, sizeof(void*)*4, x_284);
x_287 = 0;
lean_ctor_set(x_1, 3, x_286);
lean_ctor_set(x_1, 2, x_277);
lean_ctor_set(x_1, 1, x_276);
lean_ctor_set(x_1, 0, x_285);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_287);
return x_1;
}
}
else
{
lean_object* x_288; 
x_288 = lean_ctor_get(x_206, 3);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_206);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_206, 3);
lean_dec(x_290);
x_291 = lean_ctor_get(x_206, 0);
lean_dec(x_291);
x_292 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_292);
x_293 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_293);
return x_1;
}
else
{
lean_object* x_294; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; 
x_294 = lean_ctor_get(x_206, 1);
x_295 = lean_ctor_get(x_206, 2);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_206);
x_296 = 0;
x_297 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_297, 0, x_207);
lean_ctor_set(x_297, 1, x_294);
lean_ctor_set(x_297, 2, x_295);
lean_ctor_set(x_297, 3, x_288);
lean_ctor_set_uint8(x_297, sizeof(void*)*4, x_296);
x_298 = 1;
lean_ctor_set(x_1, 0, x_297);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_298);
return x_1;
}
}
else
{
uint8_t x_299; 
x_299 = lean_ctor_get_uint8(x_288, sizeof(void*)*4);
if (x_299 == 0)
{
uint8_t x_300; 
lean_free_object(x_1);
x_300 = !lean_is_exclusive(x_206);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_206, 1);
x_302 = lean_ctor_get(x_206, 2);
x_303 = lean_ctor_get(x_206, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_206, 0);
lean_dec(x_304);
x_305 = !lean_is_exclusive(x_288);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; uint8_t x_311; 
x_306 = lean_ctor_get(x_288, 0);
x_307 = lean_ctor_get(x_288, 1);
x_308 = lean_ctor_get(x_288, 2);
x_309 = lean_ctor_get(x_288, 3);
x_310 = 1;
lean_inc(x_207);
lean_ctor_set(x_288, 3, x_306);
lean_ctor_set(x_288, 2, x_302);
lean_ctor_set(x_288, 1, x_301);
lean_ctor_set(x_288, 0, x_207);
x_311 = !lean_is_exclusive(x_207);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_207, 3);
lean_dec(x_312);
x_313 = lean_ctor_get(x_207, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_207, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_207, 0);
lean_dec(x_315);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
lean_ctor_set(x_207, 3, x_38);
lean_ctor_set(x_207, 2, x_37);
lean_ctor_set(x_207, 1, x_36);
lean_ctor_set(x_207, 0, x_309);
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_310);
x_316 = 0;
lean_ctor_set(x_206, 3, x_207);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_316);
return x_206;
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_dec(x_207);
lean_ctor_set_uint8(x_288, sizeof(void*)*4, x_310);
x_317 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_36);
lean_ctor_set(x_317, 2, x_37);
lean_ctor_set(x_317, 3, x_38);
lean_ctor_set_uint8(x_317, sizeof(void*)*4, x_310);
x_318 = 0;
lean_ctor_set(x_206, 3, x_317);
lean_ctor_set(x_206, 2, x_308);
lean_ctor_set(x_206, 1, x_307);
lean_ctor_set(x_206, 0, x_288);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_318);
return x_206;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_319 = lean_ctor_get(x_288, 0);
x_320 = lean_ctor_get(x_288, 1);
x_321 = lean_ctor_get(x_288, 2);
x_322 = lean_ctor_get(x_288, 3);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_288);
x_323 = 1;
lean_inc(x_207);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_207);
lean_ctor_set(x_324, 1, x_301);
lean_ctor_set(x_324, 2, x_302);
lean_ctor_set(x_324, 3, x_319);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_325 = x_207;
} else {
 lean_dec_ref(x_207);
 x_325 = lean_box(0);
}
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_323);
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 4, 1);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_322);
lean_ctor_set(x_326, 1, x_36);
lean_ctor_set(x_326, 2, x_37);
lean_ctor_set(x_326, 3, x_38);
lean_ctor_set_uint8(x_326, sizeof(void*)*4, x_323);
x_327 = 0;
lean_ctor_set(x_206, 3, x_326);
lean_ctor_set(x_206, 2, x_321);
lean_ctor_set(x_206, 1, x_320);
lean_ctor_set(x_206, 0, x_324);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_327);
return x_206;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; 
x_328 = lean_ctor_get(x_206, 1);
x_329 = lean_ctor_get(x_206, 2);
lean_inc(x_329);
lean_inc(x_328);
lean_dec(x_206);
x_330 = lean_ctor_get(x_288, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_288, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_288, 2);
lean_inc(x_332);
x_333 = lean_ctor_get(x_288, 3);
lean_inc(x_333);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 lean_ctor_release(x_288, 2);
 lean_ctor_release(x_288, 3);
 x_334 = x_288;
} else {
 lean_dec_ref(x_288);
 x_334 = lean_box(0);
}
x_335 = 1;
lean_inc(x_207);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 4, 1);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_207);
lean_ctor_set(x_336, 1, x_328);
lean_ctor_set(x_336, 2, x_329);
lean_ctor_set(x_336, 3, x_330);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_337 = x_207;
} else {
 lean_dec_ref(x_207);
 x_337 = lean_box(0);
}
lean_ctor_set_uint8(x_336, sizeof(void*)*4, x_335);
if (lean_is_scalar(x_337)) {
 x_338 = lean_alloc_ctor(1, 4, 1);
} else {
 x_338 = x_337;
}
lean_ctor_set(x_338, 0, x_333);
lean_ctor_set(x_338, 1, x_36);
lean_ctor_set(x_338, 2, x_37);
lean_ctor_set(x_338, 3, x_38);
lean_ctor_set_uint8(x_338, sizeof(void*)*4, x_335);
x_339 = 0;
x_340 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_340, 0, x_336);
lean_ctor_set(x_340, 1, x_331);
lean_ctor_set(x_340, 2, x_332);
lean_ctor_set(x_340, 3, x_338);
lean_ctor_set_uint8(x_340, sizeof(void*)*4, x_339);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_206);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_342 = lean_ctor_get(x_206, 3);
lean_dec(x_342);
x_343 = lean_ctor_get(x_206, 0);
lean_dec(x_343);
x_344 = !lean_is_exclusive(x_207);
if (x_344 == 0)
{
uint8_t x_345; uint8_t x_346; 
lean_ctor_set_uint8(x_207, sizeof(void*)*4, x_299);
x_345 = 0;
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_345);
x_346 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_346);
return x_1;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; uint8_t x_353; 
x_347 = lean_ctor_get(x_207, 0);
x_348 = lean_ctor_get(x_207, 1);
x_349 = lean_ctor_get(x_207, 2);
x_350 = lean_ctor_get(x_207, 3);
lean_inc(x_350);
lean_inc(x_349);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_207);
x_351 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_348);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set(x_351, 3, x_350);
lean_ctor_set_uint8(x_351, sizeof(void*)*4, x_299);
x_352 = 0;
lean_ctor_set(x_206, 0, x_351);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_352);
x_353 = 1;
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_353);
return x_1;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; uint8_t x_364; 
x_354 = lean_ctor_get(x_206, 1);
x_355 = lean_ctor_get(x_206, 2);
lean_inc(x_355);
lean_inc(x_354);
lean_dec(x_206);
x_356 = lean_ctor_get(x_207, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_207, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_207, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_207, 3);
lean_inc(x_359);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 lean_ctor_release(x_207, 2);
 lean_ctor_release(x_207, 3);
 x_360 = x_207;
} else {
 lean_dec_ref(x_207);
 x_360 = lean_box(0);
}
if (lean_is_scalar(x_360)) {
 x_361 = lean_alloc_ctor(1, 4, 1);
} else {
 x_361 = x_360;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_357);
lean_ctor_set(x_361, 2, x_358);
lean_ctor_set(x_361, 3, x_359);
lean_ctor_set_uint8(x_361, sizeof(void*)*4, x_299);
x_362 = 0;
x_363 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_354);
lean_ctor_set(x_363, 2, x_355);
lean_ctor_set(x_363, 3, x_288);
lean_ctor_set_uint8(x_363, sizeof(void*)*4, x_362);
x_364 = 1;
lean_ctor_set(x_1, 0, x_363);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_364);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_365 = lean_ctor_get(x_1, 0);
x_366 = lean_ctor_get(x_1, 1);
x_367 = lean_ctor_get(x_1, 2);
x_368 = lean_ctor_get(x_1, 3);
lean_inc(x_368);
lean_inc(x_367);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_1);
x_369 = lean_nat_dec_lt(x_2, x_366);
if (x_369 == 0)
{
uint8_t x_370; 
x_370 = lean_nat_dec_lt(x_366, x_2);
if (x_370 == 0)
{
uint8_t x_371; lean_object* x_372; 
lean_dec(x_367);
lean_dec(x_366);
x_371 = 1;
x_372 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_372, 0, x_365);
lean_ctor_set(x_372, 1, x_2);
lean_ctor_set(x_372, 2, x_3);
lean_ctor_set(x_372, 3, x_368);
lean_ctor_set_uint8(x_372, sizeof(void*)*4, x_371);
return x_372;
}
else
{
uint8_t x_373; 
x_373 = l_Std_RBNode_isRed___rarg(x_368);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; lean_object* x_376; 
x_374 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_368, x_2, x_3);
x_375 = 1;
x_376 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_376, 0, x_365);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_367);
lean_ctor_set(x_376, 3, x_374);
lean_ctor_set_uint8(x_376, sizeof(void*)*4, x_375);
return x_376;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_368, x_2, x_3);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 3);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; uint8_t x_383; lean_object* x_384; uint8_t x_385; lean_object* x_386; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_377, 2);
lean_inc(x_381);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_382 = x_377;
} else {
 lean_dec_ref(x_377);
 x_382 = lean_box(0);
}
x_383 = 0;
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_379);
lean_ctor_set(x_384, 1, x_380);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_379);
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_383);
x_385 = 1;
x_386 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_386, 0, x_365);
lean_ctor_set(x_386, 1, x_366);
lean_ctor_set(x_386, 2, x_367);
lean_ctor_set(x_386, 3, x_384);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_385);
return x_386;
}
else
{
uint8_t x_387; 
x_387 = lean_ctor_get_uint8(x_379, sizeof(void*)*4);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; 
x_388 = lean_ctor_get(x_377, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_377, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_390 = x_377;
} else {
 lean_dec_ref(x_377);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_379, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_379, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 lean_ctor_release(x_379, 3);
 x_395 = x_379;
} else {
 lean_dec_ref(x_379);
 x_395 = lean_box(0);
}
x_396 = 1;
if (lean_is_scalar(x_395)) {
 x_397 = lean_alloc_ctor(1, 4, 1);
} else {
 x_397 = x_395;
}
lean_ctor_set(x_397, 0, x_365);
lean_ctor_set(x_397, 1, x_366);
lean_ctor_set(x_397, 2, x_367);
lean_ctor_set(x_397, 3, x_378);
lean_ctor_set_uint8(x_397, sizeof(void*)*4, x_396);
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_391);
lean_ctor_set(x_398, 1, x_392);
lean_ctor_set(x_398, 2, x_393);
lean_ctor_set(x_398, 3, x_394);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_396);
x_399 = 0;
x_400 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_388);
lean_ctor_set(x_400, 2, x_389);
lean_ctor_set(x_400, 3, x_398);
lean_ctor_set_uint8(x_400, sizeof(void*)*4, x_399);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; lean_object* x_405; uint8_t x_406; lean_object* x_407; 
x_401 = lean_ctor_get(x_377, 1);
lean_inc(x_401);
x_402 = lean_ctor_get(x_377, 2);
lean_inc(x_402);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_403 = x_377;
} else {
 lean_dec_ref(x_377);
 x_403 = lean_box(0);
}
x_404 = 0;
if (lean_is_scalar(x_403)) {
 x_405 = lean_alloc_ctor(1, 4, 1);
} else {
 x_405 = x_403;
}
lean_ctor_set(x_405, 0, x_378);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_405, 2, x_402);
lean_ctor_set(x_405, 3, x_379);
lean_ctor_set_uint8(x_405, sizeof(void*)*4, x_404);
x_406 = 1;
x_407 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_407, 0, x_365);
lean_ctor_set(x_407, 1, x_366);
lean_ctor_set(x_407, 2, x_367);
lean_ctor_set(x_407, 3, x_405);
lean_ctor_set_uint8(x_407, sizeof(void*)*4, x_406);
return x_407;
}
}
}
else
{
uint8_t x_408; 
x_408 = lean_ctor_get_uint8(x_378, sizeof(void*)*4);
if (x_408 == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; uint8_t x_418; lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_409 = lean_ctor_get(x_377, 1);
lean_inc(x_409);
x_410 = lean_ctor_get(x_377, 2);
lean_inc(x_410);
x_411 = lean_ctor_get(x_377, 3);
lean_inc(x_411);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_412 = x_377;
} else {
 lean_dec_ref(x_377);
 x_412 = lean_box(0);
}
x_413 = lean_ctor_get(x_378, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_378, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_378, 2);
lean_inc(x_415);
x_416 = lean_ctor_get(x_378, 3);
lean_inc(x_416);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_417 = x_378;
} else {
 lean_dec_ref(x_378);
 x_417 = lean_box(0);
}
x_418 = 1;
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(1, 4, 1);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_365);
lean_ctor_set(x_419, 1, x_366);
lean_ctor_set(x_419, 2, x_367);
lean_ctor_set(x_419, 3, x_413);
lean_ctor_set_uint8(x_419, sizeof(void*)*4, x_418);
if (lean_is_scalar(x_412)) {
 x_420 = lean_alloc_ctor(1, 4, 1);
} else {
 x_420 = x_412;
}
lean_ctor_set(x_420, 0, x_416);
lean_ctor_set(x_420, 1, x_409);
lean_ctor_set(x_420, 2, x_410);
lean_ctor_set(x_420, 3, x_411);
lean_ctor_set_uint8(x_420, sizeof(void*)*4, x_418);
x_421 = 0;
x_422 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_414);
lean_ctor_set(x_422, 2, x_415);
lean_ctor_set(x_422, 3, x_420);
lean_ctor_set_uint8(x_422, sizeof(void*)*4, x_421);
return x_422;
}
else
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_377, 3);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; 
x_424 = lean_ctor_get(x_377, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_377, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_426 = x_377;
} else {
 lean_dec_ref(x_377);
 x_426 = lean_box(0);
}
x_427 = 0;
if (lean_is_scalar(x_426)) {
 x_428 = lean_alloc_ctor(1, 4, 1);
} else {
 x_428 = x_426;
}
lean_ctor_set(x_428, 0, x_378);
lean_ctor_set(x_428, 1, x_424);
lean_ctor_set(x_428, 2, x_425);
lean_ctor_set(x_428, 3, x_423);
lean_ctor_set_uint8(x_428, sizeof(void*)*4, x_427);
x_429 = 1;
x_430 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_430, 0, x_365);
lean_ctor_set(x_430, 1, x_366);
lean_ctor_set(x_430, 2, x_367);
lean_ctor_set(x_430, 3, x_428);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
return x_430;
}
else
{
uint8_t x_431; 
x_431 = lean_ctor_get_uint8(x_423, sizeof(void*)*4);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; uint8_t x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; uint8_t x_444; lean_object* x_445; 
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_423, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_423, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_423, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_423, 3);
lean_inc(x_438);
if (lean_is_exclusive(x_423)) {
 lean_ctor_release(x_423, 0);
 lean_ctor_release(x_423, 1);
 lean_ctor_release(x_423, 2);
 lean_ctor_release(x_423, 3);
 x_439 = x_423;
} else {
 lean_dec_ref(x_423);
 x_439 = lean_box(0);
}
x_440 = 1;
lean_inc(x_378);
if (lean_is_scalar(x_439)) {
 x_441 = lean_alloc_ctor(1, 4, 1);
} else {
 x_441 = x_439;
}
lean_ctor_set(x_441, 0, x_365);
lean_ctor_set(x_441, 1, x_366);
lean_ctor_set(x_441, 2, x_367);
lean_ctor_set(x_441, 3, x_378);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_442 = x_378;
} else {
 lean_dec_ref(x_378);
 x_442 = lean_box(0);
}
lean_ctor_set_uint8(x_441, sizeof(void*)*4, x_440);
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_435);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_437);
lean_ctor_set(x_443, 3, x_438);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_440);
x_444 = 0;
if (lean_is_scalar(x_434)) {
 x_445 = lean_alloc_ctor(1, 4, 1);
} else {
 x_445 = x_434;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_432);
lean_ctor_set(x_445, 2, x_433);
lean_ctor_set(x_445, 3, x_443);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_444);
return x_445;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; uint8_t x_457; lean_object* x_458; 
x_446 = lean_ctor_get(x_377, 1);
lean_inc(x_446);
x_447 = lean_ctor_get(x_377, 2);
lean_inc(x_447);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 lean_ctor_release(x_377, 3);
 x_448 = x_377;
} else {
 lean_dec_ref(x_377);
 x_448 = lean_box(0);
}
x_449 = lean_ctor_get(x_378, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_378, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = lean_ctor_get(x_378, 3);
lean_inc(x_452);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 lean_ctor_release(x_378, 3);
 x_453 = x_378;
} else {
 lean_dec_ref(x_378);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 4, 1);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_449);
lean_ctor_set(x_454, 1, x_450);
lean_ctor_set(x_454, 2, x_451);
lean_ctor_set(x_454, 3, x_452);
lean_ctor_set_uint8(x_454, sizeof(void*)*4, x_431);
x_455 = 0;
if (lean_is_scalar(x_448)) {
 x_456 = lean_alloc_ctor(1, 4, 1);
} else {
 x_456 = x_448;
}
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_446);
lean_ctor_set(x_456, 2, x_447);
lean_ctor_set(x_456, 3, x_423);
lean_ctor_set_uint8(x_456, sizeof(void*)*4, x_455);
x_457 = 1;
x_458 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_458, 0, x_365);
lean_ctor_set(x_458, 1, x_366);
lean_ctor_set(x_458, 2, x_367);
lean_ctor_set(x_458, 3, x_456);
lean_ctor_set_uint8(x_458, sizeof(void*)*4, x_457);
return x_458;
}
}
}
}
}
}
}
else
{
uint8_t x_459; 
x_459 = l_Std_RBNode_isRed___rarg(x_365);
if (x_459 == 0)
{
lean_object* x_460; uint8_t x_461; lean_object* x_462; 
x_460 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_365, x_2, x_3);
x_461 = 1;
x_462 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_366);
lean_ctor_set(x_462, 2, x_367);
lean_ctor_set(x_462, 3, x_368);
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_461);
return x_462;
}
else
{
lean_object* x_463; lean_object* x_464; 
x_463 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_365, x_2, x_3);
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; 
x_465 = lean_ctor_get(x_463, 3);
lean_inc(x_465);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; 
x_466 = lean_ctor_get(x_463, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_463, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_468 = x_463;
} else {
 lean_dec_ref(x_463);
 x_468 = lean_box(0);
}
x_469 = 0;
if (lean_is_scalar(x_468)) {
 x_470 = lean_alloc_ctor(1, 4, 1);
} else {
 x_470 = x_468;
}
lean_ctor_set(x_470, 0, x_465);
lean_ctor_set(x_470, 1, x_466);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_465);
lean_ctor_set_uint8(x_470, sizeof(void*)*4, x_469);
x_471 = 1;
x_472 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_366);
lean_ctor_set(x_472, 2, x_367);
lean_ctor_set(x_472, 3, x_368);
lean_ctor_set_uint8(x_472, sizeof(void*)*4, x_471);
return x_472;
}
else
{
uint8_t x_473; 
x_473 = lean_ctor_get_uint8(x_465, sizeof(void*)*4);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; lean_object* x_486; 
x_474 = lean_ctor_get(x_463, 1);
lean_inc(x_474);
x_475 = lean_ctor_get(x_463, 2);
lean_inc(x_475);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_476 = x_463;
} else {
 lean_dec_ref(x_463);
 x_476 = lean_box(0);
}
x_477 = lean_ctor_get(x_465, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_465, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_465, 2);
lean_inc(x_479);
x_480 = lean_ctor_get(x_465, 3);
lean_inc(x_480);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 lean_ctor_release(x_465, 2);
 lean_ctor_release(x_465, 3);
 x_481 = x_465;
} else {
 lean_dec_ref(x_465);
 x_481 = lean_box(0);
}
x_482 = 1;
if (lean_is_scalar(x_481)) {
 x_483 = lean_alloc_ctor(1, 4, 1);
} else {
 x_483 = x_481;
}
lean_ctor_set(x_483, 0, x_464);
lean_ctor_set(x_483, 1, x_474);
lean_ctor_set(x_483, 2, x_475);
lean_ctor_set(x_483, 3, x_477);
lean_ctor_set_uint8(x_483, sizeof(void*)*4, x_482);
if (lean_is_scalar(x_476)) {
 x_484 = lean_alloc_ctor(1, 4, 1);
} else {
 x_484 = x_476;
}
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_366);
lean_ctor_set(x_484, 2, x_367);
lean_ctor_set(x_484, 3, x_368);
lean_ctor_set_uint8(x_484, sizeof(void*)*4, x_482);
x_485 = 0;
x_486 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_478);
lean_ctor_set(x_486, 2, x_479);
lean_ctor_set(x_486, 3, x_484);
lean_ctor_set_uint8(x_486, sizeof(void*)*4, x_485);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; 
x_487 = lean_ctor_get(x_463, 1);
lean_inc(x_487);
x_488 = lean_ctor_get(x_463, 2);
lean_inc(x_488);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_489 = x_463;
} else {
 lean_dec_ref(x_463);
 x_489 = lean_box(0);
}
x_490 = 0;
if (lean_is_scalar(x_489)) {
 x_491 = lean_alloc_ctor(1, 4, 1);
} else {
 x_491 = x_489;
}
lean_ctor_set(x_491, 0, x_464);
lean_ctor_set(x_491, 1, x_487);
lean_ctor_set(x_491, 2, x_488);
lean_ctor_set(x_491, 3, x_465);
lean_ctor_set_uint8(x_491, sizeof(void*)*4, x_490);
x_492 = 1;
x_493 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_366);
lean_ctor_set(x_493, 2, x_367);
lean_ctor_set(x_493, 3, x_368);
lean_ctor_set_uint8(x_493, sizeof(void*)*4, x_492);
return x_493;
}
}
}
else
{
uint8_t x_494; 
x_494 = lean_ctor_get_uint8(x_464, sizeof(void*)*4);
if (x_494 == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; uint8_t x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; 
x_495 = lean_ctor_get(x_463, 1);
lean_inc(x_495);
x_496 = lean_ctor_get(x_463, 2);
lean_inc(x_496);
x_497 = lean_ctor_get(x_463, 3);
lean_inc(x_497);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_498 = x_463;
} else {
 lean_dec_ref(x_463);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_464, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_464, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_464, 2);
lean_inc(x_501);
x_502 = lean_ctor_get(x_464, 3);
lean_inc(x_502);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_503 = x_464;
} else {
 lean_dec_ref(x_464);
 x_503 = lean_box(0);
}
x_504 = 1;
if (lean_is_scalar(x_503)) {
 x_505 = lean_alloc_ctor(1, 4, 1);
} else {
 x_505 = x_503;
}
lean_ctor_set(x_505, 0, x_499);
lean_ctor_set(x_505, 1, x_500);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_502);
lean_ctor_set_uint8(x_505, sizeof(void*)*4, x_504);
if (lean_is_scalar(x_498)) {
 x_506 = lean_alloc_ctor(1, 4, 1);
} else {
 x_506 = x_498;
}
lean_ctor_set(x_506, 0, x_497);
lean_ctor_set(x_506, 1, x_366);
lean_ctor_set(x_506, 2, x_367);
lean_ctor_set(x_506, 3, x_368);
lean_ctor_set_uint8(x_506, sizeof(void*)*4, x_504);
x_507 = 0;
x_508 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_508, 0, x_505);
lean_ctor_set(x_508, 1, x_495);
lean_ctor_set(x_508, 2, x_496);
lean_ctor_set(x_508, 3, x_506);
lean_ctor_set_uint8(x_508, sizeof(void*)*4, x_507);
return x_508;
}
else
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_463, 3);
lean_inc(x_509);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; uint8_t x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_463, 1);
lean_inc(x_510);
x_511 = lean_ctor_get(x_463, 2);
lean_inc(x_511);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_512 = x_463;
} else {
 lean_dec_ref(x_463);
 x_512 = lean_box(0);
}
x_513 = 0;
if (lean_is_scalar(x_512)) {
 x_514 = lean_alloc_ctor(1, 4, 1);
} else {
 x_514 = x_512;
}
lean_ctor_set(x_514, 0, x_464);
lean_ctor_set(x_514, 1, x_510);
lean_ctor_set(x_514, 2, x_511);
lean_ctor_set(x_514, 3, x_509);
lean_ctor_set_uint8(x_514, sizeof(void*)*4, x_513);
x_515 = 1;
x_516 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_516, 0, x_514);
lean_ctor_set(x_516, 1, x_366);
lean_ctor_set(x_516, 2, x_367);
lean_ctor_set(x_516, 3, x_368);
lean_ctor_set_uint8(x_516, sizeof(void*)*4, x_515);
return x_516;
}
else
{
uint8_t x_517; 
x_517 = lean_ctor_get_uint8(x_509, sizeof(void*)*4);
if (x_517 == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; lean_object* x_531; 
x_518 = lean_ctor_get(x_463, 1);
lean_inc(x_518);
x_519 = lean_ctor_get(x_463, 2);
lean_inc(x_519);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_520 = x_463;
} else {
 lean_dec_ref(x_463);
 x_520 = lean_box(0);
}
x_521 = lean_ctor_get(x_509, 0);
lean_inc(x_521);
x_522 = lean_ctor_get(x_509, 1);
lean_inc(x_522);
x_523 = lean_ctor_get(x_509, 2);
lean_inc(x_523);
x_524 = lean_ctor_get(x_509, 3);
lean_inc(x_524);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 lean_ctor_release(x_509, 2);
 lean_ctor_release(x_509, 3);
 x_525 = x_509;
} else {
 lean_dec_ref(x_509);
 x_525 = lean_box(0);
}
x_526 = 1;
lean_inc(x_464);
if (lean_is_scalar(x_525)) {
 x_527 = lean_alloc_ctor(1, 4, 1);
} else {
 x_527 = x_525;
}
lean_ctor_set(x_527, 0, x_464);
lean_ctor_set(x_527, 1, x_518);
lean_ctor_set(x_527, 2, x_519);
lean_ctor_set(x_527, 3, x_521);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_528 = x_464;
} else {
 lean_dec_ref(x_464);
 x_528 = lean_box(0);
}
lean_ctor_set_uint8(x_527, sizeof(void*)*4, x_526);
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 4, 1);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_524);
lean_ctor_set(x_529, 1, x_366);
lean_ctor_set(x_529, 2, x_367);
lean_ctor_set(x_529, 3, x_368);
lean_ctor_set_uint8(x_529, sizeof(void*)*4, x_526);
x_530 = 0;
if (lean_is_scalar(x_520)) {
 x_531 = lean_alloc_ctor(1, 4, 1);
} else {
 x_531 = x_520;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_522);
lean_ctor_set(x_531, 2, x_523);
lean_ctor_set(x_531, 3, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*4, x_530);
return x_531;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; uint8_t x_541; lean_object* x_542; uint8_t x_543; lean_object* x_544; 
x_532 = lean_ctor_get(x_463, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_463, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 lean_ctor_release(x_463, 2);
 lean_ctor_release(x_463, 3);
 x_534 = x_463;
} else {
 lean_dec_ref(x_463);
 x_534 = lean_box(0);
}
x_535 = lean_ctor_get(x_464, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_464, 1);
lean_inc(x_536);
x_537 = lean_ctor_get(x_464, 2);
lean_inc(x_537);
x_538 = lean_ctor_get(x_464, 3);
lean_inc(x_538);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 lean_ctor_release(x_464, 2);
 lean_ctor_release(x_464, 3);
 x_539 = x_464;
} else {
 lean_dec_ref(x_464);
 x_539 = lean_box(0);
}
if (lean_is_scalar(x_539)) {
 x_540 = lean_alloc_ctor(1, 4, 1);
} else {
 x_540 = x_539;
}
lean_ctor_set(x_540, 0, x_535);
lean_ctor_set(x_540, 1, x_536);
lean_ctor_set(x_540, 2, x_537);
lean_ctor_set(x_540, 3, x_538);
lean_ctor_set_uint8(x_540, sizeof(void*)*4, x_517);
x_541 = 0;
if (lean_is_scalar(x_534)) {
 x_542 = lean_alloc_ctor(1, 4, 1);
} else {
 x_542 = x_534;
}
lean_ctor_set(x_542, 0, x_540);
lean_ctor_set(x_542, 1, x_532);
lean_ctor_set(x_542, 2, x_533);
lean_ctor_set(x_542, 3, x_509);
lean_ctor_set_uint8(x_542, sizeof(void*)*4, x_541);
x_543 = 1;
x_544 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_544, 0, x_542);
lean_ctor_set(x_544, 1, x_366);
lean_ctor_set(x_544, 2, x_367);
lean_ctor_set(x_544, 3, x_368);
lean_ctor_set_uint8(x_544, sizeof(void*)*4, x_543);
return x_544;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_IR_addVarRename___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___at_Lean_IR_addVarRename___spec__2(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_addVarRename(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_insert___at_Lean_IR_addVarRename___spec__1(x_1, x_2, x_3);
return x_5;
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Lean_IR_addParamRename(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
x_12 = l_Lean_IR_IRType_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(0);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_box(0);
x_4 = x_16;
goto block_9;
}
else
{
lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_box(0);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lean_box(0);
x_4 = x_20;
goto block_9;
}
}
}
block_9:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_IR_addVarRename(x_1, x_5, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_nat_dec_le(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_4, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_4, x_11);
lean_dec(x_4);
x_13 = l_Lean_IR_instInhabitedParam;
x_14 = lean_array_get(x_13, x_1, x_5);
x_15 = lean_array_get(x_13, x_2, x_5);
x_16 = l_Lean_IR_addParamRename(x_6, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_5);
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_3, 2);
x_20 = lean_nat_add(x_5, x_19);
lean_dec(x_5);
x_4 = x_12;
x_5 = x_20;
x_6 = x_18;
goto _start;
}
}
else
{
lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_6);
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_6);
return x_23;
}
}
}
lean_object* l_Lean_IR_addParamsRename(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_unsigned_to_nat(1u);
lean_inc(x_4);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1(x_2, x_3, x_10, x_4, x_8, x_1);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_box(0);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Range_forIn_loop___at_Lean_IR_addParamsRename___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_addParamsRename___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_addParamsRename(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_FnBody_alphaEqv_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_alphaEqv_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_4(x_3, x_6, x_7, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_apply_2(x_5, x_1, x_2);
return x_11;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_4);
x_12 = lean_apply_2(x_5, x_1, x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_2(x_4, x_13, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_alphaEqv_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
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
lean_dec(x_5);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_18);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 3);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
lean_dec(x_3);
x_27 = lean_apply_9(x_4, x_1, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_4);
x_28 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_28;
}
}
case 1:
{
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
lean_dec(x_4);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_18);
x_29 = lean_ctor_get(x_2, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_2, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_2, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_2, 3);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_3, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_3, 3);
lean_inc(x_36);
lean_dec(x_3);
x_37 = lean_apply_9(x_5, x_1, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_5);
x_38 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_38;
}
}
case 2:
{
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
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_18);
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_2, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_2, 3);
lean_inc(x_42);
lean_dec(x_2);
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_3, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_3, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_3, 3);
lean_inc(x_46);
lean_dec(x_3);
x_47 = lean_apply_9(x_6, x_1, x_39, x_40, x_41, x_42, x_43, x_44, x_45, x_46);
return x_47;
}
else
{
lean_object* x_48; 
lean_dec(x_6);
x_48 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_48;
}
}
case 3:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 3)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_18);
x_49 = lean_ctor_get(x_2, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_2, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_2, 2);
lean_inc(x_51);
lean_dec(x_2);
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_3, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_3, 2);
lean_inc(x_54);
lean_dec(x_3);
x_55 = lean_apply_7(x_9, x_1, x_49, x_50, x_51, x_52, x_53, x_54);
return x_55;
}
else
{
lean_object* x_56; 
lean_dec(x_9);
x_56 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_56;
}
}
case 4:
{
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_18);
x_57 = lean_ctor_get(x_2, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
x_59 = lean_ctor_get(x_2, 2);
lean_inc(x_59);
x_60 = lean_ctor_get(x_2, 3);
lean_inc(x_60);
lean_dec(x_2);
x_61 = lean_ctor_get(x_3, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_3, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_3, 2);
lean_inc(x_63);
x_64 = lean_ctor_get(x_3, 3);
lean_inc(x_64);
lean_dec(x_3);
x_65 = lean_apply_9(x_7, x_1, x_57, x_58, x_59, x_60, x_61, x_62, x_63, x_64);
return x_65;
}
else
{
lean_object* x_66; 
lean_dec(x_7);
x_66 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_66;
}
}
case 5:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_18);
x_67 = lean_ctor_get(x_2, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_2, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_2, 3);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 4);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 5);
lean_inc(x_72);
lean_dec(x_2);
x_73 = lean_ctor_get(x_3, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_3, 1);
lean_inc(x_74);
x_75 = lean_ctor_get(x_3, 2);
lean_inc(x_75);
x_76 = lean_ctor_get(x_3, 3);
lean_inc(x_76);
x_77 = lean_ctor_get(x_3, 4);
lean_inc(x_77);
x_78 = lean_ctor_get(x_3, 5);
lean_inc(x_78);
lean_dec(x_3);
x_79 = lean_apply_13(x_8, x_1, x_67, x_68, x_69, x_70, x_71, x_72, x_73, x_74, x_75, x_76, x_77, x_78);
return x_79;
}
else
{
lean_object* x_80; 
lean_dec(x_8);
x_80 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_80;
}
}
case 6:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 6)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_18);
x_81 = lean_ctor_get(x_2, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_2, 1);
lean_inc(x_82);
x_83 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_84 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 1);
x_85 = lean_ctor_get(x_2, 2);
lean_inc(x_85);
lean_dec(x_2);
x_86 = lean_ctor_get(x_3, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_3, 1);
lean_inc(x_87);
x_88 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_89 = lean_ctor_get_uint8(x_3, sizeof(void*)*3 + 1);
x_90 = lean_ctor_get(x_3, 2);
lean_inc(x_90);
lean_dec(x_3);
x_91 = lean_box(x_83);
x_92 = lean_box(x_84);
x_93 = lean_box(x_88);
x_94 = lean_box(x_89);
x_95 = lean_apply_11(x_10, x_1, x_81, x_82, x_91, x_92, x_85, x_86, x_87, x_93, x_94, x_90);
return x_95;
}
else
{
lean_object* x_96; 
lean_dec(x_10);
x_96 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_96;
}
}
case 7:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_18);
x_97 = lean_ctor_get(x_2, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_2, 1);
lean_inc(x_98);
x_99 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_100 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 1);
x_101 = lean_ctor_get(x_2, 2);
lean_inc(x_101);
lean_dec(x_2);
x_102 = lean_ctor_get(x_3, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_3, 1);
lean_inc(x_103);
x_104 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_105 = lean_ctor_get_uint8(x_3, sizeof(void*)*3 + 1);
x_106 = lean_ctor_get(x_3, 2);
lean_inc(x_106);
lean_dec(x_3);
x_107 = lean_box(x_99);
x_108 = lean_box(x_100);
x_109 = lean_box(x_104);
x_110 = lean_box(x_105);
x_111 = lean_apply_11(x_11, x_1, x_97, x_98, x_107, x_108, x_101, x_102, x_103, x_109, x_110, x_106);
return x_111;
}
else
{
lean_object* x_112; 
lean_dec(x_11);
x_112 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_112;
}
}
case 8:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 8)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_18);
x_113 = lean_ctor_get(x_2, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_2, 1);
lean_inc(x_114);
lean_dec(x_2);
x_115 = lean_ctor_get(x_3, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_3, 1);
lean_inc(x_116);
lean_dec(x_3);
x_117 = lean_apply_5(x_12, x_1, x_113, x_114, x_115, x_116);
return x_117;
}
else
{
lean_object* x_118; 
lean_dec(x_12);
x_118 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_118;
}
}
case 9:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 9)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_18);
x_119 = lean_ctor_get(x_2, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_2, 1);
lean_inc(x_120);
lean_dec(x_2);
x_121 = lean_ctor_get(x_3, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_3, 1);
lean_inc(x_122);
lean_dec(x_3);
x_123 = lean_apply_5(x_13, x_1, x_119, x_120, x_121, x_122);
return x_123;
}
else
{
lean_object* x_124; 
lean_dec(x_13);
x_124 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_124;
}
}
case 10:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 10)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_18);
x_125 = lean_ctor_get(x_2, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_2, 1);
lean_inc(x_126);
x_127 = lean_ctor_get(x_2, 2);
lean_inc(x_127);
x_128 = lean_ctor_get(x_2, 3);
lean_inc(x_128);
lean_dec(x_2);
x_129 = lean_ctor_get(x_3, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_3, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_3, 2);
lean_inc(x_131);
x_132 = lean_ctor_get(x_3, 3);
lean_inc(x_132);
lean_dec(x_3);
x_133 = lean_apply_9(x_14, x_1, x_125, x_126, x_127, x_128, x_129, x_130, x_131, x_132);
return x_133;
}
else
{
lean_object* x_134; 
lean_dec(x_14);
x_134 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_134;
}
}
case 11:
{
lean_dec(x_17);
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
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 11)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_18);
x_135 = lean_ctor_get(x_2, 0);
lean_inc(x_135);
lean_dec(x_2);
x_136 = lean_ctor_get(x_3, 0);
lean_inc(x_136);
lean_dec(x_3);
x_137 = lean_apply_3(x_16, x_1, x_135, x_136);
return x_137;
}
else
{
lean_object* x_138; 
lean_dec(x_16);
x_138 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_138;
}
}
case 12:
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 12)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_18);
x_139 = lean_ctor_get(x_2, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_2, 1);
lean_inc(x_140);
lean_dec(x_2);
x_141 = lean_ctor_get(x_3, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_3, 1);
lean_inc(x_142);
lean_dec(x_3);
x_143 = lean_apply_5(x_15, x_1, x_139, x_140, x_141, x_142);
return x_143;
}
else
{
lean_object* x_144; 
lean_dec(x_15);
x_144 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_144;
}
}
default: 
{
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
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_3) == 13)
{
lean_object* x_145; 
lean_dec(x_18);
x_145 = lean_apply_1(x_17, x_1);
return x_145;
}
else
{
lean_object* x_146; 
lean_dec(x_17);
x_146 = lean_apply_3(x_18, x_1, x_2, x_3);
return x_146;
}
}
}
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_alphaEqv_match__3___rarg___boxed), 18, 0);
return x_2;
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv_match__3___rarg___boxed(lean_object** _args) {
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
lean_object* x_19; 
x_19 = l_Lean_IR_FnBody_alphaEqv_match__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
uint8_t l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_7);
lean_dec(x_1);
x_10 = 1;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_fget(x_5, x_7);
x_12 = lean_array_fget(x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = l_Lean_IR_CtorInfo_beq(x_13, x_15);
lean_dec(x_15);
lean_dec(x_13);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_1);
x_18 = 0;
return x_18;
}
else
{
uint8_t x_19; 
lean_inc(x_1);
x_19 = l_Lean_IR_FnBody_alphaEqv(x_1, x_14, x_16);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_1);
x_20 = 0;
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_7, x_21);
lean_dec(x_7);
x_4 = lean_box(0);
x_7 = x_22;
goto _start;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_24 = 0;
return x_24;
}
}
else
{
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_25 = 0;
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_11, 0);
lean_inc(x_26);
lean_dec(x_11);
x_27 = lean_ctor_get(x_12, 0);
lean_inc(x_27);
lean_dec(x_12);
lean_inc(x_1);
x_28 = l_Lean_IR_FnBody_alphaEqv(x_1, x_26, x_27);
if (x_28 == 0)
{
uint8_t x_29; 
lean_dec(x_7);
lean_dec(x_1);
x_29 = 0;
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_7, x_30);
lean_dec(x_7);
x_4 = lean_box(0);
x_7 = x_31;
goto _start;
}
}
}
}
}
}
uint8_t l_Lean_IR_FnBody_alphaEqv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 3);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_Lean_IR_IRType_beq(x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = l_Lean_IR_Expr_alphaEqv(x_1, x_6, x_10);
lean_dec(x_10);
lean_dec(x_6);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_15 = 0;
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_Lean_IR_addVarRename(x_1, x_4, x_8);
x_1 = x_16;
x_2 = x_7;
x_3 = x_11;
goto _start;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = 0;
return x_18;
}
}
case 1:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 3);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
lean_dec(x_3);
lean_inc(x_1);
x_27 = l_Lean_IR_addParamsRename(x_1, x_20, x_24);
lean_dec(x_24);
lean_dec(x_20);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_1);
x_28 = 0;
return x_28;
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_IR_FnBody_alphaEqv(x_29, x_21, x_25);
if (x_30 == 0)
{
uint8_t x_31; 
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_1);
x_31 = 0;
return x_31;
}
else
{
lean_object* x_32; 
x_32 = l_Lean_IR_addVarRename(x_1, x_19, x_23);
x_1 = x_32;
x_2 = x_22;
x_3 = x_26;
goto _start;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = 0;
return x_34;
}
}
case 2:
{
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_35 = lean_ctor_get(x_2, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_2, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_2, 3);
lean_inc(x_38);
lean_dec(x_2);
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_3, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_3, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_3, 3);
lean_inc(x_42);
lean_dec(x_3);
x_43 = l_Lean_IR_VarId_alphaEqv(x_1, x_35, x_39);
lean_dec(x_39);
lean_dec(x_35);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_1);
x_44 = 0;
return x_44;
}
else
{
uint8_t x_45; 
x_45 = lean_nat_dec_eq(x_36, x_40);
lean_dec(x_40);
lean_dec(x_36);
if (x_45 == 0)
{
uint8_t x_46; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_1);
x_46 = 0;
return x_46;
}
else
{
uint8_t x_47; 
x_47 = l_Lean_IR_Arg_alphaEqv(x_1, x_37, x_41);
lean_dec(x_41);
lean_dec(x_37);
if (x_47 == 0)
{
uint8_t x_48; 
lean_dec(x_42);
lean_dec(x_38);
lean_dec(x_1);
x_48 = 0;
return x_48;
}
else
{
x_2 = x_38;
x_3 = x_42;
goto _start;
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = 0;
return x_50;
}
}
case 3:
{
if (lean_obj_tag(x_3) == 3)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_51 = lean_ctor_get(x_2, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_2, 2);
lean_inc(x_53);
lean_dec(x_2);
x_54 = lean_ctor_get(x_3, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_3, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_3, 2);
lean_inc(x_56);
lean_dec(x_3);
x_57 = l_Lean_IR_VarId_alphaEqv(x_1, x_51, x_54);
lean_dec(x_54);
lean_dec(x_51);
if (x_57 == 0)
{
uint8_t x_58; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_1);
x_58 = 0;
return x_58;
}
else
{
uint8_t x_59; 
x_59 = lean_nat_dec_eq(x_52, x_55);
lean_dec(x_55);
lean_dec(x_52);
if (x_59 == 0)
{
uint8_t x_60; 
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_1);
x_60 = 0;
return x_60;
}
else
{
x_2 = x_53;
x_3 = x_56;
goto _start;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = 0;
return x_62;
}
}
case 4:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_63 = lean_ctor_get(x_2, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_2, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_2, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_2, 3);
lean_inc(x_66);
lean_dec(x_2);
x_67 = lean_ctor_get(x_3, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_3, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_3, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_3, 3);
lean_inc(x_70);
lean_dec(x_3);
x_71 = l_Lean_IR_VarId_alphaEqv(x_1, x_63, x_67);
lean_dec(x_67);
lean_dec(x_63);
if (x_71 == 0)
{
uint8_t x_72; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_1);
x_72 = 0;
return x_72;
}
else
{
uint8_t x_73; 
x_73 = lean_nat_dec_eq(x_64, x_68);
lean_dec(x_68);
lean_dec(x_64);
if (x_73 == 0)
{
uint8_t x_74; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_1);
x_74 = 0;
return x_74;
}
else
{
uint8_t x_75; 
x_75 = l_Lean_IR_VarId_alphaEqv(x_1, x_65, x_69);
lean_dec(x_69);
lean_dec(x_65);
if (x_75 == 0)
{
uint8_t x_76; 
lean_dec(x_70);
lean_dec(x_66);
lean_dec(x_1);
x_76 = 0;
return x_76;
}
else
{
x_2 = x_66;
x_3 = x_70;
goto _start;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = 0;
return x_78;
}
}
case 5:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_79 = lean_ctor_get(x_2, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_2, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_2, 2);
lean_inc(x_81);
x_82 = lean_ctor_get(x_2, 3);
lean_inc(x_82);
x_83 = lean_ctor_get(x_2, 4);
lean_inc(x_83);
x_84 = lean_ctor_get(x_2, 5);
lean_inc(x_84);
lean_dec(x_2);
x_85 = lean_ctor_get(x_3, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_3, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_3, 2);
lean_inc(x_87);
x_88 = lean_ctor_get(x_3, 3);
lean_inc(x_88);
x_89 = lean_ctor_get(x_3, 4);
lean_inc(x_89);
x_90 = lean_ctor_get(x_3, 5);
lean_inc(x_90);
lean_dec(x_3);
x_91 = l_Lean_IR_VarId_alphaEqv(x_1, x_79, x_85);
lean_dec(x_85);
lean_dec(x_79);
if (x_91 == 0)
{
uint8_t x_92; 
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_1);
x_92 = 0;
return x_92;
}
else
{
uint8_t x_93; 
x_93 = lean_nat_dec_eq(x_80, x_86);
lean_dec(x_86);
lean_dec(x_80);
if (x_93 == 0)
{
uint8_t x_94; 
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_1);
x_94 = 0;
return x_94;
}
else
{
uint8_t x_95; 
x_95 = lean_nat_dec_eq(x_81, x_87);
lean_dec(x_87);
lean_dec(x_81);
if (x_95 == 0)
{
uint8_t x_96; 
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_1);
x_96 = 0;
return x_96;
}
else
{
uint8_t x_97; 
x_97 = l_Lean_IR_VarId_alphaEqv(x_1, x_82, x_88);
lean_dec(x_88);
lean_dec(x_82);
if (x_97 == 0)
{
uint8_t x_98; 
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_1);
x_98 = 0;
return x_98;
}
else
{
uint8_t x_99; 
x_99 = l_Lean_IR_IRType_beq(x_83, x_89);
lean_dec(x_89);
lean_dec(x_83);
if (x_99 == 0)
{
uint8_t x_100; 
lean_dec(x_90);
lean_dec(x_84);
lean_dec(x_1);
x_100 = 0;
return x_100;
}
else
{
x_2 = x_84;
x_3 = x_90;
goto _start;
}
}
}
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = 0;
return x_102;
}
}
case 6:
{
if (lean_obj_tag(x_3) == 6)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; uint8_t x_119; 
x_103 = lean_ctor_get(x_2, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_2, 1);
lean_inc(x_104);
x_105 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_106 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 1);
x_107 = lean_ctor_get(x_2, 2);
lean_inc(x_107);
lean_dec(x_2);
x_108 = lean_ctor_get(x_3, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_3, 1);
lean_inc(x_109);
x_110 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_111 = lean_ctor_get_uint8(x_3, sizeof(void*)*3 + 1);
x_112 = lean_ctor_get(x_3, 2);
lean_inc(x_112);
lean_dec(x_3);
x_119 = l_Lean_IR_VarId_alphaEqv(x_1, x_103, x_108);
lean_dec(x_108);
lean_dec(x_103);
if (x_119 == 0)
{
uint8_t x_120; 
lean_dec(x_112);
lean_dec(x_109);
lean_dec(x_107);
lean_dec(x_104);
lean_dec(x_1);
x_120 = 0;
return x_120;
}
else
{
uint8_t x_121; 
x_121 = lean_nat_dec_eq(x_104, x_109);
lean_dec(x_109);
lean_dec(x_104);
if (x_121 == 0)
{
uint8_t x_122; 
lean_dec(x_112);
lean_dec(x_107);
lean_dec(x_1);
x_122 = 0;
return x_122;
}
else
{
if (x_105 == 0)
{
if (x_110 == 0)
{
lean_object* x_123; 
x_123 = lean_box(0);
x_113 = x_123;
goto block_118;
}
else
{
uint8_t x_124; 
lean_dec(x_112);
lean_dec(x_107);
lean_dec(x_1);
x_124 = 0;
return x_124;
}
}
else
{
if (x_110 == 0)
{
uint8_t x_125; 
lean_dec(x_112);
lean_dec(x_107);
lean_dec(x_1);
x_125 = 0;
return x_125;
}
else
{
lean_object* x_126; 
x_126 = lean_box(0);
x_113 = x_126;
goto block_118;
}
}
}
}
block_118:
{
lean_dec(x_113);
if (x_106 == 0)
{
if (x_111 == 0)
{
x_2 = x_107;
x_3 = x_112;
goto _start;
}
else
{
uint8_t x_115; 
lean_dec(x_112);
lean_dec(x_107);
lean_dec(x_1);
x_115 = 0;
return x_115;
}
}
else
{
if (x_111 == 0)
{
uint8_t x_116; 
lean_dec(x_112);
lean_dec(x_107);
lean_dec(x_1);
x_116 = 0;
return x_116;
}
else
{
x_2 = x_107;
x_3 = x_112;
goto _start;
}
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_127 = 0;
return x_127;
}
}
case 7:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; uint8_t x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; uint8_t x_136; lean_object* x_137; lean_object* x_138; uint8_t x_144; 
x_128 = lean_ctor_get(x_2, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_2, 1);
lean_inc(x_129);
x_130 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_131 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 1);
x_132 = lean_ctor_get(x_2, 2);
lean_inc(x_132);
lean_dec(x_2);
x_133 = lean_ctor_get(x_3, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 1);
lean_inc(x_134);
x_135 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_136 = lean_ctor_get_uint8(x_3, sizeof(void*)*3 + 1);
x_137 = lean_ctor_get(x_3, 2);
lean_inc(x_137);
lean_dec(x_3);
x_144 = l_Lean_IR_VarId_alphaEqv(x_1, x_128, x_133);
lean_dec(x_133);
lean_dec(x_128);
if (x_144 == 0)
{
uint8_t x_145; 
lean_dec(x_137);
lean_dec(x_134);
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_1);
x_145 = 0;
return x_145;
}
else
{
uint8_t x_146; 
x_146 = lean_nat_dec_eq(x_129, x_134);
lean_dec(x_134);
lean_dec(x_129);
if (x_146 == 0)
{
uint8_t x_147; 
lean_dec(x_137);
lean_dec(x_132);
lean_dec(x_1);
x_147 = 0;
return x_147;
}
else
{
if (x_130 == 0)
{
if (x_135 == 0)
{
lean_object* x_148; 
x_148 = lean_box(0);
x_138 = x_148;
goto block_143;
}
else
{
uint8_t x_149; 
lean_dec(x_137);
lean_dec(x_132);
lean_dec(x_1);
x_149 = 0;
return x_149;
}
}
else
{
if (x_135 == 0)
{
uint8_t x_150; 
lean_dec(x_137);
lean_dec(x_132);
lean_dec(x_1);
x_150 = 0;
return x_150;
}
else
{
lean_object* x_151; 
x_151 = lean_box(0);
x_138 = x_151;
goto block_143;
}
}
}
}
block_143:
{
lean_dec(x_138);
if (x_131 == 0)
{
if (x_136 == 0)
{
x_2 = x_132;
x_3 = x_137;
goto _start;
}
else
{
uint8_t x_140; 
lean_dec(x_137);
lean_dec(x_132);
lean_dec(x_1);
x_140 = 0;
return x_140;
}
}
else
{
if (x_136 == 0)
{
uint8_t x_141; 
lean_dec(x_137);
lean_dec(x_132);
lean_dec(x_1);
x_141 = 0;
return x_141;
}
else
{
x_2 = x_132;
x_3 = x_137;
goto _start;
}
}
}
}
else
{
uint8_t x_152; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_152 = 0;
return x_152;
}
}
case 8:
{
if (lean_obj_tag(x_3) == 8)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
x_153 = lean_ctor_get(x_2, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_2, 1);
lean_inc(x_154);
lean_dec(x_2);
x_155 = lean_ctor_get(x_3, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_3, 1);
lean_inc(x_156);
lean_dec(x_3);
x_157 = l_Lean_IR_VarId_alphaEqv(x_1, x_153, x_155);
lean_dec(x_155);
lean_dec(x_153);
if (x_157 == 0)
{
uint8_t x_158; 
lean_dec(x_156);
lean_dec(x_154);
lean_dec(x_1);
x_158 = 0;
return x_158;
}
else
{
x_2 = x_154;
x_3 = x_156;
goto _start;
}
}
else
{
uint8_t x_160; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_160 = 0;
return x_160;
}
}
case 9:
{
if (lean_obj_tag(x_3) == 9)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_161 = lean_ctor_get(x_2, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_2, 1);
lean_inc(x_162);
lean_dec(x_2);
x_163 = lean_ctor_get(x_3, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_3, 1);
lean_inc(x_164);
lean_dec(x_3);
x_165 = l_Lean_KVMap_eqv(x_161, x_163);
lean_dec(x_163);
lean_dec(x_161);
if (x_165 == 0)
{
uint8_t x_166; 
lean_dec(x_164);
lean_dec(x_162);
lean_dec(x_1);
x_166 = 0;
return x_166;
}
else
{
x_2 = x_162;
x_3 = x_164;
goto _start;
}
}
else
{
uint8_t x_168; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_168 = 0;
return x_168;
}
}
case 10:
{
if (lean_obj_tag(x_3) == 10)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_169 = lean_ctor_get(x_2, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_2, 1);
lean_inc(x_170);
x_171 = lean_ctor_get(x_2, 3);
lean_inc(x_171);
lean_dec(x_2);
x_172 = lean_ctor_get(x_3, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_3, 1);
lean_inc(x_173);
x_174 = lean_ctor_get(x_3, 3);
lean_inc(x_174);
lean_dec(x_3);
x_175 = lean_name_eq(x_169, x_172);
lean_dec(x_172);
lean_dec(x_169);
if (x_175 == 0)
{
uint8_t x_176; 
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_1);
x_176 = 0;
return x_176;
}
else
{
uint8_t x_177; 
x_177 = l_Lean_IR_VarId_alphaEqv(x_1, x_170, x_173);
lean_dec(x_173);
lean_dec(x_170);
if (x_177 == 0)
{
uint8_t x_178; 
lean_dec(x_174);
lean_dec(x_171);
lean_dec(x_1);
x_178 = 0;
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; uint8_t x_181; 
x_179 = lean_array_get_size(x_171);
x_180 = lean_array_get_size(x_174);
x_181 = lean_nat_dec_eq(x_179, x_180);
lean_dec(x_180);
lean_dec(x_179);
if (x_181 == 0)
{
uint8_t x_182; 
lean_dec(x_174);
lean_dec(x_171);
lean_dec(x_1);
x_182 = 0;
return x_182;
}
else
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_unsigned_to_nat(0u);
x_184 = l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1(x_1, x_171, x_174, lean_box(0), x_171, x_174, x_183);
lean_dec(x_174);
lean_dec(x_171);
return x_184;
}
}
}
}
else
{
uint8_t x_185; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_185 = 0;
return x_185;
}
}
case 11:
{
if (lean_obj_tag(x_3) == 11)
{
lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_186 = lean_ctor_get(x_2, 0);
lean_inc(x_186);
lean_dec(x_2);
x_187 = lean_ctor_get(x_3, 0);
lean_inc(x_187);
lean_dec(x_3);
x_188 = l_Lean_IR_Arg_alphaEqv(x_1, x_186, x_187);
lean_dec(x_187);
lean_dec(x_186);
lean_dec(x_1);
return x_188;
}
else
{
uint8_t x_189; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_189 = 0;
return x_189;
}
}
case 12:
{
if (lean_obj_tag(x_3) == 12)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_190 = lean_ctor_get(x_2, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_2, 1);
lean_inc(x_191);
lean_dec(x_2);
x_192 = lean_ctor_get(x_3, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_3, 1);
lean_inc(x_193);
lean_dec(x_3);
x_194 = lean_nat_dec_eq(x_190, x_192);
lean_dec(x_192);
lean_dec(x_190);
if (x_194 == 0)
{
uint8_t x_195; 
lean_dec(x_193);
lean_dec(x_191);
lean_dec(x_1);
x_195 = 0;
return x_195;
}
else
{
uint8_t x_196; 
x_196 = l_Lean_IR_args_alphaEqv(x_1, x_191, x_193);
lean_dec(x_193);
lean_dec(x_191);
lean_dec(x_1);
return x_196;
}
}
else
{
uint8_t x_197; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_197 = 0;
return x_197;
}
}
default: 
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 13)
{
uint8_t x_198; 
x_198 = 1;
return x_198;
}
else
{
uint8_t x_199; 
lean_dec(x_3);
x_199 = 0;
return x_199;
}
}
}
}
}
lean_object* l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = l_Array_isEqvAux___at_Lean_IR_FnBody_alphaEqv___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(x_8);
return x_9;
}
}
lean_object* l_Lean_IR_FnBody_alphaEqv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_FnBody_alphaEqv(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
uint8_t l_Lean_IR_FnBody_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_IR_FnBody_alphaEqv(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_FnBody_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_FnBody_beq(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_instBEqFnBody___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_FnBody_beq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instBEqFnBody() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_instBEqFnBody___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedVarIdSet() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_mkIf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instQuoteBool___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_mkIf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_instQuoteBool___closed__5;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
lean_object* l_Lean_IR_mkIf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = l_Lean_IR_mkIf___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = l_Lean_IR_mkIf___closed__2;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = l_Lean_Syntax_mkApp___closed__1;
x_9 = lean_array_push(x_8, x_5);
x_10 = lean_array_push(x_9, x_7);
x_11 = l_Lean_instQuoteBool___closed__2;
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_1);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set(x_13, 3, x_10);
return x_13;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_KVMap(lean_object*);
lean_object* initialize_Lean_Data_Name(lean_object*);
lean_object* initialize_Lean_Data_Format(lean_object*);
lean_object* initialize_Lean_Compiler_ExternAttr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_KVMap(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_instInhabitedVarId = _init_l_Lean_IR_instInhabitedVarId();
lean_mark_persistent(l_Lean_IR_instInhabitedVarId);
l_Lean_IR_instInhabitedJoinPointId = _init_l_Lean_IR_instInhabitedJoinPointId();
lean_mark_persistent(l_Lean_IR_instInhabitedJoinPointId);
l_Lean_IR_instToStringVarId___closed__1 = _init_l_Lean_IR_instToStringVarId___closed__1();
lean_mark_persistent(l_Lean_IR_instToStringVarId___closed__1);
l_Lean_IR_instToStringJoinPointId___closed__1 = _init_l_Lean_IR_instToStringJoinPointId___closed__1();
lean_mark_persistent(l_Lean_IR_instToStringJoinPointId___closed__1);
l_Lean_IR_MData_empty = _init_l_Lean_IR_MData_empty();
lean_mark_persistent(l_Lean_IR_MData_empty);
l_Lean_IR_instInhabitedIRType = _init_l_Lean_IR_instInhabitedIRType();
lean_mark_persistent(l_Lean_IR_instInhabitedIRType);
l_Lean_IR_IRType_instBEqIRType___closed__1 = _init_l_Lean_IR_IRType_instBEqIRType___closed__1();
lean_mark_persistent(l_Lean_IR_IRType_instBEqIRType___closed__1);
l_Lean_IR_IRType_instBEqIRType = _init_l_Lean_IR_IRType_instBEqIRType();
lean_mark_persistent(l_Lean_IR_IRType_instBEqIRType);
l_Lean_IR_instInhabitedArg___closed__1 = _init_l_Lean_IR_instInhabitedArg___closed__1();
lean_mark_persistent(l_Lean_IR_instInhabitedArg___closed__1);
l_Lean_IR_instInhabitedArg = _init_l_Lean_IR_instInhabitedArg();
lean_mark_persistent(l_Lean_IR_instInhabitedArg);
l_Lean_IR_instBEqArg___closed__1 = _init_l_Lean_IR_instBEqArg___closed__1();
lean_mark_persistent(l_Lean_IR_instBEqArg___closed__1);
l_Lean_IR_instBEqArg = _init_l_Lean_IR_instBEqArg();
lean_mark_persistent(l_Lean_IR_instBEqArg);
l_Lean_IR_instBEqLitVal___closed__1 = _init_l_Lean_IR_instBEqLitVal___closed__1();
lean_mark_persistent(l_Lean_IR_instBEqLitVal___closed__1);
l_Lean_IR_instBEqLitVal = _init_l_Lean_IR_instBEqLitVal();
lean_mark_persistent(l_Lean_IR_instBEqLitVal);
l_Lean_IR_instBEqCtorInfo___closed__1 = _init_l_Lean_IR_instBEqCtorInfo___closed__1();
lean_mark_persistent(l_Lean_IR_instBEqCtorInfo___closed__1);
l_Lean_IR_instBEqCtorInfo = _init_l_Lean_IR_instBEqCtorInfo();
lean_mark_persistent(l_Lean_IR_instBEqCtorInfo);
l_Lean_IR_instInhabitedParam___closed__1 = _init_l_Lean_IR_instInhabitedParam___closed__1();
lean_mark_persistent(l_Lean_IR_instInhabitedParam___closed__1);
l_Lean_IR_instInhabitedParam = _init_l_Lean_IR_instInhabitedParam();
lean_mark_persistent(l_Lean_IR_instInhabitedParam);
l_Lean_IR_instInhabitedFnBody = _init_l_Lean_IR_instInhabitedFnBody();
lean_mark_persistent(l_Lean_IR_instInhabitedFnBody);
l_Lean_IR_FnBody_nil = _init_l_Lean_IR_FnBody_nil();
lean_mark_persistent(l_Lean_IR_FnBody_nil);
l_Lean_IR_instInhabitedAlt___closed__1 = _init_l_Lean_IR_instInhabitedAlt___closed__1();
lean_mark_persistent(l_Lean_IR_instInhabitedAlt___closed__1);
l_Lean_IR_instInhabitedAlt = _init_l_Lean_IR_instInhabitedAlt();
lean_mark_persistent(l_Lean_IR_instInhabitedAlt);
l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1 = _init_l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1();
lean_mark_persistent(l_Lean_IR_AltCore_mmodifyBody___rarg___closed__1);
l_Lean_IR_reshapeAux___closed__1 = _init_l_Lean_IR_reshapeAux___closed__1();
lean_mark_persistent(l_Lean_IR_reshapeAux___closed__1);
l_Lean_IR_DeclInfo_sorryDep_x3f___default = _init_l_Lean_IR_DeclInfo_sorryDep_x3f___default();
lean_mark_persistent(l_Lean_IR_DeclInfo_sorryDep_x3f___default);
l_Lean_IR_instInhabitedDecl___closed__1 = _init_l_Lean_IR_instInhabitedDecl___closed__1();
lean_mark_persistent(l_Lean_IR_instInhabitedDecl___closed__1);
l_Lean_IR_instInhabitedDecl = _init_l_Lean_IR_instInhabitedDecl();
lean_mark_persistent(l_Lean_IR_instInhabitedDecl);
l_Lean_IR_Decl_updateBody_x21___closed__1 = _init_l_Lean_IR_Decl_updateBody_x21___closed__1();
lean_mark_persistent(l_Lean_IR_Decl_updateBody_x21___closed__1);
l_Lean_IR_Decl_updateBody_x21___closed__2 = _init_l_Lean_IR_Decl_updateBody_x21___closed__2();
lean_mark_persistent(l_Lean_IR_Decl_updateBody_x21___closed__2);
l_Lean_IR_Decl_updateBody_x21___closed__3 = _init_l_Lean_IR_Decl_updateBody_x21___closed__3();
lean_mark_persistent(l_Lean_IR_Decl_updateBody_x21___closed__3);
l_Lean_IR_Decl_updateBody_x21___closed__4 = _init_l_Lean_IR_Decl_updateBody_x21___closed__4();
lean_mark_persistent(l_Lean_IR_Decl_updateBody_x21___closed__4);
l_Lean_IR_instInhabitedIndexSet = _init_l_Lean_IR_instInhabitedIndexSet();
lean_mark_persistent(l_Lean_IR_instInhabitedIndexSet);
l_Lean_IR_instAlphaEqvVarId___closed__1 = _init_l_Lean_IR_instAlphaEqvVarId___closed__1();
lean_mark_persistent(l_Lean_IR_instAlphaEqvVarId___closed__1);
l_Lean_IR_instAlphaEqvVarId = _init_l_Lean_IR_instAlphaEqvVarId();
lean_mark_persistent(l_Lean_IR_instAlphaEqvVarId);
l_Lean_IR_instAlphaEqvArg___closed__1 = _init_l_Lean_IR_instAlphaEqvArg___closed__1();
lean_mark_persistent(l_Lean_IR_instAlphaEqvArg___closed__1);
l_Lean_IR_instAlphaEqvArg = _init_l_Lean_IR_instAlphaEqvArg();
lean_mark_persistent(l_Lean_IR_instAlphaEqvArg);
l_Lean_IR_instAlphaEqvArrayArg___closed__1 = _init_l_Lean_IR_instAlphaEqvArrayArg___closed__1();
lean_mark_persistent(l_Lean_IR_instAlphaEqvArrayArg___closed__1);
l_Lean_IR_instAlphaEqvArrayArg = _init_l_Lean_IR_instAlphaEqvArrayArg();
lean_mark_persistent(l_Lean_IR_instAlphaEqvArrayArg);
l_Lean_IR_instAlphaEqvExpr___closed__1 = _init_l_Lean_IR_instAlphaEqvExpr___closed__1();
lean_mark_persistent(l_Lean_IR_instAlphaEqvExpr___closed__1);
l_Lean_IR_instAlphaEqvExpr = _init_l_Lean_IR_instAlphaEqvExpr();
lean_mark_persistent(l_Lean_IR_instAlphaEqvExpr);
l_Lean_IR_instBEqFnBody___closed__1 = _init_l_Lean_IR_instBEqFnBody___closed__1();
lean_mark_persistent(l_Lean_IR_instBEqFnBody___closed__1);
l_Lean_IR_instBEqFnBody = _init_l_Lean_IR_instBEqFnBody();
lean_mark_persistent(l_Lean_IR_instBEqFnBody);
l_Lean_IR_instInhabitedVarIdSet = _init_l_Lean_IR_instInhabitedVarIdSet();
lean_mark_persistent(l_Lean_IR_instInhabitedVarIdSet);
l_Lean_IR_mkIf___closed__1 = _init_l_Lean_IR_mkIf___closed__1();
lean_mark_persistent(l_Lean_IR_mkIf___closed__1);
l_Lean_IR_mkIf___closed__2 = _init_l_Lean_IR_mkIf___closed__2();
lean_mark_persistent(l_Lean_IR_mkIf___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
