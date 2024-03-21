// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode83__Syms.h"


void Vencode83___024root__trace_chg_sub_0(Vencode83___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vencode83___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root__trace_chg_top_0\n"); );
    // Init
    Vencode83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode83___024root*>(voidSelf);
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vencode83___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vencode83___024root__trace_chg_sub_0(Vencode83___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->x),8);
    bufp->chgBit(oldp+1,(vlSelf->en));
    bufp->chgCData(oldp+2,(vlSelf->y),3);
    bufp->chgCData(oldp+3,(vlSelf->h),8);
    bufp->chgIData(oldp+4,(vlSelf->encode83__DOT__unnamedblk1__DOT__i),32);
}

void Vencode83___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root__trace_cleanup\n"); );
    // Init
    Vencode83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode83___024root*>(voidSelf);
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
