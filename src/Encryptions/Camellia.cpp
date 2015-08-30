#include <boost/python.hpp>

#include "OpenPGP/Encryptions/Camellia.h"

void Camellia_init()
{
boost::python::class_<Camellia, boost::python::bases<SymAlg>>("Camellia")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &Camellia::decrypt)
    .def("blocksize", &Camellia::blocksize)
    .def("encrypt", &Camellia::encrypt)
    .def("setkey", &Camellia::setkey)
    ;
}
