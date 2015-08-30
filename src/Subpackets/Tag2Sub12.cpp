#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub12.h"

void Tag2Sub12_init()
{
boost::python::class_<Tag2Sub12, boost::python::bases<Tag2Subpacket>>("Tag2Sub12")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub12::read)
    .def("get_class", &Tag2Sub12::get_class)
    .def("show", &Tag2Sub12::show)
    .def("raw", &Tag2Sub12::raw)
    .def("set_pka", &Tag2Sub12::set_pka)
    .def("get_fingerprint", &Tag2Sub12::get_fingerprint)
    .def("get_pka", &Tag2Sub12::get_pka)
    .def("clone", &Tag2Sub12::clone)
    .def("set_class", &Tag2Sub12::set_class)
    .def("set_fingerprint", &Tag2Sub12::set_fingerprint)
    ;
}
