#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA384.h"

void SHA384_init()
{
boost::python::class_<SHA384, boost::python::bases<SHA512>>("SHA384")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &SHA384::digestsize)
    .def("blocksize", &SHA384::blocksize)
    .def("hexdigest", &SHA384::hexdigest)
    ;
}
