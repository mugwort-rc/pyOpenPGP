#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub18.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub18> Tag2Sub18Wrapper;

void Tag2Sub18_init()
{
boost::python::class_<Tag2Sub18Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub18")
    ;
}
