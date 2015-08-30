#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA1.h"

void SHA1_init()
{
boost::python::class_<SHA1, boost::python::bases<Hash>>("SHA1")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &SHA1::digestsize)
    .def("blocksize", &SHA1::blocksize)
    .def("hexdigest", &SHA1::hexdigest)
    .def("update", &SHA1::update)
    ;
}
