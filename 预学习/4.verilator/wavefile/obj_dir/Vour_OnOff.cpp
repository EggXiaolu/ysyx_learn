// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vour_OnOff.h"
#include "Vour_OnOff__Syms.h"

//============================================================
// Constructors

Vour_OnOff::Vour_OnOff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vour_OnOff__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vour_OnOff::Vour_OnOff(const char* _vcname__)
    : Vour_OnOff(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vour_OnOff::~Vour_OnOff() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vour_OnOff___024root___eval_debug_assertions(Vour_OnOff___024root* vlSelf);
#endif  // VL_DEBUG
void Vour_OnOff___024root___eval_static(Vour_OnOff___024root* vlSelf);
void Vour_OnOff___024root___eval_initial(Vour_OnOff___024root* vlSelf);
void Vour_OnOff___024root___eval_settle(Vour_OnOff___024root* vlSelf);
void Vour_OnOff___024root___eval(Vour_OnOff___024root* vlSelf);

void Vour_OnOff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vour_OnOff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vour_OnOff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vour_OnOff___024root___eval_static(&(vlSymsp->TOP));
        Vour_OnOff___024root___eval_initial(&(vlSymsp->TOP));
        Vour_OnOff___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vour_OnOff___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vour_OnOff::eventsPending() { return false; }

uint64_t Vour_OnOff::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vour_OnOff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vour_OnOff___024root___eval_final(Vour_OnOff___024root* vlSelf);

VL_ATTR_COLD void Vour_OnOff::final() {
    Vour_OnOff___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vour_OnOff::hierName() const { return vlSymsp->name(); }
const char* Vour_OnOff::modelName() const { return "Vour_OnOff"; }
unsigned Vour_OnOff::threads() const { return 1; }
