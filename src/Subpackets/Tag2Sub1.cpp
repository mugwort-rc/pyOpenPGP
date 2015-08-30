#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub1.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub1> Tag2Sub1Wrapper;

void Tag2Sub1_init()
{
boost::python::class_<Tag2Sub1Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub1")
    ;
}
