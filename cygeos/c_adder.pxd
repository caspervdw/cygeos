cdef extern from "adder.h":

    ctypedef struct PAIR:
        int x
        int y


    int add(int x, int y)
    int pair_add(PAIR * ppair)
