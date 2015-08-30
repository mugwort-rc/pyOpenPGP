#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub10.h"

void Tag2Sub10_init()
{
boost::python::class_<Tag2Sub10, boost::python::bases<Tag2Subpacket>>("Tag2Sub10")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub10::read)
    .def("show", &Tag2Sub10::show)
    .def("get_stuff", &Tag2Sub10::get_stuff)
    .def("raw", &Tag2Sub10::raw)
    .def("set_stuff", &Tag2Sub10::set_stuff)
    .def("clone", &Tag2Sub10::clone)
    ;
}
