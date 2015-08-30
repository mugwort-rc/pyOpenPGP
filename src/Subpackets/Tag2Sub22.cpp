#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub22.h"

void Tag2Sub22_init()
{
boost::python::class_<Tag2Sub22, boost::python::bases<Tag2Subpacket>>("Tag2Sub22")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub22::read)
    .def("show", &Tag2Sub22::show)
    .def("raw", &Tag2Sub22::raw)
    .def("get_pca", &Tag2Sub22::get_pca)
    .def("set_pca", &Tag2Sub22::set_pca)
    .def("clone", &Tag2Sub22::clone)
    ;
}
