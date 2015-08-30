#include <boost/python.hpp>

#include "OpenPGP/Subpackets/subpacket.h"

void subpacket_init()
{
boost::python::class_<Subpacket, boost::noncopyable>("Subpacket", boost::python::no_init)
    .def("read", &Subpacket::read)
    .def("get_type", &Subpacket::get_type)
    .def("set_type", &Subpacket::set_type)
    .def("write", &Subpacket::write)
    .def("show", &Subpacket::show)
    .def("raw", &Subpacket::raw)
    .def("get_size", &Subpacket::get_size)
    .def("set_size", &Subpacket::set_size)
    ;
boost::python::class_<Tag2Subpacket, boost::python::bases<Subpacket>, boost::noncopyable>("Tag2Subpacket", boost::python::no_init)
    .def("clone", &Tag2Subpacket::clone)
    ;
boost::python::class_<Tag17Subpacket, boost::python::bases<Subpacket>, boost::noncopyable>("Tag17Subpacket", boost::python::no_init)
    .def("clone", &Tag17Subpacket::clone)
    ;
}
