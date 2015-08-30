#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag9.h"

void Tag9_init()
{
boost::python::class_<Tag9, boost::python::bases<Packet>>("Tag9")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag9::read)
    .def("get_encrypted_data", &Tag9::get_encrypted_data)
    .def("show", &Tag9::show)
    .def("raw", &Tag9::raw)
    .def("set_encrypted_data", &Tag9::set_encrypted_data)
    .def("clone", &Tag9::clone)
    ;
}
