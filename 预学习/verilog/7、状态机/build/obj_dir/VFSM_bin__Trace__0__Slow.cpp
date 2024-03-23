// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFSM_bin__Syms.h"


VL_ATTR_COLD void VFSM_bin___024root__trace_init_sub__TOP__0(VFSM_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"in", false,-1);
    tracep->declBit(c+63,"reset", false,-1);
    tracep->declBit(c+64,"out", false,-1);
    tracep->pushNamePrefix("FSM_bin ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"in", false,-1);
    tracep->declBit(c+63,"reset", false,-1);
    tracep->declBit(c+64,"out", false,-1);
    tracep->declBus(c+65,"S0", false,-1, 3,0);
    tracep->declBus(c+66,"S1", false,-1, 3,0);
    tracep->declBus(c+67,"S2", false,-1, 3,0);
    tracep->declBus(c+68,"S3", false,-1, 3,0);
    tracep->declBus(c+69,"S4", false,-1, 3,0);
    tracep->declBus(c+70,"S5", false,-1, 3,0);
    tracep->declBus(c+71,"S6", false,-1, 3,0);
    tracep->declBus(c+72,"S7", false,-1, 3,0);
    tracep->declBus(c+73,"S8", false,-1, 3,0);
    tracep->declBus(c+55,"state_din", false,-1, 3,0);
    tracep->declBus(c+56,"state_dout", false,-1, 3,0);
    tracep->declBit(c+74,"state_wen", false,-1);
    tracep->pushNamePrefix("outMux ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 0,0);
    tracep->declBus(c+56,"key", false,-1, 3,0);
    tracep->declBus(c+78,"default_out", false,-1, 0,0);
    tracep->declQuad(c+79,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 0,0);
    tracep->declBus(c+56,"key", false,-1, 3,0);
    tracep->declBus(c+78,"default_out", false,-1, 0,0);
    tracep->declQuad(c+79,"lut", false,-1, 44,0);
    tracep->declBus(c+81,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+57,"lut_out", false,-1, 0,0);
    tracep->declBit(c+58,"hit", false,-1);
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("state ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+63,"reset", false,-1);
    tracep->declBus(c+55,"state_din", false,-1, 3,0);
    tracep->declBus(c+56,"state_dout", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stateMux ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+76,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+55,"out", false,-1, 3,0);
    tracep->declBus(c+56,"key", false,-1, 3,0);
    tracep->declBus(c+65,"default_out", false,-1, 3,0);
    tracep->declArray(c+83,"lut", false,-1, 71,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+76,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+55,"out", false,-1, 3,0);
    tracep->declBus(c+56,"key", false,-1, 3,0);
    tracep->declBus(c+65,"default_out", false,-1, 3,0);
    tracep->declArray(c+83,"lut", false,-1, 71,0);
    tracep->declBus(c+86,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+28+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+37+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+46+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+59,"lut_out", false,-1, 3,0);
    tracep->declBit(c+60,"hit", false,-1);
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VFSM_bin___024root__trace_init_top(VFSM_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root__trace_init_top\n"); );
    // Body
    VFSM_bin___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFSM_bin___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_bin___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_bin___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFSM_bin___024root__trace_register(VFSM_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VFSM_bin___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VFSM_bin___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VFSM_bin___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFSM_bin___024root__trace_full_sub_0(VFSM_bin___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFSM_bin___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root__trace_full_top_0\n"); );
    // Init
    VFSM_bin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFSM_bin___024root*>(voidSelf);
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFSM_bin___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFSM_bin___024root__trace_full_sub_0(VFSM_bin___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h24bbb2d6__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+11,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+12,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+13,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+14,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+15,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+16,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+17,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+18,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullBit(oldp+19,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+20,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+21,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+22,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+23,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+24,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+25,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+26,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+27,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__data_list[8]));
    bufp->fullCData(oldp+28,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+29,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+30,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+31,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+32,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+33,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+34,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+35,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+36,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
    bufp->fullCData(oldp+37,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+38,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+39,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+40,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+41,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+42,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+43,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+44,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+45,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+46,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+47,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+48,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+49,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+50,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+51,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+52,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+53,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+54,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+55,(vlSelf->FSM_bin__DOT__state_din),4);
    bufp->fullCData(oldp+56,(vlSelf->FSM_bin__DOT__state_dout),4);
    bufp->fullBit(oldp+57,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+58,(vlSelf->FSM_bin__DOT__outMux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+59,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+60,(vlSelf->FSM_bin__DOT__stateMux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+61,(vlSelf->clk));
    bufp->fullBit(oldp+62,(vlSelf->in));
    bufp->fullBit(oldp+63,(vlSelf->reset));
    bufp->fullBit(oldp+64,(vlSelf->out));
    bufp->fullCData(oldp+65,(0U),4);
    bufp->fullCData(oldp+66,(1U),4);
    bufp->fullCData(oldp+67,(2U),4);
    bufp->fullCData(oldp+68,(3U),4);
    bufp->fullCData(oldp+69,(4U),4);
    bufp->fullCData(oldp+70,(5U),4);
    bufp->fullCData(oldp+71,(6U),4);
    bufp->fullCData(oldp+72,(7U),4);
    bufp->fullCData(oldp+73,(8U),4);
    bufp->fullBit(oldp+74,(vlSelf->FSM_bin__DOT__state_wen));
    bufp->fullIData(oldp+75,(9U),32);
    bufp->fullIData(oldp+76,(4U),32);
    bufp->fullIData(oldp+77,(1U),32);
    bufp->fullBit(oldp+78,(0U));
    bufp->fullQData(oldp+79,(0x110c9531d1ULL),45);
    bufp->fullIData(oldp+81,(5U),32);
    bufp->fullIData(oldp+82,(9U),32);
    __Vtemp_h24bbb2d6__0[0U] = 0x51617181U;
    __Vtemp_h24bbb2d6__0[1U] = 0x12233444U;
    __Vtemp_h24bbb2d6__0[2U] = 1U;
    bufp->fullWData(oldp+83,(__Vtemp_h24bbb2d6__0),72);
    bufp->fullIData(oldp+86,(8U),32);
}
