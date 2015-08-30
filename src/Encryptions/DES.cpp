#include <boost/python.hpp>

#include "OpenPGP/Encryptions/DES.h"

void DES_init()
{
boost::python::class_<DES, boost::python::bases<SymAlg>>("DES")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &DES::decrypt)
    .def("blocksize", &DES::blocksize)
    .def("encrypt", &DES::encrypt)
    .def("setkey", &DES::setkey)
    ;
}
