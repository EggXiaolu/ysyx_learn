// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom__Syms.h"
#include "Vrandom___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__act(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG

void Vrandom___024root___eval_triggers__act(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->ctrl) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ctrl)));
    vlSelf->__Vtrigrprev__TOP__ctrl = vlSelf->ctrl;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrandom___024root___dump_triggers__act(vlSelf);
    }
#endif
}
