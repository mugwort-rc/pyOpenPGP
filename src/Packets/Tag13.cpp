#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag13.h"

void Tag13_init()
{
boost::python::class_<Tag13, boost::python::bases<ID>>("Tag13")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag13::read)
    .def("set_comment", &Tag13::set_comment)
    .def("show", &Tag13::show)
    .def("raw", &Tag13::raw)
    .def("get_name", &Tag13::get_name)
    .def("get_comment", &Tag13::get_comment)
    .def("set_name", &Tag13::set_name)
    .def("set_email", &Tag13::set_email)
    .def("get_email", &Tag13::get_email)
    .def("clone", &Tag13::clone)
    ;
}
