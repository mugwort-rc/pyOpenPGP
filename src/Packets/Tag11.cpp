#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag11.h"

void Tag11_init()
{
boost::python::class_<Tag11, boost::python::bases<Packet>>("Tag11")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag11::read)
    .def("get_filename", &Tag11::get_filename)
    .def("set_time", &Tag11::set_time)
    .def("out", &Tag11::out)
    .def("show", &Tag11::show)
    .def("raw", &Tag11::raw)
    .def("set_format", &Tag11::set_format)
    .def("get_literal", &Tag11::get_literal)
    .def("get_time", &Tag11::get_time)
    .def("set_literal", &Tag11::set_literal)
    .def("get_format", &Tag11::get_format)
    .def("set_filename", &Tag11::set_filename)
    .def("clone", &Tag11::clone)
    ;
}
