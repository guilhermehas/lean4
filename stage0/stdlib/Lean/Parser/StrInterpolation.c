// Lean compiler output
// Module: Lean.Parser.StrInterpolation
// Imports: Init Lean.Parser.Basic
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
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStrNoAntiquot___closed__1;
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_Parser_ParserState_hasError___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn_parse___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLitFnAux___closed__1;
lean_object* l_Lean_Parser_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStr___elambda__1___closed__1;
lean_object* l_Lean_Parser_interpolatedStr___elambda__1___closed__2;
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn_parse___closed__2;
lean_object* l_Lean_Parser_interpolatedStrFn___closed__1;
lean_object* l_Lean_Parser_interpolatedStrFn_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn_parse___closed__1;
lean_object* l_Lean_Parser_interpolatedStrNoAntiquot(lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn_parse___closed__3;
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
uint8_t l_Lean_Parser_isQuotableCharForStrInterpolant(uint32_t);
extern lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__1;
extern lean_object* l_termS_x21_____closed__5;
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStr(lean_object*);
lean_object* l_Lean_Parser_interpolatedStr___closed__1;
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
uint8_t l_Lean_Parser_interpolatedStrFn_parse___lambda__1(uint32_t);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStr___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_isQuotableCharForStrInterpolant___boxed(lean_object*);
lean_object* l_Lean_Parser_interpolatedStrFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrLitKind;
uint8_t l_Lean_Parser_isQuotableCharForStrInterpolant(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 123;
x_3 = x_1 == x_2;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = l_Lean_Parser_isQuotableCharDefault(x_1);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
}
}
lean_object* l_Lean_Parser_isQuotableCharForStrInterpolant___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Parser_isQuotableCharForStrInterpolant(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_Parser_interpolatedStrFn_parse___lambda__1(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 125;
x_3 = x_1 == x_2;
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrFn_parse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStrFn_parse___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrFn_parse___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected '}'");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrFn_parse___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_isQuotableCharForStrInterpolant___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_interpolatedStrFn_parse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
x_8 = lean_string_utf8_at_end(x_2, x_7);
if (x_8 == 0)
{
uint32_t x_9; lean_object* x_10; lean_object* x_11; uint32_t x_12; uint8_t x_13; 
x_9 = lean_string_utf8_get(x_2, x_7);
x_10 = lean_string_utf8_next(x_2, x_7);
lean_dec(x_7);
x_11 = l_Lean_Parser_ParserState_setPos(x_6, x_10);
x_12 = 34;
x_13 = x_9 == x_12;
if (x_13 == 0)
{
uint32_t x_14; uint8_t x_15; 
x_14 = 92;
x_15 = x_9 == x_14;
if (x_15 == 0)
{
uint32_t x_16; uint8_t x_17; 
x_16 = 123;
x_17 = x_9 == x_16;
if (x_17 == 0)
{
x_6 = x_11;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = l_Lean_interpolatedStrLitKind;
x_20 = l_Lean_Parser_mkNodeToken(x_19, x_4, x_5, x_11);
lean_inc(x_1);
lean_inc(x_5);
x_21 = lean_apply_2(x_1, x_5, x_20);
x_22 = lean_ctor_get(x_21, 4);
lean_inc(x_22);
x_23 = lean_box(0);
x_24 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_Parser_ParserState_hasError___spec__1(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_21, 2);
lean_inc(x_25);
x_26 = l_Lean_Parser_interpolatedStrFn_parse___closed__1;
x_27 = l_Lean_Parser_interpolatedStrFn_parse___closed__2;
x_28 = l_Lean_Parser_satisfyFn(x_26, x_27, x_5, x_21);
x_29 = lean_ctor_get(x_28, 4);
lean_inc(x_29);
x_30 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_Parser_ParserState_hasError___spec__1(x_29, x_23);
lean_dec(x_29);
if (x_30 == 0)
{
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_28;
}
else
{
x_4 = x_25;
x_6 = x_28;
goto _start;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = l_Lean_Parser_interpolatedStrFn_parse___closed__3;
x_33 = l_Lean_Parser_quotedCharCoreFn(x_32, x_5, x_11);
x_34 = lean_ctor_get(x_33, 4);
lean_inc(x_34);
x_35 = lean_box(0);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_631____at_Lean_Parser_ParserState_hasError___spec__1(x_34, x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_33;
}
else
{
x_6 = x_33;
goto _start;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_1);
x_38 = l_Lean_interpolatedStrLitKind;
x_39 = l_Lean_Parser_mkNodeToken(x_38, x_4, x_5, x_11);
lean_dec(x_5);
x_40 = l_Lean_interpolatedStrKind;
x_41 = l_Lean_Parser_ParserState_mkNode(x_39, x_40, x_3);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_42 = l_Lean_Parser_strLitFnAux___closed__1;
x_43 = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(x_6, x_42, x_4);
return x_43;
}
}
}
lean_object* l_Lean_Parser_interpolatedStrFn_parse___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Parser_interpolatedStrFn_parse___lambda__1(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_interpolatedStrFn_parse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_interpolatedStrFn_parse(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("interpolated string");
return x_1;
}
}
lean_object* l_Lean_Parser_interpolatedStrFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
x_9 = lean_string_utf8_at_end(x_5, x_8);
if (x_9 == 0)
{
uint32_t x_10; uint32_t x_11; uint8_t x_12; 
x_10 = lean_string_utf8_get(x_5, x_8);
x_11 = 34;
x_12 = x_10 == x_11;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Parser_interpolatedStrFn___closed__1;
x_14 = l_Lean_Parser_ParserState_mkError(x_3, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Parser_ParserState_next(x_3, x_5, x_8);
x_16 = l_Lean_Parser_interpolatedStrFn_parse(x_1, x_5, x_7, x_8, x_2, x_15);
lean_dec(x_5);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_19 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_18, x_17);
return x_19;
}
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_termS_x21_____closed__5;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_interpolatedStrNoAntiquot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStrFn), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Parser_interpolatedStrNoAntiquot___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStr___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_interpolatedStrKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStr___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_termS_x21_____closed__5;
x_2 = l_Lean_Parser_interpolatedStr___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_interpolatedStr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_Parser_interpolatedStr___elambda__1___closed__2;
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Lean_Parser_tryAnti(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_apply_2(x_1, x_2, x_3);
return x_7;
}
else
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
x_9 = l_Lean_Parser_orelseFnCore(x_5, x_1, x_8, x_2, x_3);
return x_9;
}
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_interpolatedStr___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_interpolatedStrNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_interpolatedStr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStrFn), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStr___elambda__1), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_Parser_interpolatedStr___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_StrInterpolation(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_interpolatedStrFn_parse___closed__1 = _init_l_Lean_Parser_interpolatedStrFn_parse___closed__1();
lean_mark_persistent(l_Lean_Parser_interpolatedStrFn_parse___closed__1);
l_Lean_Parser_interpolatedStrFn_parse___closed__2 = _init_l_Lean_Parser_interpolatedStrFn_parse___closed__2();
lean_mark_persistent(l_Lean_Parser_interpolatedStrFn_parse___closed__2);
l_Lean_Parser_interpolatedStrFn_parse___closed__3 = _init_l_Lean_Parser_interpolatedStrFn_parse___closed__3();
lean_mark_persistent(l_Lean_Parser_interpolatedStrFn_parse___closed__3);
l_Lean_Parser_interpolatedStrFn___closed__1 = _init_l_Lean_Parser_interpolatedStrFn___closed__1();
lean_mark_persistent(l_Lean_Parser_interpolatedStrFn___closed__1);
l_Lean_Parser_interpolatedStrNoAntiquot___closed__1 = _init_l_Lean_Parser_interpolatedStrNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_interpolatedStrNoAntiquot___closed__1);
l_Lean_Parser_interpolatedStr___elambda__1___closed__1 = _init_l_Lean_Parser_interpolatedStr___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_interpolatedStr___elambda__1___closed__1);
l_Lean_Parser_interpolatedStr___elambda__1___closed__2 = _init_l_Lean_Parser_interpolatedStr___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_interpolatedStr___elambda__1___closed__2);
l_Lean_Parser_interpolatedStr___closed__1 = _init_l_Lean_Parser_interpolatedStr___closed__1();
lean_mark_persistent(l_Lean_Parser_interpolatedStr___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
