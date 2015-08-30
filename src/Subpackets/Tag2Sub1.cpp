#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub1.h"

void Tag2Sub1_init()
{
boost::python::class_<Tag2Sub1, boost::python::bases<Tag2Subpacket>>("Tag2Sub1")
    ;
}
