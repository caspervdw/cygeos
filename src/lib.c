#define PY_SSIZE_T_CLEAN

#include <Python.h>

#include "adder.h"


PyObject* PyAdd(PyObject* self, PyObject* args) {
  int a;
  int b;

  if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
    return NULL;
  }
  return PyLong_FromLong((long) add(a, b));
}


/* This tells Python what methods this module has. */
static PyMethodDef GeosModule[] = {
    {"c_add", PyAdd, METH_VARARGS,
     ""},
    {NULL, NULL, 0, NULL}};

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT, "lib", NULL, -1, GeosModule, NULL, NULL, NULL, NULL};

PyMODINIT_FUNC PyInit_lib(void) {
  PyObject *m;

  m = PyModule_Create(&moduledef);
  if (!m) {
    return NULL;
  }

  return m;
}
