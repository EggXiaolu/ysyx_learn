// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

extern const VlUnpacked<CData/*7:0*/, 16> VALU__ConstPool__TABLE_h06df57dd_0;

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->ALU__DOT__a_sub_b = (0xfU & ((IData)(1U) 
                                         + ((IData)(vlSelf->a) 
                                            + (~ (IData)(vlSelf->b)))));
    vlSelf->ALU__DOT__my_adder__DOT__sub_b = (0xfU 
                                              & ((IData)(vlSelf->b) 
                                                 ^ 
                                                 (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->op))))));
    vlSelf->carry = (1U & (((IData)(vlSelf->a) + ((IData)(vlSelf->ALU__DOT__my_adder__DOT__sub_b) 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->op)))) 
                           >> 4U));
    vlSelf->ALU__DOT__y_tmp = (0xfU & ((IData)(vlSelf->a) 
                                       + ((IData)(vlSelf->ALU__DOT__my_adder__DOT__sub_b) 
                                          + (1U & (IData)(vlSelf->op)))));
    vlSelf->zero = (0U == (IData)(vlSelf->ALU__DOT__y_tmp));
    vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                >> 3U)) == (1U & ((IData)(vlSelf->ALU__DOT__my_adder__DOT__sub_b) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(vlSelf->ALU__DOT__y_tmp) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->a) 
                                               >> 3U))));
    vlSelf->ALU__DOT__y = (0xfU & ((4U & (IData)(vlSelf->op))
                                    ? ((2U & (IData)(vlSelf->op))
                                        ? ((1U & (IData)(vlSelf->op))
                                            ? (((IData)(vlSelf->a) 
                                                == (IData)(vlSelf->b))
                                                ? 1U
                                                : 0U)
                                            : ((8U 
                                                & (IData)(vlSelf->ALU__DOT__a_sub_b))
                                                ? 1U
                                                : 0U))
                                        : ((1U & (IData)(vlSelf->op))
                                            ? ((IData)(vlSelf->a) 
                                               ^ (IData)(vlSelf->b))
                                            : ((IData)(vlSelf->a) 
                                               | (IData)(vlSelf->b))))
                                    : ((2U & (IData)(vlSelf->op))
                                        ? ((1U & (IData)(vlSelf->op))
                                            ? ((IData)(vlSelf->a) 
                                               & (IData)(vlSelf->b))
                                            : (~ (IData)(vlSelf->a)))
                                        : (IData)(vlSelf->ALU__DOT__y_tmp))));
    if ((8U & (IData)(vlSelf->ALU__DOT__y))) {
        vlSelf->seg2 = 0xfdU;
    } else if ((1U & (~ ((IData)(vlSelf->ALU__DOT__y) 
                         >> 3U)))) {
        vlSelf->seg2 = 0U;
    }
    __Vtableidx1 = vlSelf->ALU__DOT__y;
    vlSelf->seg1 = VALU__ConstPool__TABLE_h06df57dd_0
        [__Vtableidx1];
}

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
}

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
}

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
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
        VALU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/3、加法器/vsrc/ALU.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALU___024root___eval_ico(vlSelf);
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
            VALU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/3、加法器/vsrc/ALU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/3、加法器/vsrc/ALU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
