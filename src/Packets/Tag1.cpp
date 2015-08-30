#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag1.h"

void Tag1_init()
{
boost::python::class_<Tag1, boost::python::bases<Packet>>("Tag1")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag1::read)
    .def("get_keyid", &Tag1::get_keyid)
    .def("show", &Tag1::show)
    .def("raw", &Tag1::raw)
    .def("set_mpi", &Tag1::set_mpi)
    .def("set_pka", &Tag1::set_pka)
    .def("get_pka", &Tag1::get_pka)
    .def("get_mpi", &Tag1::get_mpi)
    .def("clone", &Tag1::clone)
    .def("set_keyid", &Tag1::set_keyid)
    ;
}
