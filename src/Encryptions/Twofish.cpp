#include <boost/python.hpp>

#include "OpenPGP/Encryptions/Twofish.h"

void Twofish_init()
{
boost::python::class_<Twofish, boost::python::bases<SymAlg>>("Twofish")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &Twofish::decrypt)
    .def("blocksize", &Twofish::blocksize)
    .def("encrypt", &Twofish::encrypt)
    .def("setkey", &Twofish::setkey)
    ;
}
