// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vmaskbus__Syms_H_
#define _Vmaskbus__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmaskbus.h"

// SYMS CLASS
class Vmaskbus__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmaskbus*                      TOPp;
    
    // CREATORS
    Vmaskbus__Syms(Vmaskbus* topp, const char* namep);
    ~Vmaskbus__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
