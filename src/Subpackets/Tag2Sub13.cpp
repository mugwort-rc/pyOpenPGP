#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub13.h"

void Tag2Sub13_init()
{
boost::python::class_<Tag2Sub13, boost::python::bases<Tag2Subpacket>>("Tag2Sub13")
    ;
}
