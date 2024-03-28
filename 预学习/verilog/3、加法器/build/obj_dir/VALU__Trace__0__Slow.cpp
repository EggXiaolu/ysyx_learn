// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+7,"op", false,-1, 2,0);
    tracep->declBus(c+8,"a", false,-1, 3,0);
    tracep->declBus(c+9,"b", false,-1, 3,0);
    tracep->declBus(c+10,"seg1", false,-1, 7,0);
    tracep->declBus(c+11,"seg2", false,-1, 7,0);
    tracep->declBit(c+12,"overflow", false,-1);
    tracep->declBit(c+13,"carry", false,-1);
    tracep->declBit(c+14,"zero", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+7,"op", false,-1, 2,0);
    tracep->declBus(c+8,"a", false,-1, 3,0);
    tracep->declBus(c+9,"b", false,-1, 3,0);
    tracep->declBus(c+10,"seg1", false,-1, 7,0);
    tracep->declBus(c+11,"seg2", false,-1, 7,0);
    tracep->declBit(c+12,"overflow", false,-1);
    tracep->declBit(c+13,"carry", false,-1);
    tracep->declBit(c+14,"zero", false,-1);
    tracep->declBus(c+1,"y", false,-1, 3,0);
    tracep->declBus(c+2,"y_tmp", false,-1, 3,0);
    tracep->declBus(c+3,"a_sub_b", false,-1, 3,0);
    tracep->declBit(c+15,"is_sub", false,-1);
    tracep->declBit(c+16,"overflow1", false,-1);
    tracep->declBit(c+17,"carry1", false,-1);
    tracep->declBit(c+4,"zero1", false,-1);
    tracep->pushNamePrefix("my_adder ");
    tracep->declBit(c+18,"sub", false,-1);
    tracep->declBus(c+8,"a", false,-1, 3,0);
    tracep->declBus(c+9,"b", false,-1, 3,0);
    tracep->declBus(c+2,"y", false,-1, 3,0);
    tracep->declBit(c+12,"overflow", false,-1);
    tracep->declBit(c+13,"carry", false,-1);
    tracep->declBit(c+14,"zero", false,-1);
    tracep->declBus(c+5,"sub_b", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg_1 ");
    tracep->declBus(c+1,"b", false,-1, 3,0);
    tracep->declBus(c+10,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg_2 ");
    tracep->declBit(c+6,"b", false,-1);
    tracep->declBus(c+11,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub ");
    tracep->declBit(c+20,"sub", false,-1);
    tracep->declBus(c+8,"a", false,-1, 3,0);
    tracep->declBus(c+9,"b", false,-1, 3,0);
    tracep->declBus(c+3,"y", false,-1, 3,0);
    tracep->declBit(c+16,"overflow", false,-1);
    tracep->declBit(c+17,"carry", false,-1);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBus(c+19,"sub_b", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ALU__DOT__y),4);
    bufp->fullCData(oldp+2,(vlSelf->ALU__DOT__y_tmp),4);
    bufp->fullCData(oldp+3,(vlSelf->ALU__DOT__a_sub_b),4);
    bufp->fullBit(oldp+4,((0U == (IData)(vlSelf->ALU__DOT__a_sub_b))));
    bufp->fullCData(oldp+5,(vlSelf->ALU__DOT__my_adder__DOT__sub_b),4);
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->ALU__DOT__y) 
                                 >> 3U))));
    bufp->fullCData(oldp+7,(vlSelf->op),3);
    bufp->fullCData(oldp+8,(vlSelf->a),4);
    bufp->fullCData(oldp+9,(vlSelf->b),4);
    bufp->fullCData(oldp+10,(vlSelf->seg1),8);
    bufp->fullCData(oldp+11,(vlSelf->seg2),8);
    bufp->fullBit(oldp+12,(vlSelf->overflow));
    bufp->fullBit(oldp+13,(vlSelf->carry));
    bufp->fullBit(oldp+14,(vlSelf->zero));
    bufp->fullBit(oldp+15,((1U & (IData)(vlSelf->op))));
    bufp->fullBit(oldp+16,((((1U & ((IData)(vlSelf->a) 
                                    >> 3U)) == (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->b) 
                                                    >> 3U)))) 
                            & ((1U & ((IData)(vlSelf->ALU__DOT__a_sub_b) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->a) 
                                                     >> 3U))))));
    bufp->fullBit(oldp+17,((1U & (((IData)(1U) + ((IData)(vlSelf->a) 
                                                  + 
                                                  (0xfU 
                                                   & (~ (IData)(vlSelf->b))))) 
                                  >> 4U))));
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->op))));
    bufp->fullCData(oldp+19,((0xfU & (~ (IData)(vlSelf->b)))),4);
    bufp->fullBit(oldp+20,(1U));
}
