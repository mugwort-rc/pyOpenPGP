#include <boost/python.hpp>

#include "OpenPGP/encrypt.h"

void encrypt_init()
{
boost::python::def("encrypt_sym", &encrypt_sym);
boost::python::def("find_encrypting_key", &find_encrypting_key);
boost::python::def("encrypt_pka", &encrypt_pka);
boost::python::def("encrypt_data", &encrypt_data);
boost::python::def("pka_encrypt", static_cast<std::vector<PGPMPI>(*)(const uint8_t, PGPMPI, const std::vector<PGPMPI> &)>(&pka_encrypt));
boost::python::def("pka_encrypt", static_cast<std::vector<PGPMPI>(*)(const uint8_t, const std::string &, const std::vector<PGPMPI> &)>(&pka_encrypt));
}
