#include <boost/python.hpp>

#include "OpenPGP/Hashes/RIPEMD160.h"

void RIPEMD160_init()
{
boost::python::class_<RIPEMD160, boost::python::bases<Hash>>("RIPEMD160")
    .def(boost::python::init<const std::string &>())
    .def("digestsize", &RIPEMD160::digestsize)
    .def("blocksize", &RIPEMD160::blocksize)
    .def("hexdigest", &RIPEMD160::hexdigest)
    .def("update", &RIPEMD160::update)
    ;
}
