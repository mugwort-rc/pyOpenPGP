#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub27.h"

void Tag2Sub27_init()
{
boost::python::class_<Tag2Sub27, boost::python::bases<Tag2Subpacket>>("Tag2Sub27")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub27::read)
    .def("get_flags", &Tag2Sub27::get_flags)
    .def("show", &Tag2Sub27::show)
    .def("raw", &Tag2Sub27::raw)
    .def("clone", &Tag2Sub27::clone)
    .def("set_flags", &Tag2Sub27::set_flags)
    ;
}
