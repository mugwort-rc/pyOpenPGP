#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag4.h"

void Tag4_init()
{
boost::python::class_<Tag4, boost::python::bases<Packet>>("Tag4")
    .def(boost::python::init<const Tag4 &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Tag4::read)
    .def("get_nested", &Tag4::get_nested)
    .def("set_nested", &Tag4::set_nested)
    .def("get_type", &Tag4::get_type)
    .def("set_type", &Tag4::set_type)
    .def("show", &Tag4::show)
    .def("raw", &Tag4::raw)
    .def("set_hash", &Tag4::set_hash)
    .def("get_hash", &Tag4::get_hash)
    .def("set_pka", &Tag4::set_pka)
    .def("get_pka", &Tag4::get_pka)
    .def("get_keyid", &Tag4::get_keyid)
    .def("set_keyid", &Tag4::set_keyid)
    .def("clone", &Tag4::clone)
    ;
}
