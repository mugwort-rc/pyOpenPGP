#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub2.h"

void Tag2Sub2_init()
{
boost::python::class_<Tag2Sub2, boost::python::bases<Tag2Subpacket>>("Tag2Sub2")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub2::read)
    .def("set_time", &Tag2Sub2::set_time)
    .def("show", &Tag2Sub2::show)
    .def("raw", &Tag2Sub2::raw)
    .def("get_time", &Tag2Sub2::get_time)
    .def("clone", &Tag2Sub2::clone)
    ;
}
