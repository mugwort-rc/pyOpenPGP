#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub20.h"

void Tag2Sub20_init()
{
boost::python::class_<Tag2Sub20, boost::python::bases<Tag2Subpacket>>("Tag2Sub20")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub20::read)
    .def("get_n", &Tag2Sub20::get_n)
    .def("get_flags", &Tag2Sub20::get_flags)
    .def("show", &Tag2Sub20::show)
    .def("raw", &Tag2Sub20::raw)
    .def("get_m", &Tag2Sub20::get_m)
    .def("set_n", &Tag2Sub20::set_n)
    .def("clone", &Tag2Sub20::clone)
    .def("set_m", &Tag2Sub20::set_m)
    .def("set_flags", &Tag2Sub20::set_flags)
    ;
}
