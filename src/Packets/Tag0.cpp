#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag0.h"

class Tag0Wrapper : public boost::python::wrapper<Tag0>, public Tag0
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

void Tag0_init()
{
boost::python::class_<Tag0Wrapper, boost::python::bases<Packet>, boost::noncopyable>("Tag0")
    ;
}
