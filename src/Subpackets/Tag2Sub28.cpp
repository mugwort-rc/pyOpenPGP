#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub28.h"

void Tag2Sub28_init()
{
boost::python::class_<Tag2Sub28, boost::python::bases<Tag2Subpacket>>("Tag2Sub28")
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2Sub28::read)
    .def("show", &Tag2Sub28::show)
    .def("raw", &Tag2Sub28::raw)
    .def("get_signer", &Tag2Sub28::get_signer)
    .def("set_signer", &Tag2Sub28::set_signer)
    .def("clone", &Tag2Sub28::clone)
    ;
}
