#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub8.h"

void Tag2Sub8_init()
{
boost::python::class_<Tag2Sub8, boost::python::bases<Tag2Subpacket>>("Tag2Sub8")
    ;
}
