#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA256.h"

void SHA256_init()
{
boost::python::class_<SHA256, boost::python::bases<Hash>>("SHA256")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &SHA256::digestsize)
    .def("blocksize", &SHA256::blocksize)
    .def("hexdigest", &SHA256::hexdigest)
    .def("update", &SHA256::update)
    ;
}
