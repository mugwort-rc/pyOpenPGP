#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub16.h"

void Tag2Sub16_init()
{
boost::python::class_<Tag2Sub16, boost::python::bases<Tag2Subpacket>>("Tag2Sub16")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub16::read)
    .def("show", &Tag2Sub16::show)
    .def("raw", &Tag2Sub16::raw)
    .def("get_keyid", &Tag2Sub16::get_keyid)
    .def("set_keyid", &Tag2Sub16::set_keyid)
    .def("clone", &Tag2Sub16::clone)
    ;
}
