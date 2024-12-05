#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
      .def(py::init<double, double>())
      .def("get_state", &HarmonicOscillator::get_state)
      .def("step", &HarmonicOscillator::step)
      .def("get_time", &HarmonicOscillator::get_time);
}
