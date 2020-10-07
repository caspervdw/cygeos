import cygeos

def test_add():
    import cygeos.cy_adder
    assert cygeos.cy_adder.add(1, 2) == 3


def test_pair_add():
    import cygeos.cy_adder
    assert cygeos.cy_adder.pair_add(1, 2) == 3


def test_c_add():
    import cygeos.lib
    assert cygeos.lib.c_add(1, 2) == 3
