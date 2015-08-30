#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub8.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub8> Tag2Sub8Wrapper;

void Tag2Sub8_init()
{
boost::python::class_<Tag2Sub8Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub8")
    ;
}
