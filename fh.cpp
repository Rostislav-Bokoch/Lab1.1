#include <cmath>
#include "C3Kut.h"
#include "fh.h"

float fh (C3Kut *k) {
    return k->katet1 * k->katet2 / sqrt(k->katet1 * k->katet1 + k->katet2 * k->katet2);
}
