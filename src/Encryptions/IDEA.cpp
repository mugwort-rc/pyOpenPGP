#include <boost/python.hpp>

#include "OpenPGP/Encryptions/IDEA.h"

void IDEA_init()
{
boost::python::class_<IDEA, boost::python::bases<SymAlg>>("IDEA")
    .def(boost::python::init<const std::string &>())
    .def("decrypt", &IDEA::decrypt)
    .def("blocksize", &IDEA::blocksize)
    .def("encrypt", &IDEA::encrypt)
    .def("setkey", &IDEA::setkey)
    ;
}
