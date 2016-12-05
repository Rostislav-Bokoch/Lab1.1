#include "C3Kut.h"

C3Kut::C3Kut (float k1, float k2)
    :katet1(k1), katet2(k2) {
    }

C3Kut::C3Kut(C3Kut *k)
    :katet1(k->katet1), katet2(k->katet2) {
    }
