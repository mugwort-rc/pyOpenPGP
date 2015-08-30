#include <boost/python.hpp>

#include "OpenPGP/PKA/PKA.h"

void PKA_init()
{
boost::python::def("generate_key_pair", &generate_key_pair);
}
