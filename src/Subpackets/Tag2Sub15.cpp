#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub15.h"

void Tag2Sub15_init()
{
boost::python::class_<Tag2Sub15, boost::python::bases<Tag2Subpacket>>("Tag2Sub15")
    ;
}
