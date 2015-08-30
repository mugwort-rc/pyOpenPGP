#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub7.h"

void Tag2Sub7_init()
{
boost::python::class_<Tag2Sub7, boost::python::bases<Tag2Subpacket>>("Tag2Sub7")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub7::read)
    .def("set_revocable", &Tag2Sub7::set_revocable)
    .def("show", &Tag2Sub7::show)
    .def("raw", &Tag2Sub7::raw)
    .def("get_revocable", &Tag2Sub7::get_revocable)
    .def("clone", &Tag2Sub7::clone)
    ;
}
