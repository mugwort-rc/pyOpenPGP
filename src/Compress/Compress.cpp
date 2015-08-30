#include <boost/python.hpp>

#include "OpenPGP/Compress/Compress.h"

void Compress_init()
{
boost::python::def("PGP_compress", &PGP_compress);
boost::python::def("PGP_decompress", &PGP_decompress);
}
