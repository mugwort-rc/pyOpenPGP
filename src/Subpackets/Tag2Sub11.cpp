#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub11.h"

void Tag2Sub11_init()
{
boost::python::class_<Tag2Sub11, boost::python::bases<Tag2Subpacket>>("Tag2Sub11")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub11::read)
    .def("show", &Tag2Sub11::show)
    .def("set_psa", &Tag2Sub11::set_psa)
    .def("raw", &Tag2Sub11::raw)
    .def("clone", &Tag2Sub11::clone)
    .def("get_psa", &Tag2Sub11::get_psa)
    ;
}
