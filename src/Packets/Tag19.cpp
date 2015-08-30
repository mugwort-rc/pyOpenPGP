#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag19.h"

void Tag19_init()
{
boost::python::class_<Tag19, boost::python::bases<Packet>>("Tag19")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag19::read)
    .def("show", &Tag19::show)
    .def("raw", &Tag19::raw)
    .def("set_hash", &Tag19::set_hash)
    .def("get_hash", &Tag19::get_hash)
    .def("clone", &Tag19::clone)
    ;
}
