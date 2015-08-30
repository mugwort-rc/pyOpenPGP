#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag5.h"

void Tag5_init()
{
boost::python::class_<Tag5, boost::python::bases<Tag6>>("Tag5")
    .def(boost::python::init<const Tag5 &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Tag5::read)
    .def("get_sym", &Tag5::get_sym)
    //.def("operator=", &Tag5::operator=)
    .def("get_public_ptr", &Tag5::get_public_ptr)
    .def("get_public_obj", &Tag5::get_public_obj)
    .def("set_sym", &Tag5::set_sym)
    .def("show", &Tag5::show)
    .def("raw", &Tag5::raw)
    .def("set_s2k", &Tag5::set_s2k)
    .def("get_secret", &Tag5::get_secret)
    .def("set_secret", &Tag5::set_secret)
    .def("get_s2k_clone", &Tag5::get_s2k_clone)
    .def("get_s2k", &Tag5::get_s2k)
    .def("get_IV", &Tag5::get_IV)
    .def("set_IV", &Tag5::set_IV)
    .def("clone", &Tag5::clone)
    .def("set_s2k_con", &Tag5::set_s2k_con)
    .def("get_s2k_con", &Tag5::get_s2k_con)
    ;
}
