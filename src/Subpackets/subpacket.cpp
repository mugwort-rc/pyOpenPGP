#include <boost/python.hpp>

#include "OpenPGP/Subpackets/subpacket.h"

class SubpacketWrapper : public boost::python::wrapper<Subpacket>, public Subpacket
{
public:
    void read(std::string & data)
    {
        this->get_override("read")(boost::ref(data));
    }

    std::string show(const uint8_t indents, const uint8_t indent_size) const
    {
        return this->get_override("show")(indents, indent_size);
    }

    std::string raw() const
    {
        return this->get_override("raw")();
    }

};

class Tag2SubpacketWrapper : public boost::python::wrapper<Tag2Subpacket>, public Tag2Subpacket
{
public:
    void read(std::string & data)
    {
        this->get_override("read")(boost::ref(data));
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

class Tag17SubpacketWrapper : public boost::python::wrapper<Tag17Subpacket>, public Tag17Subpacket
{
public:
    void read(std::string & data)
    {
        this->get_override("read")(boost::ref(data));
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

void subpacket_init()
{
boost::python::class_<SubpacketWrapper, boost::noncopyable>("Subpacket", boost::python::no_init)
    .def("read", boost::python::pure_virtual(&Subpacket::read))
    .def("get_type", &Subpacket::get_type)
    .def("set_type", &Subpacket::set_type)
    .def("write", &Subpacket::write)
    .def("show", boost::python::pure_virtual(&Subpacket::show))
    .def("raw", boost::python::pure_virtual(&Subpacket::raw))
    .def("get_size", &Subpacket::get_size)
    .def("set_size", &Subpacket::set_size)
    ;
boost::python::class_<Tag2SubpacketWrapper, boost::python::bases<Subpacket>, boost::noncopyable>("Tag2Subpacket", boost::python::no_init)
    .def("clone", boost::python::pure_virtual(&Tag2Subpacket::clone))
    ;
boost::python::class_<Tag17SubpacketWrapper, boost::python::bases<Subpacket>, boost::noncopyable>("Tag17Subpacket", boost::python::no_init)
    .def("clone", boost::python::pure_virtual(&Tag17Subpacket::clone))
    ;
}
