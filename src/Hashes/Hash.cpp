#include <boost/python.hpp>

#include "OpenPGP/Hashes/Hash.h"

void Hash_init()
{
boost::python::class_<Hash>("Hash")
    .def("digestsize", &Hash::digestsize)
    .def("blocksize", &Hash::blocksize)
    .def("digest", &Hash::digest)
    .def("hexdigest", &Hash::hexdigest)
    .def("update", &Hash::update)
    ;
}
