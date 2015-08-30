#include <boost/python.hpp>

#include "OpenPGP/Encryptions/Blowfish.h"

void Blowfish_init()
{
boost::python::class_<Blowfish, boost::python::bases<SymAlg>>("Blowfish")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &Blowfish::decrypt)
    .def("blocksize", &Blowfish::blocksize)
    .def("encrypt", &Blowfish::encrypt)
    .def("setkey", &Blowfish::setkey)
    ;
}
