# Source: https://stackoverflow.com/questions/24621889/minimal-example-of-wrapping-c-code-with-cython-passing-int-and-struct

cdef extern from "adder.h":

    ctypedef struct PAIR:
        int x
        int y


    int add(int x, int y)
    int pair_add(PAIR * ppair)
