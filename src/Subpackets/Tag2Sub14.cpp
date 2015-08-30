#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub14.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub14> Tag2Sub14Wrapper;

void Tag2Sub14_init()
{
boost::python::class_<Tag2Sub14Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub14")
    ;
}
