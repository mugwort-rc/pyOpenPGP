#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub19.h"

void Tag2Sub19_init()
{
boost::python::class_<Tag2Sub19, boost::python::bases<Tag2Subpacket>>("Tag2Sub19")
    ;
}
