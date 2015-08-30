#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag7.h"

void Tag7_init()
{
boost::python::class_<Tag7, boost::python::bases<Tag5>>("Tag7")
    .def(boost::python::init<const Tag7 &>())
    .def(boost::python::init<std::string &>())
    //.def("operator=", &Tag7::operator=)
    .def("clone", &Tag7::clone)
    .def("get_public_ptr", &Tag7::get_public_ptr)
    .def("get_public_obj", &Tag7::get_public_obj)
    ;
}
