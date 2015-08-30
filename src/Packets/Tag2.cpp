#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag2.h"

void Tag2_init()
{
boost::python::class_<Tag2, boost::python::bases<Packet>>("Tag2")
    .def(boost::python::init<const Tag2 &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Tag2::read)
    .def("show", &Tag2::show)
    .def("raw", &Tag2::raw)
    .def("get_type", &Tag2::get_type)
    .def("get_pka", &Tag2::get_pka)
    .def("get_hash", &Tag2::get_hash)
    .def("get_left16", &Tag2::get_left16)
    .def("get_mpi", &Tag2::get_mpi)
    .def("get_time", &Tag2::get_time)
    .def("get_keyid", &Tag2::get_keyid)
    .def("get_hashed_subpackets", &Tag2::get_hashed_subpackets)
    .def("get_hashed_subpackets_clone", &Tag2::get_hashed_subpackets_clone)
    .def("get_unhashed_subpackets", &Tag2::get_unhashed_subpackets)
    .def("get_unhashed_subpackets_clone", &Tag2::get_unhashed_subpackets_clone)
    .def("get_up_to_hashed", &Tag2::get_up_to_hashed)
    .def("get_without_unhashed", &Tag2::get_without_unhashed)
    .def("set_pka", &Tag2::set_pka)
    .def("set_type", &Tag2::set_type)
    .def("set_hash", &Tag2::set_hash)
    .def("set_left16", &Tag2::set_left16)
    .def("set_mpi", &Tag2::set_mpi)
    .def("set_time", &Tag2::set_time)
    .def("set_keyid", &Tag2::set_keyid)
    .def("set_hashed_subpackets", &Tag2::set_hashed_subpackets)
    .def("set_unhashed_subpackets", &Tag2::set_unhashed_subpackets)
    .def("find_subpacket", &Tag2::find_subpacket)
    .def("clone", &Tag2::clone)
    //.def("operator=", &Tag2::operator=)
    ;
}
