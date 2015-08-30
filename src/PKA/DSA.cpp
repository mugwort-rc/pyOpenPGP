#include <boost/python.hpp>

#include "OpenPGP/PKA/DSA.h"

void DSA_init()
{
boost::python::def("DSA_sign", static_cast<std::vector<PGPMPI>(*)(const PGPMPI &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &, PGPMPI)>(&DSA_sign));
boost::python::def("DSA_sign", static_cast<std::vector<PGPMPI>(*)(const std::string &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &, PGPMPI)>(&DSA_sign));
boost::python::def("new_DSA_public", &new_DSA_public);
boost::python::def("DSA_verify", static_cast<bool(*)(const PGPMPI &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&DSA_verify));
boost::python::def("DSA_verify", static_cast<bool(*)(const std::string &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&DSA_verify));
boost::python::def("DSA_keygen", &DSA_keygen);
}
