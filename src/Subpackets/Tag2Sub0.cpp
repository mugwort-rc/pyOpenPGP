#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub0.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub0> Tag2Sub0Wrapper;

void Tag2Sub0_init()
{
boost::python::class_<Tag2Sub0Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub0")
    ;
}
