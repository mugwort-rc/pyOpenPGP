#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag60.h"

void Tag60_init()
{
boost::python::class_<Tag60, boost::python::bases<Packet>>("Tag60")
    .def(boost::python::init<const std::string &>())
    .def("read", &Tag60::read)
    .def("show", &Tag60::show)
    .def("raw", &Tag60::raw)
    .def("set_stream", &Tag60::set_stream)
    .def("clone", &Tag60::clone)
    .def("get_stream", &Tag60::get_stream)
    ;
}
