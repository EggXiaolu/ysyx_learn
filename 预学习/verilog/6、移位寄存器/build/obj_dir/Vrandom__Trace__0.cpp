// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandom__Syms.h"


void Vrandom___024root__trace_chg_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrandom___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_chg_top_0\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrandom___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrandom___024root__trace_chg_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->random__DOT__x),8);
        bufp->chgCData(oldp+1,(((0x80U & (VL_REDXOR_8(
                                                      (0x1dU 
                                                       & (IData)(vlSelf->random__DOT__x))) 
                                          << 7U)) | 
                                (0x7fU & ((IData)(vlSelf->random__DOT__x) 
                                          >> 1U)))),8);
        bufp->chgCData(oldp+2,((0xfU & (IData)(vlSelf->random__DOT__x))),4);
        bufp->chgCData(oldp+3,((0xfU & ((IData)(vlSelf->random__DOT__x) 
                                        >> 4U))),4);
    }
    bufp->chgBit(oldp+4,(vlSelf->ctrl));
    bufp->chgCData(oldp+5,(vlSelf->seg_1),8);
    bufp->chgCData(oldp+6,(vlSelf->seg_2),8);
}

void Vrandom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_cleanup\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
