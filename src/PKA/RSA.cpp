#include <boost/python.hpp>

#include "OpenPGP/PKA/RSA.h"

void RSA_init()
{
boost::python::def("RSA_encrypt", static_cast<PGPMPI(*)(const PGPMPI &, const std::vector<PGPMPI> &)>(&RSA_encrypt));
boost::python::def("RSA_encrypt", static_cast<PGPMPI(*)(const std::string &, const std::vector<PGPMPI> &)>(&RSA_encrypt));
boost::python::def("RSA_sign", static_cast<PGPMPI(*)(const PGPMPI &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&RSA_sign));
boost::python::def("RSA_sign", static_cast<PGPMPI(*)(const std::string &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&RSA_sign));
boost::python::def("RSA_verify", static_cast<bool(*)(const PGPMPI &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&RSA_verify));
boost::python::def("RSA_verify", static_cast<bool(*)(const std::string &, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&RSA_verify));
boost::python::def("RSA_decrypt", &RSA_decrypt);
boost::python::def("RSA_keygen", &RSA_keygen);
}
