#include <iostream>
#include "C3Kut.h"

using namespace std;

int main(void) {
    C3Kut *k = new C3Kut(3, 4);
    cout << "h = " << fh(k) << endl;
}
