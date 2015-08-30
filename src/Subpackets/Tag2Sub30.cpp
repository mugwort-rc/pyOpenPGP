#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub30.h"

void Tag2Sub30_init()
{
boost::python::class_<Tag2Sub30, boost::python::bases<Tag2Subpacket>>("Tag2Sub30")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub30::read)
    .def("get_flags", &Tag2Sub30::get_flags)
    .def("show", &Tag2Sub30::show)
    .def("raw", &Tag2Sub30::raw)
    .def("clone", &Tag2Sub30::clone)
    .def("set_flags", &Tag2Sub30::set_flags)
    ;
}
