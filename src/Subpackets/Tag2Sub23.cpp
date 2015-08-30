#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub23.h"

void Tag2Sub23_init()
{
boost::python::class_<Tag2Sub23, boost::python::bases<Tag2Subpacket>>("Tag2Sub23")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub23::read)
    .def("get_flags", &Tag2Sub23::get_flags)
    .def("show", &Tag2Sub23::show)
    .def("raw", &Tag2Sub23::raw)
    .def("clone", &Tag2Sub23::clone)
    .def("set_flags", &Tag2Sub23::set_flags)
    ;
}
