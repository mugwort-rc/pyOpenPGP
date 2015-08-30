#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub29.h"

void Tag2Sub29_init()
{
boost::python::class_<Tag2Sub29, boost::python::bases<Tag2Subpacket>>("Tag2Sub29")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub29::read)
    .def("set_reason", &Tag2Sub29::set_reason)
    .def("set_code", &Tag2Sub29::set_code)
    .def("get_reason", &Tag2Sub29::get_reason)
    .def("show", &Tag2Sub29::show)
    .def("raw", &Tag2Sub29::raw)
    .def("get_code", &Tag2Sub29::get_code)
    .def("clone", &Tag2Sub29::clone)
    ;
}
