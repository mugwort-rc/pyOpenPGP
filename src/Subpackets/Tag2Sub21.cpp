#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub21.h"

void Tag2Sub21_init()
{
boost::python::class_<Tag2Sub21, boost::python::bases<Tag2Subpacket>>("Tag2Sub21")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub21::read)
    .def("get_pha", &Tag2Sub21::get_pha)
    .def("show", &Tag2Sub21::show)
    .def("raw", &Tag2Sub21::raw)
    .def("clone", &Tag2Sub21::clone)
    .def("set_pha", &Tag2Sub21::set_pha)
    ;
}
