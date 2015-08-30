#include <boost/python.hpp>

#include "OpenPGP/RNG/BBS.h"

void BBS_init()
{
boost::python::class_<BBS>("BBS")
    .def(boost::python::init<const PGPMPI &, const unsigned int &, PGPMPI, PGPMPI>())
    .def("rand", &BBS::rand)
    ;
}
