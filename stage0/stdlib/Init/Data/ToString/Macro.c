// Lean compiler output
// Module: Init.Data.ToString.Macro
// Imports: Init.Meta Init.Data.ToString.Basic
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
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23_(lean_object*, lean_object*, lean_object*);
lean_object* l_termS_x21_____closed__7;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7;
lean_object* l_termS_x21_____closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_termS_x21_____closed__2;
extern lean_object* l_Lean_instQuoteSubstring___closed__1;
extern lean_object* l_Lean_instQuoteSubstring___closed__2;
lean_object* l_Lean_Syntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3;
lean_object* l_termS_x21_____closed__6;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6;
lean_object* l_termS_x21_____closed__5;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__10;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1;
extern lean_object* l_termDepIfThenElse___closed__14;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13;
lean_object* l_termS_x21_____closed__9;
lean_object* l_termS_x21_____closed__1;
lean_object* l_termS_x21_____closed__4;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8;
lean_object* l_termS_x21_____closed__8;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11;
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_termS_x21__;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_myMacro____x40_Init_Notation___hyg_15637__expandListLit___spec__1(lean_object*, lean_object*);
static lean_object* _init_l_termS_x21_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termS!_");
return x_1;
}
}
static lean_object* _init_l_termS_x21_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_termS_x21_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_termS_x21_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("s!");
return x_1;
}
}
static lean_object* _init_l_termS_x21_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_termS_x21_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_termS_x21_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("interpolatedStr");
return x_1;
}
}
static lean_object* _init_l_termS_x21_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_termS_x21_____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_termS_x21_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_termS_x21_____closed__6;
x_2 = l_termDepIfThenElse___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_termS_x21_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Syntax_addPrec___closed__10;
x_2 = l_termS_x21_____closed__4;
x_3 = l_termS_x21_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_termS_x21_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_termS_x21_____closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_termS_x21_____closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_termS_x21__() {
_start:
{
lean_object* x_1; 
x_1 = l_termS_x21_____closed__9;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instQuoteSubstring___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_instQuoteSubstring___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_instQuoteSubstring___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("toString");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ToString");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10;
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_23_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_termS_x21_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_myMacro____x40_Init_Notation___hyg_15637__expandListLit___spec__1(x_2, x_3);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = l_Lean_instQuoteSubstring___closed__2;
lean_inc(x_13);
lean_inc(x_14);
x_16 = l_Lean_addMacroScope(x_14, x_15, x_13);
x_17 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2;
x_18 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4;
x_19 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_myMacro____x40_Init_Notation___hyg_15637__expandListLit___spec__1(x_2, x_12);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8;
x_24 = l_Lean_addMacroScope(x_14, x_23, x_13);
x_25 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7;
x_26 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13;
x_27 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_27, 3, x_26);
x_28 = l_Lean_Syntax_expandInterpolatedStr(x_9, x_19, x_27, x_2, x_22);
lean_dec(x_9);
return x_28;
}
}
}
lean_object* initialize_Init_Meta(lean_object*);
lean_object* initialize_Init_Data_ToString_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_ToString_Macro(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_termS_x21_____closed__1 = _init_l_termS_x21_____closed__1();
lean_mark_persistent(l_termS_x21_____closed__1);
l_termS_x21_____closed__2 = _init_l_termS_x21_____closed__2();
lean_mark_persistent(l_termS_x21_____closed__2);
l_termS_x21_____closed__3 = _init_l_termS_x21_____closed__3();
lean_mark_persistent(l_termS_x21_____closed__3);
l_termS_x21_____closed__4 = _init_l_termS_x21_____closed__4();
lean_mark_persistent(l_termS_x21_____closed__4);
l_termS_x21_____closed__5 = _init_l_termS_x21_____closed__5();
lean_mark_persistent(l_termS_x21_____closed__5);
l_termS_x21_____closed__6 = _init_l_termS_x21_____closed__6();
lean_mark_persistent(l_termS_x21_____closed__6);
l_termS_x21_____closed__7 = _init_l_termS_x21_____closed__7();
lean_mark_persistent(l_termS_x21_____closed__7);
l_termS_x21_____closed__8 = _init_l_termS_x21_____closed__8();
lean_mark_persistent(l_termS_x21_____closed__8);
l_termS_x21_____closed__9 = _init_l_termS_x21_____closed__9();
lean_mark_persistent(l_termS_x21_____closed__9);
l_termS_x21__ = _init_l_termS_x21__();
lean_mark_persistent(l_termS_x21__);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__1);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__2);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__3);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__4);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__5);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__6);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__7);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__8);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__9);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__10);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__11);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__12);
l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13 = _init_l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13();
lean_mark_persistent(l_myMacro____x40_Init_Data_ToString_Macro___hyg_23____closed__13);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
