#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub32.h"

void Tag2Sub32_init()
{
boost::python::class_<Tag2Sub32, boost::python::bases<Tag2Subpacket>>("Tag2Sub32")
    .def(boost::python::init<const Tag2Sub32 &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub32::read)
    .def("show", &Tag2Sub32::show)
    .def("raw", &Tag2Sub32::raw)
    .def("operator=", &Tag2Sub32::operator=)
    .def("clone", &Tag2Sub32::clone)
    .def("set_embedded", &Tag2Sub32::set_embedded)
    .def("get_embedded", &Tag2Sub32::get_embedded)
    ;
}
