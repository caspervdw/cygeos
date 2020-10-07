// Source: https://stackoverflow.com/questions/24621889/minimal-example-of-wrapping-c-code-with-cython-passing-int-and-struct
#ifndef _ADDER_H
#define _ADDER_H

typedef struct {
    int x;
    int y;
} PAIR;

int pair_add(PAIR * ppair);
int add(int, int);

#endif
