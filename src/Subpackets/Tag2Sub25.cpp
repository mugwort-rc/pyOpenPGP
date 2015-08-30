#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub25.h"

void Tag2Sub25_init()
{
boost::python::class_<Tag2Sub25, boost::python::bases<Tag2Subpacket>>("Tag2Sub25")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub25::read)
    .def("set_primary", &Tag2Sub25::set_primary)
    .def("show", &Tag2Sub25::show)
    .def("raw", &Tag2Sub25::raw)
    .def("clone", &Tag2Sub25::clone)
    .def("get_primary", &Tag2Sub25::get_primary)
    ;
}
