from setuptools import setup
from setuptools.extension import Extension
from Cython.Distutils import build_ext
from Cython.Build import cythonize


ext_modules = [
    Extension(
        "cygeos.lib", ["src/adder.c", "src/lib.c"]
    ),
    Extension(
        "cygeos.cy_adder", ["cygeos/cy_adder.pyx", "src/adder.c"], include_dirs=["src"],
    )
]

setup(
    name="Hello world app", cmdclass={"build_ext": build_ext}, ext_modules=cythonize(ext_modules)
)
