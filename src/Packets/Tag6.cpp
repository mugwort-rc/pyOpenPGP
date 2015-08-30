#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag6.h"

void Tag6_init()
{
boost::python::class_<Tag6, boost::python::bases<Key>>("Tag6")
    .def(boost::python::init<const Tag6 &>())
    .def(boost::python::init<std::string &>())
    .def("clone", &Tag6::clone)
    //.def("operator=", &Tag6::operator=)
    ;
}
