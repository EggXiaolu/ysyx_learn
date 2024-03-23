// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "verilated.h"

#include "VFSM_bin___024root.h"

VL_ATTR_COLD void VFSM_bin___024root___eval_static(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFSM_bin___024root___eval_initial__TOP(VFSM_bin___024root* vlSelf);

VL_ATTR_COLD void VFSM_bin___024root___eval_initial(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_initial\n"); );
    // Body
    VFSM_bin___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VFSM_bin___024root___eval_initial__TOP(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[4U] = 4U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[5U] = 4U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[6U] = 3U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[7U] = 2U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[0U] = 0x81U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[1U] = 0x71U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[2U] = 0x61U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[3U] = 0x51U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[4U] = 0x44U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[5U] = 0x34U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[6U] = 0x23U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[7U] = 0x12U;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[8U] = 1U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[0U] = 0x11U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[1U] = 0xeU;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[2U] = 0xcU;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[4U] = 9U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[5U] = 6U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[6U] = 4U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[7U] = 2U;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[8U] = 0U;
    vlSelf->clk = 0U;
    vlSelf->in = 0U;
    vlSelf->reset = 0U;
}

VL_ATTR_COLD void VFSM_bin___024root___eval_final(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_final\n"); );
}

VL_ATTR_COLD void VFSM_bin___024root___eval_triggers__stl(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf);

VL_ATTR_COLD void VFSM_bin___024root___eval_settle(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VFSM_bin___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/7、状态机/vsrc/FSM_bin.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VFSM_bin___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___stl_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
            == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
           == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [6U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [7U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->FSM_bin__DOT__state_dout) 
               == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
               [8U]) & vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->out = ((IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit) 
                   & (IData)(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                       == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
           == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->FSM_bin__DOT__state_dout) 
                          == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->FSM_bin__DOT__state_dout) 
              == vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->FSM_bin__DOT__state_din = ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit)
                                        ? (IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out)
                                        : 0U);
}

VL_ATTR_COLD void VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VFSM_bin___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__nba(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___ctor_var_reset(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->in = 0;
    vlSelf->reset = 0;
    vlSelf->out = 0;
    vlSelf->FSM_bin__DOT__state_din = 0;
    vlSelf->FSM_bin__DOT__state_dout = 0;
    vlSelf->FSM_bin__DOT__state_wen = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
