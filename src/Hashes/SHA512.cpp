#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA512.h"

void SHA512_init()
{
boost::python::class_<SHA512, boost::python::bases<Hash>>("SHA512")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &SHA512::digestsize)
    .def("blocksize", &SHA512::blocksize)
    .def("hexdigest", &SHA512::hexdigest)
    .def("update", &SHA512::update)
    ;
}
