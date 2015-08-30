#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag12.h"

void Tag12_init()
{
boost::python::class_<Tag12, boost::python::bases<Packet>>("Tag12")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag12::read)
    .def("show", &Tag12::show)
    .def("get_trust", &Tag12::get_trust)
    .def("raw", &Tag12::raw)
    .def("set_trust", &Tag12::set_trust)
    .def("clone", &Tag12::clone)
    ;
}
