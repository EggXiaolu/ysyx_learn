// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41__Syms.h"


VL_ATTR_COLD void Vmux41___024root__trace_init_sub__TOP__0(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+15,"a", false,-1, 7,0);
    tracep->declBus(c+16,"s", false,-1, 1,0);
    tracep->declBus(c+17,"y", false,-1, 1,0);
    tracep->pushNamePrefix("mux41 ");
    tracep->declBus(c+15,"a", false,-1, 7,0);
    tracep->declBus(c+16,"s", false,-1, 1,0);
    tracep->declBus(c+17,"y", false,-1, 1,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+19,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+20,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 1,0);
    tracep->declBus(c+16,"key", false,-1, 1,0);
    tracep->declBus(c+21,"default_out", false,-1, 1,0);
    tracep->declBus(c+18,"lut", false,-1, 15,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+19,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+20,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+22,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 1,0);
    tracep->declBus(c+16,"key", false,-1, 1,0);
    tracep->declBus(c+21,"default_out", false,-1, 1,0);
    tracep->declBus(c+18,"lut", false,-1, 15,0);
    tracep->declBus(c+19,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+13,"lut_out", false,-1, 1,0);
    tracep->declBit(c+14,"hit", false,-1);
    tracep->declBus(c+23,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmux41___024root__trace_init_top(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_init_top\n"); );
    // Body
    Vmux41___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux41___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux41___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux41___024root__trace_register(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux41___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux41___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux41___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux41___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_full_top_0\n"); );
    // Init
    Vmux41___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux41___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+6,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+7,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+8,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+9,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+11,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+12,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+13,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+14,(vlSelf->mux41__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+15,(vlSelf->a),8);
    bufp->fullCData(oldp+16,(vlSelf->s),2);
    bufp->fullCData(oldp+17,(vlSelf->y),2);
    bufp->fullSData(oldp+18,((0x48cU | ((0x3000U & 
                                         ((IData)(vlSelf->a) 
                                          << 0xcU)) 
                                        | ((0x300U 
                                            & ((IData)(vlSelf->a) 
                                               << 6U)) 
                                           | ((0x30U 
                                               & (IData)(vlSelf->a)) 
                                              | (3U 
                                                 & ((IData)(vlSelf->a) 
                                                    >> 6U))))))),16);
    bufp->fullIData(oldp+19,(4U),32);
    bufp->fullIData(oldp+20,(2U),32);
    bufp->fullCData(oldp+21,(0U),2);
    bufp->fullIData(oldp+22,(1U),32);
    bufp->fullIData(oldp+23,(4U),32);
}
