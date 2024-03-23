// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ready));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__overflow));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__tmp_data),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__out_data),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__key_count),8);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__my_keyboard__DOT__fifo[0]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__my_keyboard__DOT__fifo[1]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__my_keyboard__DOT__fifo[2]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__my_keyboard__DOT__fifo[3]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__my_keyboard__DOT__fifo[4]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__my_keyboard__DOT__fifo[5]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__my_keyboard__DOT__fifo[6]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__my_keyboard__DOT__fifo[7]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__my_keyboard__DOT__w_ptr),3);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__my_keyboard__DOT__r_ptr),3);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+18,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+19,((0xfU & (IData)(vlSelf->top__DOT__key_count))),4);
        bufp->chgCData(oldp+20,((0xfU & ((IData)(vlSelf->top__DOT__key_count) 
                                         >> 4U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__my_ps2_to_ascii__DOT__tmp),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__next_state),4);
        bufp->chgCData(oldp+23,((0xfU & (IData)(vlSelf->top__DOT__my_ps2_to_ascii__DOT__tmp))),4);
        bufp->chgCData(oldp+24,((0xfU & ((IData)(vlSelf->top__DOT__my_ps2_to_ascii__DOT__tmp) 
                                         >> 4U))),4);
    }
    bufp->chgBit(oldp+25,(vlSelf->clk));
    bufp->chgBit(oldp+26,(vlSelf->clrn));
    bufp->chgBit(oldp+27,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+28,(vlSelf->ps2_data));
    bufp->chgCData(oldp+29,(vlSelf->seg0),8);
    bufp->chgCData(oldp+30,(vlSelf->seg1),8);
    bufp->chgCData(oldp+31,(vlSelf->seg2),8);
    bufp->chgCData(oldp+32,(vlSelf->seg3),8);
    bufp->chgCData(oldp+33,(vlSelf->seg4),8);
    bufp->chgCData(oldp+34,(vlSelf->seg5),8);
    bufp->chgCData(oldp+35,(((1U == (IData)(vlSelf->top__DOT__state))
                              ? (IData)(vlSelf->top__DOT__out_data)
                              : 0U)),8);
    bufp->chgCData(oldp+36,(vlSelf->top__DOT__state),4);
    bufp->chgCData(oldp+37,(((1U == (IData)(vlSelf->top__DOT__state))
                              ? (0xfU & (IData)(vlSelf->top__DOT__out_data))
                              : 0U)),4);
    bufp->chgCData(oldp+38,(((1U == (IData)(vlSelf->top__DOT__state))
                              ? (0xfU & ((IData)(vlSelf->top__DOT__out_data) 
                                         >> 4U)) : 0U)),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
