#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag18.h"

void Tag18_init()
{
boost::python::class_<Tag18, boost::python::bases<Packet>>("Tag18")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag18::read)
    .def("set_protected_data", &Tag18::set_protected_data)
    .def("show", &Tag18::show)
    .def("raw", &Tag18::raw)
    .def("get_protected_data", &Tag18::get_protected_data)
    .def("clone", &Tag18::clone)
    ;
}
