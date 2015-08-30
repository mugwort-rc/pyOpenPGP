#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub3.h"

void Tag2Sub3_init()
{
boost::python::class_<Tag2Sub3, boost::python::bases<Tag2Subpacket>>("Tag2Sub3")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub3::read)
    .def("set_time", &Tag2Sub3::set_time)
    .def("show", &Tag2Sub3::show)
    .def("raw", &Tag2Sub3::raw)
    .def("get_time", &Tag2Sub3::get_time)
    .def("clone", &Tag2Sub3::clone)
    ;
}
