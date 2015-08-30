#include <boost/python.hpp>

#include "OpenPGP/radix64.h"

void radix64_init()
{
boost::python::def("ascii2radix64", &ascii2radix64);
boost::python::def("radix642ascii", &radix642ascii);
boost::python::def("crc24", &crc24);
}
