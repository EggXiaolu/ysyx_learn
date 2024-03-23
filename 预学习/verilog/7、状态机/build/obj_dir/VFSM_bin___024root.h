// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM_bin.h for the primary calling header

#ifndef VERILATED_VFSM_BIN___024ROOT_H_
#define VERILATED_VFSM_BIN___024ROOT_H_  // guard

#include "verilated.h"

class VFSM_bin__Syms;

class VFSM_bin___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_INOUT8(clk,0,0);
    VL_INOUT8(in,0,0);
    VL_INOUT8(reset,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ FSM_bin__DOT__state_din;
    CData/*3:0*/ FSM_bin__DOT__state_dout;
    CData/*0:0*/ FSM_bin__DOT__state_wen;
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__i0__DOT__hit;
    CData/*3:0*/ FSM_bin__DOT__stateMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ FSM_bin__DOT__stateMux__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*4:0*/, 9> FSM_bin__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> FSM_bin__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 9> FSM_bin__DOT__outMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 9> FSM_bin__DOT__stateMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> FSM_bin__DOT__stateMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 9> FSM_bin__DOT__stateMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFSM_bin__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFSM_bin___024root(VFSM_bin__Syms* symsp, const char* v__name);
    ~VFSM_bin___024root();
    VL_UNCOPYABLE(VFSM_bin___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
