#include <boost/python.hpp>

#include "OpenPGP/Encryptions/TDES.h"

void TDES_init()
{
boost::python::class_<TDES, boost::python::bases<SymAlg>>("TDES")
    .def(boost::python::init<const std::string &, const std::string &, const std::string &, const std::string &, const std::string &, const std::string &>())
    .def("decrypt", &TDES::decrypt)
    .def("blocksize", &TDES::blocksize)
    .def("encrypt", &TDES::encrypt)
    .def("setkey", &TDES::setkey)
    ;
}
