#include <boost/python.hpp>

#include "OpenPGP/decrypt.h"

void decrypt_init()
{
boost::python::def("find_decrypting_key", &find_decrypting_key);
boost::python::def("decrypt_secret_key", &decrypt_secret_key);
boost::python::def("decrypt_data", &decrypt_data);
boost::python::def("pka_decrypt", &pka_decrypt);
boost::python::def("decrypt_sym", &decrypt_sym);
boost::python::def("decrypt_pka", &decrypt_pka);
}
