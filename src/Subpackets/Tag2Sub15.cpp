#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub15.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub15> Tag2Sub15Wrapper;

void Tag2Sub15_init()
{
boost::python::class_<Tag2Sub15Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub15")
    ;
}
