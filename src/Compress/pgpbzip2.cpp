#include <boost/python.hpp>

#include "OpenPGP/Compress/pgpbzip2.h"

void pgpbzip2_init()
{
boost::python::def("bz2_decompress", &bz2_decompress);
boost::python::def("bz2_compress", &bz2_compress);
}
