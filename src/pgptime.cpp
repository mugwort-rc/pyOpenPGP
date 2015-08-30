#include <boost/python.hpp>

#include "OpenPGP/pgptime.h"

void pgptime_init()
{
boost::python::def("show_time", &show_time);
boost::python::def("now", &now);
boost::python::def("show_date", &show_date);
}
