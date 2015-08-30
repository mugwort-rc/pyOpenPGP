#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag61.h"

void Tag61_init()
{
boost::python::class_<Tag61, boost::python::bases<Packet>>("Tag61")
    .def(boost::python::init<const std::string &>())
    .def("read", &Tag61::read)
    .def("show", &Tag61::show)
    .def("raw", &Tag61::raw)
    .def("set_stream", &Tag61::set_stream)
    .def("clone", &Tag61::clone)
    .def("get_stream", &Tag61::get_stream)
    ;
}
