#pragma once

#include "gdt/gdt.h"
#include "gdt/math/constants.h"
#include <iostream>

namespace gdt {

  /*! a n-bit fixed-point float in the [0..1] region */
  template<typename storageT, int Nbits, int is_signed>
  struct FixedPoint {
    FixedPoint();

    float operator float() const {
      return bits / float((1ULL << Nbits)-1);
    }
    storageT bits;
  };
}
 
