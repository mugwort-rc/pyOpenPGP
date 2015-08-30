#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag3.h"

void Tag3_init()
{
boost::python::class_<Tag3, boost::python::bases<Packet>>("Tag3")
    .def(boost::python::init<const Tag3 &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Tag3::read)
    .def("get_s2k", &Tag3::get_s2k)
    .def("get_esk_clone", &Tag3::get_esk_clone)
    //.def("operator=", &Tag3::operator=)
    .def("set_sym", &Tag3::set_sym)
    .def("get_sym", &Tag3::get_sym)
    .def("show", &Tag3::show)
    .def("raw", &Tag3::raw)
    .def("set_s2k", &Tag3::set_s2k)
    .def("set_esk", static_cast<void(Tag3::*)(std::string *)>(&Tag3::set_esk))
    .def("set_esk", static_cast<void(Tag3::*)(const std::string &)>(&Tag3::set_esk))
    .def("get_esk", &Tag3::get_esk)
    .def("get_s2k_clone", &Tag3::get_s2k_clone)
    .def("get_key", &Tag3::get_key)
    .def("clone", &Tag3::clone)
    .def("set_key", &Tag3::set_key)
    ;
}
