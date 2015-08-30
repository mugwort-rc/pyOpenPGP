#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag14.h"

void Tag14_init()
{
boost::python::class_<Tag14, boost::python::bases<Tag6>>("Tag14")
    .def(boost::python::init<std::string &>())
    .def("clone", &Tag14::clone)
    ;
}
