#include <boost/python.hpp>

#include "OpenPGP/Encryptions/AES.h"

void AES_init()
{
boost::python::class_<AES, boost::python::bases<SymAlg>>("AES")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &AES::decrypt)
    .def("blocksize", &AES::blocksize)
    .def("encrypt", &AES::encrypt)
    .def("setkey", &AES::setkey)
    ;
}
