#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag8.h"

void Tag8_init()
{
boost::python::class_<Tag8, boost::python::bases<Packet>>("Tag8")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag8::read)
    .def("get_comp", &Tag8::get_comp)
    .def("get_compressed_data", &Tag8::get_compressed_data)
    .def("show", &Tag8::show)
    .def("raw", &Tag8::raw)
    .def("set_comp", &Tag8::set_comp)
    .def("set_compressed_data", &Tag8::set_compressed_data)
    .def("set_data", &Tag8::set_data)
    .def("clone", &Tag8::clone)
    .def("get_data", &Tag8::get_data)
    ;
}
