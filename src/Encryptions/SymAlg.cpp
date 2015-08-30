#include <boost/python.hpp>

#include "OpenPGP/Encryptions/SymAlg.h"

void SymAlg_init()
{
boost::python::class_<SymAlg>("SymAlg")
    .def("decrypt", &SymAlg::decrypt)
    .def("blocksize", &SymAlg::blocksize)
    .def("encrypt", &SymAlg::encrypt)
    ;
}
