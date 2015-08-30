#include <boost/python.hpp>

#include "OpenPGP/Encryptions/CAST128.h"

void CAST128_init()
{
boost::python::class_<CAST128, boost::python::bases<SymAlg>>("CAST128")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &CAST128::decrypt)
    .def("blocksize", &CAST128::blocksize)
    .def("encrypt", &CAST128::encrypt)
    .def("setkey", &CAST128::setkey)
    ;
}
