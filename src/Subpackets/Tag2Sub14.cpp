#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub14.h"

void Tag2Sub14_init()
{
boost::python::class_<Tag2Sub14, boost::python::bases<Tag2Subpacket>>("Tag2Sub14")
    ;
}
