#ifndef __PYOPENPGP_SUBPACKETS_TAG2SUB__
#define __PYOPENPGP_SUBPACKETS_TAG2SUB__

#include <boost/python.hpp>

#include "OpenPGP/Subpackets/subpacket.h"

template <class T>
class Tag2SubWrapper : public boost::python::wrapper<T>, public T
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

    Tag2Subpacket::Ptr clone() const
    {
        return this->get_override("clone")();
    }

};

#endif
