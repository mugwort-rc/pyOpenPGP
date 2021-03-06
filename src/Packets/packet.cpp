#include <boost/python.hpp>

#include "OpenPGP/Packets/packet.h"

class PacketWrapper : public boost::python::wrapper<Packet>, public Packet
{
public:
    void read(std::string & data, const uint8_t part)
    {
        this->get_override("read")(boost::ref(data), part);
    }

    std::string show(const uint8_t indents, const uint8_t indent_size) const
    {
        return this->get_override("show")(indents, indent_size);
    }

    std::string raw() const
    {
        return this->get_override("raw")();
    }

    Ptr clone() const
    {
        return this->get_override("clone")();
    }

};

void packet_init()
{
boost::python::class_<PacketWrapper, boost::noncopyable>("Packet")
    .def("read", boost::python::pure_virtual(&Packet::read))
    .def("get_tag", &Packet::get_tag)
    .def("get_partial", &Packet::get_partial)
    //.def("operator=", &Packet::operator=)
    .def("set_partial", &Packet::set_partial)
    .def("write", &Packet::write)
    .def("show", boost::python::pure_virtual(&Packet::show))
    .def("raw", boost::python::pure_virtual(&Packet::raw))
    .def("set_format", &Packet::set_format)
    .def("set_tag", &Packet::set_tag)
    .def("get_format", &Packet::get_format)
    .def("get_size", &Packet::get_size)
    .def("set_version", &Packet::set_version)
    .def("get_version", &Packet::get_version)
    .def("set_size", &Packet::set_size)
    .def("clone", boost::python::pure_virtual(&Packet::clone))
    ;
boost::python::class_<Key, boost::python::bases<Packet>>("Key")
    .def(boost::python::init<const Key &>())
    .def(boost::python::init<std::string &>())
    .def("read", &Key::read)
    .def("set_time", &Key::set_time)
    .def("get_keyid", &Key::get_keyid)
    .def("show", &Key::show)
    .def("raw", &Key::raw)
    //.def("operator=", &Key::operator=)
    .def("get_fingerprint", &Key::get_fingerprint)
    .def("set_mpi", &Key::set_mpi)
    .def("get_time", &Key::get_time)
    .def("set_pka", &Key::set_pka)
    .def("get_pka", &Key::get_pka)
    .def("get_mpi", &Key::get_mpi)
    .def("clone", &Key::clone)
    ;
boost::python::class_<ID, boost::python::bases<Packet>, boost::noncopyable>("ID", boost::python::no_init)
    //.def("operator=", &ID::operator=)
    ;
}
