#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub4.h"

void Tag2Sub4_init()
{
boost::python::class_<Tag2Sub4, boost::python::bases<Tag2Subpacket>>("Tag2Sub4")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub4::read)
    .def("set_exportable", &Tag2Sub4::set_exportable)
    .def("show", &Tag2Sub4::show)
    .def("raw", &Tag2Sub4::raw)
    .def("get_exportable", &Tag2Sub4::get_exportable)
    .def("clone", &Tag2Sub4::clone)
    ;
}
