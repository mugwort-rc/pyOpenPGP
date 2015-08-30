#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA224.h"

void SHA224_init()
{
boost::python::class_<SHA224, boost::python::bases<SHA256>>("SHA224")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &SHA224::digestsize)
    .def("blocksize", &SHA224::blocksize)
    .def("hexdigest", &SHA224::hexdigest)
    ;
}
