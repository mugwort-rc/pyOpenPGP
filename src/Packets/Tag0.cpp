#include <boost/python.hpp>

#include "OpenPGP/Packets/Tag0.h"

void Tag0_init()
{
boost::python::class_<Tag0, boost::python::bases<Packet>>("Tag0")
    ;
}
