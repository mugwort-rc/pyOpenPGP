#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub13.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub13> Tag2Sub13Wrapper;

void Tag2Sub13_init()
{
boost::python::class_<Tag2Sub13Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub13")
    ;
}
