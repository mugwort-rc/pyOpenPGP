#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag62.h"

void Tag62_init()
{
boost::python::class_<Tag62, boost::python::bases<Packet>>("Tag62")
    .def(boost::python::init<const std::string &>())
    .def("read", &Tag62::read)
    .def("show", &Tag62::show)
    .def("raw", &Tag62::raw)
    .def("set_stream", &Tag62::set_stream)
    .def("clone", &Tag62::clone)
    .def("get_stream", &Tag62::get_stream)
    ;
}
