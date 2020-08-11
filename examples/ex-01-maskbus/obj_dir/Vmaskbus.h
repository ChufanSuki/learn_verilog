// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmaskbus_H_
#define _Vmaskbus_H_

#include "verilated.h"

class Vmaskbus__Syms;

//----------

VL_MODULE(Vmaskbus) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN16(i_sw,8,0);
    VL_OUT16(o_led,8,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmaskbus__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmaskbus);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmaskbus(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmaskbus();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmaskbus__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmaskbus__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmaskbus__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vmaskbus__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmaskbus__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vmaskbus__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmaskbus__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
