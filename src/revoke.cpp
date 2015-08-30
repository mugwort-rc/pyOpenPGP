#include <boost/python.hpp>

#include "OpenPGP/revoke.h"

void revoke_init()
{
boost::python::def("revoke_subkey", &revoke_subkey);
boost::python::def("revoke_with_cert", static_cast<PGPPublicKey(*)(const PGPPublicKey &, PGPPublicKey &)>(&revoke_with_cert));
boost::python::def("revoke_with_cert", static_cast<PGPPublicKey(*)(const PGPSecretKey &, PGPPublicKey &)>(&revoke_with_cert));
boost::python::def("revoke_key", &revoke_key);
boost::python::def("revoke_primary_key_cert", &revoke_primary_key_cert);
boost::python::def("revoke_primary_key_cert_key", &revoke_primary_key_cert_key);
boost::python::def("revoke_subkey_cert", &revoke_subkey_cert);
boost::python::def("revoke_subkey_cert_key", &revoke_subkey_cert_key);
boost::python::def("revoke_uid", &revoke_uid);
boost::python::def("check_revoked", static_cast<bool(*)(const std::vector<Packet::Ptr> &, const std::string &)>(&check_revoked));
boost::python::def("check_revoked", static_cast<bool(*)(const PGPPublicKey &, const std::string &)>(&check_revoked));
boost::python::def("check_revoked", static_cast<bool(*)(const PGPSecretKey &, const std::string &)>(&check_revoked));
}
