#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub6.h"

void Tag2Sub6_init()
{
boost::python::class_<Tag2Sub6, boost::python::bases<Tag2Subpacket>>("Tag2Sub6")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub6::read)
    .def("get_regex", &Tag2Sub6::get_regex)
    .def("show", &Tag2Sub6::show)
    .def("raw", &Tag2Sub6::raw)
    .def("set_regex", &Tag2Sub6::set_regex)
    .def("clone", &Tag2Sub6::clone)
    ;
}
