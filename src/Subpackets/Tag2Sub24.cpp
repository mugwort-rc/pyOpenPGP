#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub24.h"

void Tag2Sub24_init()
{
boost::python::class_<Tag2Sub24, boost::python::bases<Tag2Subpacket>>("Tag2Sub24")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub24::read)
    .def("set_pks", &Tag2Sub24::set_pks)
    .def("show", &Tag2Sub24::show)
    .def("raw", &Tag2Sub24::raw)
    .def("get_pks", &Tag2Sub24::get_pks)
    .def("clone", &Tag2Sub24::clone)
    ;
}
