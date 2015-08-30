#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub31.h"

void Tag2Sub31_init()
{
boost::python::class_<Tag2Sub31, boost::python::bases<Tag2Subpacket>>("Tag2Sub31")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub31::read)
    .def("show", &Tag2Sub31::show)
    .def("raw", &Tag2Sub31::raw)
    .def("set_hash", &Tag2Sub31::set_hash)
    .def("set_ha", &Tag2Sub31::set_ha)
    .def("get_hash", &Tag2Sub31::get_hash)
    .def("set_pka", &Tag2Sub31::set_pka)
    .def("get_pka", &Tag2Sub31::get_pka)
    .def("clone", &Tag2Sub31::clone)
    .def("get_ha", &Tag2Sub31::get_ha)
    ;
}
