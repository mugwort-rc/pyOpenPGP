#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub5.h"

void Tag2Sub5_init()
{
boost::python::class_<Tag2Sub5, boost::python::bases<Tag2Subpacket>>("Tag2Sub5")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub5::read)
    .def("set_amount", &Tag2Sub5::set_amount)
    .def("show", &Tag2Sub5::show)
    .def("raw", &Tag2Sub5::raw)
    .def("set_level", &Tag2Sub5::set_level)
    .def("get_level", &Tag2Sub5::get_level)
    .def("get_amount", &Tag2Sub5::get_amount)
    .def("clone", &Tag2Sub5::clone)
    ;
}
