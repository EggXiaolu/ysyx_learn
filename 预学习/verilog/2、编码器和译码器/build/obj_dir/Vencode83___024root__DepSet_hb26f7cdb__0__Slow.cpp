// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "verilated.h"

#include "Vencode83__Syms.h"
#include "Vencode83___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__stl(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencode83___024root___eval_triggers__stl(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencode83___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
