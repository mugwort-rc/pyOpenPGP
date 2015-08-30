#include <boost/python.hpp>

#include "OpenPGP/Packets/s2k.h"

void s2k_init()
{
boost::python::class_<S2K, boost::noncopyable>("S2K", boost::python::no_init)
    .def("read", &S2K::read)
    .def("get_type", &S2K::get_type)
    .def("set_type", &S2K::set_type)
    .def("write", &S2K::write)
    .def("show", &S2K::show)
    .def("raw", &S2K::raw)
    .def("run", &S2K::run)
    .def("set_hash", &S2K::set_hash)
    .def("get_hash", &S2K::get_hash)
    .def("clone", &S2K::clone)
    ;
boost::python::class_<S2K0, boost::python::bases<S2K>>("S2K0")
    .def("read", &S2K0::read)
    .def("show", &S2K0::show)
    .def("clone", &S2K0::clone)
    .def("raw", &S2K0::raw)
    .def("run", &S2K0::run)
    ;
boost::python::class_<S2K1, boost::python::bases<S2K0>>("S2K1")
    .def("read", &S2K1::read)
    .def("show", &S2K1::show)
    .def("raw", &S2K1::raw)
    .def("run", &S2K1::run)
    .def("set_salt", &S2K1::set_salt)
    .def("get_salt", &S2K1::get_salt)
    .def("clone", &S2K1::clone)
    ;
boost::python::class_<S2K3, boost::python::bases<S2K1>>("S2K3")
    .def("read", &S2K3::read)
    .def("show", &S2K3::show)
    .def("raw", &S2K3::raw)
    .def("run", &S2K3::run)
    .def("get_count", &S2K3::get_count)
    .def("set_count", &S2K3::set_count)
    .def("clone", &S2K3::clone)
    ;
boost::python::def("coded_count", &coded_count);
}
