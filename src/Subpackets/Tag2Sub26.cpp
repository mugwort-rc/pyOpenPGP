#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub26.h"

void Tag2Sub26_init()
{
boost::python::class_<Tag2Sub26, boost::python::bases<Tag2Subpacket>>("Tag2Sub26")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub26::read)
    .def("set_uri", &Tag2Sub26::set_uri)
    .def("show", &Tag2Sub26::show)
    .def("raw", &Tag2Sub26::raw)
    .def("get_uri", &Tag2Sub26::get_uri)
    .def("clone", &Tag2Sub26::clone)
    ;
}
