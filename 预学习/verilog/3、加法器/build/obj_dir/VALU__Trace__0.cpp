// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->ALU__DOT__y),4);
        bufp->chgCData(oldp+1,(vlSelf->ALU__DOT__y_tmp),4);
        bufp->chgCData(oldp+2,(vlSelf->ALU__DOT__a_sub_b),4);
        bufp->chgBit(oldp+3,((0U == (IData)(vlSelf->ALU__DOT__a_sub_b))));
        bufp->chgCData(oldp+4,(vlSelf->ALU__DOT__my_adder__DOT__sub_b),4);
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->ALU__DOT__y) 
                                    >> 3U))));
    }
    bufp->chgCData(oldp+6,(vlSelf->op),3);
    bufp->chgCData(oldp+7,(vlSelf->a),4);
    bufp->chgCData(oldp+8,(vlSelf->b),4);
    bufp->chgCData(oldp+9,(vlSelf->seg1),8);
    bufp->chgCData(oldp+10,(vlSelf->seg2),8);
    bufp->chgBit(oldp+11,(vlSelf->overflow));
    bufp->chgBit(oldp+12,(vlSelf->carry));
    bufp->chgBit(oldp+13,(vlSelf->zero));
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->op))));
    bufp->chgBit(oldp+15,((((1U & ((IData)(vlSelf->a) 
                                   >> 3U)) == (1U & 
                                               (~ ((IData)(vlSelf->b) 
                                                   >> 3U)))) 
                           & ((1U & ((IData)(vlSelf->ALU__DOT__a_sub_b) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->a) 
                                                    >> 3U))))));
    bufp->chgBit(oldp+16,((1U & (((IData)(1U) + ((IData)(vlSelf->a) 
                                                 + 
                                                 (0xfU 
                                                  & (~ (IData)(vlSelf->b))))) 
                                 >> 4U))));
    bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->op))));
    bufp->chgCData(oldp+18,((0xfU & (~ (IData)(vlSelf->b)))),4);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
