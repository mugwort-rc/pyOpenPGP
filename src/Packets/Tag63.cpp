#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag63.h"

void Tag63_init()
{
boost::python::class_<Tag63, boost::python::bases<Packet>>("Tag63")
    .def(boost::python::init<const std::string &>())
    .def("read", &Tag63::read)
    .def("show", &Tag63::show)
    .def("raw", &Tag63::raw)
    .def("set_stream", &Tag63::set_stream)
    .def("clone", &Tag63::clone)
    .def("get_stream", &Tag63::get_stream)
    ;
}
