#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub17.h"

void Tag2Sub17_init()
{
boost::python::class_<Tag2Sub17, boost::python::bases<Tag2Subpacket>>("Tag2Sub17")
    ;
}
