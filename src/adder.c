// Source: https://stackoverflow.com/questions/24621889/minimal-example-of-wrapping-c-code-with-cython-passing-int-and-struct
#include <stdlib.h>
#include "adder.h"

int
pair_add(PAIR * ppair) {
    return ppair->x + ppair->y;
}

int
add(int x, int y) {
    return x + y;
}
