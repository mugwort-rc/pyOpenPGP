#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub0.h"

void Tag2Sub0_init()
{
boost::python::class_<Tag2Sub0, boost::python::bases<Tag2Subpacket>>("Tag2Sub0")
    ;
}
