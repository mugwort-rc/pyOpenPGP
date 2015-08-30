#include <boost/python.hpp>

#include "OpenPGP/Compress/pgpzlib.h"

void pgpzlib_init()
{
boost::python::def("zlib_compress", &zlib_compress);
boost::python::def("zlib_decompress", &zlib_decompress);
}
