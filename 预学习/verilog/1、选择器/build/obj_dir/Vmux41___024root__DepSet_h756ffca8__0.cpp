// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41.h for the primary calling header

#include "verilated.h"

#include "Vmux41___024root.h"

VL_INLINE_OPT void Vmux41___024root___ico_sequent__TOP__0(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xcU | (3U & ((IData)(vlSelf->a) >> 6U)));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (8U | (3U & ((IData)(vlSelf->a) >> 4U)));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (4U | (3U & ((IData)(vlSelf->a) >> 2U)));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (3U & (IData)(vlSelf->a));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & ((IData)(vlSelf->a) >> 6U));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & ((IData)(vlSelf->a) >> 4U));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & ((IData)(vlSelf->a) >> 2U));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & (IData)(vlSelf->a));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->s) == vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->s) 
                                                 == 
                                                 vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->s) 
                                                    == 
                                                    vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                        [2U]))) & vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list
            [2U]));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->s) 
                                                    == 
                                                    vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                                                    [2U]));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                        [3U]))) & vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list
            [3U]));
    vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->s) 
                                                    == 
                                                    vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list
                                                    [3U]));
    vlSelf->y = ((IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit)
                  ? (IData)(vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out)
                  : 0U);
}

void Vmux41___024root___eval_ico(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmux41___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmux41___024root___eval_act(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_act\n"); );
}

void Vmux41___024root___eval_nba(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_nba\n"); );
}

void Vmux41___024root___eval_triggers__ico(Vmux41___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__ico(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41___024root___eval_triggers__act(Vmux41___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__act(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__nba(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux41___024root___eval(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmux41___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmux41___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/1.选择器/vsrc/mux41.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmux41___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmux41___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux41___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/1.选择器/vsrc/mux41.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmux41___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux41___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/1.选择器/vsrc/mux41.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux41___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmux41___024root___eval_debug_assertions(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
