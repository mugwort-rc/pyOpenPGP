#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub17.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub17> Tag2Sub17Wrapper;

void Tag2Sub17_init()
{
boost::python::class_<Tag2Sub17Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub17")
    ;
}
