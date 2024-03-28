// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom___024root.h"

VL_ATTR_COLD void Vrandom___024root___eval_static__TOP(Vrandom___024root* vlSelf);

VL_ATTR_COLD void Vrandom___024root___eval_static(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_static\n"); );
    // Body
    Vrandom___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vrandom___024root___eval_static__TOP(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->random__DOT__x = 1U;
}

VL_ATTR_COLD void Vrandom___024root___eval_initial(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__ctrl = vlSelf->ctrl;
}

VL_ATTR_COLD void Vrandom___024root___eval_final(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrandom___024root___eval_triggers__stl(Vrandom___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__stl(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___eval_stl(Vrandom___024root* vlSelf);

VL_ATTR_COLD void Vrandom___024root___eval_settle(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrandom___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrandom___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/xiaolu/文档/大学/ysyx/预学习/verilog/6、移位寄存器/vsrc/random.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrandom___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__stl(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vrandom__ConstPool__TABLE_h1f93ebb4_0;

VL_ATTR_COLD void Vrandom___024root___stl_sequent__TOP__0(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->random__DOT__tmp = ((0x80U & (VL_REDXOR_8(
                                                      (0x1dU 
                                                       & (IData)(vlSelf->random__DOT__x))) 
                                          << 7U)) | 
                                (0x7fU & ((IData)(vlSelf->random__DOT__x) 
                                          >> 1U)));
    __Vtableidx1 = (0xfU & (IData)(vlSelf->random__DOT__x));
    vlSelf->seg_1 = Vrandom__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->random__DOT__x) 
                            >> 4U));
    vlSelf->seg_2 = Vrandom__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vrandom___024root___eval_stl(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrandom___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__act(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ctrl)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__nba(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ctrl)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrandom___024root___ctor_var_reset(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ctrl = 0;
    vlSelf->seg_1 = 0;
    vlSelf->seg_2 = 0;
    vlSelf->random__DOT__x = 0;
    vlSelf->random__DOT__tmp = 0;
    vlSelf->random__DOT__tmp_seg1 = 0;
    vlSelf->random__DOT__tmp_seg2 = 0;
    vlSelf->__Vtrigrprev__TOP__ctrl = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
