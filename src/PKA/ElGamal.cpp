#include <boost/python.hpp>

#include "OpenPGP/PKA/ElGamal.h"

void ElGamal_init()
{
boost::python::def("ElGamal_decrypt", &ElGamal_decrypt);
boost::python::def("ElGamal_encrypt", static_cast<std::vector<PGPMPI>(*)(const PGPMPI &, const std::vector<PGPMPI> &)>(&ElGamal_encrypt));
boost::python::def("ElGamal_encrypt", static_cast<std::vector<PGPMPI>(*)(const std::string &, const std::vector<PGPMPI> &)>(&ElGamal_encrypt));
boost::python::def("ElGamal_keygen", &ElGamal_keygen);
}
