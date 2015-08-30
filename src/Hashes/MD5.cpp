#include <boost/python.hpp>

#include "OpenPGP/Hashes/MD5.h"

void MD5_init()
{
boost::python::class_<MD5, boost::python::bases<Hash>>("MD5")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &MD5::digestsize)
    .def("blocksize", &MD5::blocksize)
    .def("hexdigest", &MD5::hexdigest)
    .def("update", &MD5::update)
    ;
}
