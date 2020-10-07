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
