# Source: https://stackoverflow.com/questions/24621889/minimal-example-of-wrapping-c-code-with-cython-passing-int-and-struct

cimport c_adder

def add(x, y):
    return c_adder.add(x, y)

def pair_add(x, y):
    cdef c_adder.PAIR pair
    pair.x = x
    pair.y = y
    return c_adder.pair_add(&pair)