// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandom__Syms.h"


VL_ATTR_COLD void Vrandom___024root__trace_init_sub__TOP__0(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"ctrl", false,-1);
    tracep->declBus(c+6,"seg_1", false,-1, 7,0);
    tracep->declBus(c+7,"seg_2", false,-1, 7,0);
    tracep->pushNamePrefix("random ");
    tracep->declBit(c+5,"ctrl", false,-1);
    tracep->declBus(c+6,"seg_1", false,-1, 7,0);
    tracep->declBus(c+7,"seg_2", false,-1, 7,0);
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"tmp", false,-1, 7,0);
    tracep->declBus(c+8,"tmp_seg1", false,-1, 7,0);
    tracep->declBus(c+9,"tmp_seg2", false,-1, 7,0);
    tracep->pushNamePrefix("ins1 ");
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"y", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sge1 ");
    tracep->declBus(c+3,"b", false,-1, 3,0);
    tracep->declBus(c+6,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sge2 ");
    tracep->declBus(c+4,"b", false,-1, 3,0);
    tracep->declBus(c+7,"h", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrandom___024root__trace_init_top(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_init_top\n"); );
    // Body
    Vrandom___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrandom___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrandom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrandom___024root__trace_register(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrandom___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrandom___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrandom___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrandom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_full_top_0\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrandom___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->random__DOT__x),8);
    bufp->fullCData(oldp+2,(((0x80U & (VL_REDXOR_8(
                                                   (0x1dU 
                                                    & (IData)(vlSelf->random__DOT__x))) 
                                       << 7U)) | (0x7fU 
                                                  & ((IData)(vlSelf->random__DOT__x) 
                                                     >> 1U)))),8);
    bufp->fullCData(oldp+3,((0xfU & (IData)(vlSelf->random__DOT__x))),4);
    bufp->fullCData(oldp+4,((0xfU & ((IData)(vlSelf->random__DOT__x) 
                                     >> 4U))),4);
    bufp->fullBit(oldp+5,(vlSelf->ctrl));
    bufp->fullCData(oldp+6,(vlSelf->seg_1),8);
    bufp->fullCData(oldp+7,(vlSelf->seg_2),8);
    bufp->fullCData(oldp+8,(vlSelf->random__DOT__tmp_seg1),8);
    bufp->fullCData(oldp+9,(vlSelf->random__DOT__tmp_seg2),8);
}
