#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub9.h"

void Tag2Sub9_init()
{
boost::python::class_<Tag2Sub9, boost::python::bases<Tag2Subpacket>>("Tag2Sub9")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub9::read)
    .def("set_time", &Tag2Sub9::set_time)
    .def("show", &Tag2Sub9::show)
    .def("raw", &Tag2Sub9::raw)
    .def("get_time", &Tag2Sub9::get_time)
    .def("clone", &Tag2Sub9::clone)
    ;
}
