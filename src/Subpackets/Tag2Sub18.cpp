#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub18.h"

void Tag2Sub18_init()
{
boost::python::class_<Tag2Sub18, boost::python::bases<Tag2Subpacket>>("Tag2Sub18")
    ;
}
