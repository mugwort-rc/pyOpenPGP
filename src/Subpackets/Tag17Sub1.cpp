#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag17Sub1.h"

void Tag17Sub1_init()
{
boost::python::class_<Tag17Sub1, boost::python::bases<Tag17Subpacket>>("Tag17Sub1")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag17Sub1::read)
    .def("set_image", &Tag17Sub1::set_image)
    .def("show", &Tag17Sub1::show)
    .def("raw", &Tag17Sub1::raw)
    .def("get_image", &Tag17Sub1::get_image)
    .def("clone", &Tag17Sub1::clone)
    ;
}
