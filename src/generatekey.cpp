#include <boost/python.hpp>

#include "OpenPGP/generatekey.h"

void generatekey_init()
{
boost::python::def("add_key_values", &add_key_values);
boost::python::def("generate_keys", &generate_keys);
}
