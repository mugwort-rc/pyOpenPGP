#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag17.h"

void Tag17_init()
{
boost::python::class_<Tag17, boost::python::bases<ID>>("Tag17")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag17::read)
    .def("show", &Tag17::show)
    .def("get_attributes_clone", &Tag17::get_attributes_clone)
    .def("raw", &Tag17::raw)
    .def("set_attributes", &Tag17::set_attributes)
    .def("clone", &Tag17::clone)
    .def("get_attributes", &Tag17::get_attributes)
    ;
}
