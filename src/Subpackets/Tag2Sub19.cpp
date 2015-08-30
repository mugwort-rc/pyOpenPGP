#include <boost/python.hpp>

#include "OpenPGP/Subpackets/Tag2Sub19.h"

#include "Tag2Sub.hpp"

typedef Tag2SubWrapper<Tag2Sub19> Tag2Sub19Wrapper;

void Tag2Sub19_init()
{
boost::python::class_<Tag2Sub19Wrapper, boost::python::bases<Tag2Subpacket>, boost::noncopyable>("Tag2Sub19")
    ;
}
