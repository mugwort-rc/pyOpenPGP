#include <boost/python.hpp>

#include "OpenPGP/Hashes/SHA2_Functions.h"

void SHA2_Functions_init()
{
boost::python::def("Ch", &Ch);
boost::python::def("Maj", &Maj);
}
