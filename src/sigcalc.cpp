#include <boost/python.hpp>

#include "OpenPGP/sigcalc.h"

void sigcalc_init()
{
boost::python::def("to_sign_11", &to_sign_11);
boost::python::def("to_sign_20", &to_sign_20);
boost::python::def("to_sign_30", &to_sign_30);
boost::python::def("to_sign_19", &to_sign_19);
boost::python::def("certification", &certification);
boost::python::def("to_sign_00", &to_sign_00);
boost::python::def("to_sign_18", &to_sign_18);
boost::python::def("to_sign_01", &to_sign_01);
boost::python::def("to_sign_12", &to_sign_12);
boost::python::def("to_sign_02", &to_sign_02);
boost::python::def("to_sign_1f", &to_sign_1f);
boost::python::def("to_sign_10", &to_sign_10);
boost::python::def("overkey", &overkey);
boost::python::def("to_sign_40", &to_sign_40);
boost::python::def("addtrailer", &addtrailer);
boost::python::def("to_sign_28", &to_sign_28);
boost::python::def("to_sign_13", &to_sign_13);
boost::python::def("to_sign_50", &to_sign_50);
}
