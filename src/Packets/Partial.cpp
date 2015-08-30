#include <boost/python.hpp>

#include "OpenPGP/Packets/Partial.h"

void Partial_init()
{
boost::python::class_<Partial, boost::python::bases<Packet>>("Partial")
    .def(boost::python::init<const std::string &>())
    .def("read", &Partial::read)
    .def("show", &Partial::show)
    .def("raw", &Partial::raw)
    .def("set_stream", &Partial::set_stream)
    .def("clone", &Partial::clone)
    .def("get_stream", &Partial::get_stream)
    ;
}
