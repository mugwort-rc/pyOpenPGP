#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag10.h"

void Tag10_init()
{
boost::python::class_<Tag10, boost::python::bases<Packet>>("Tag10")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag10::read)
    .def("show", &Tag10::show)
    .def("raw", &Tag10::raw)
    .def("get_pgp", &Tag10::get_pgp)
    .def("set_pgp", &Tag10::set_pgp)
    .def("clone", &Tag10::clone)
    ;
}
