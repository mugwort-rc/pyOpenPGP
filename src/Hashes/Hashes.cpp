#include <boost/python.hpp>

#include "OpenPGP/Hashes/Hashes.h"

void Hashes_init()
{
boost::python::def("use_hash", &use_hash);
}
