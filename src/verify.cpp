#include <boost/python.hpp>

#include "OpenPGP/verify.h"

void verify_init()
{
boost::python::def("verify_message", static_cast<bool(*)(const Tag6::Ptr &, const PGPMessage &)>(&verify_message));
boost::python::def("verify_message", static_cast<bool(*)(const PGPPublicKey &, const PGPMessage &)>(&verify_message));
boost::python::def("verify_message", static_cast<bool(*)(const PGPSecretKey &, const PGPMessage &)>(&verify_message));
boost::python::def("verify_detachedsig", static_cast<bool(*)(const PGPPublicKey &, const std::string &, const PGPDetachedSignature &)>(&verify_detachedsig));
boost::python::def("verify_detachedsig", static_cast<bool(*)(const PGPSecretKey &, const std::string &, const PGPDetachedSignature &)>(&verify_detachedsig));
boost::python::def("verify_detachedsig", static_cast<bool(*)(const PGPPublicKey &, std::ifstream &, const PGPDetachedSignature &)>(&verify_detachedsig));
boost::python::def("verify_detachedsig", static_cast<bool(*)(const PGPSecretKey &, std::ifstream &, const PGPDetachedSignature &)>(&verify_detachedsig));
boost::python::def("verify_revoke", static_cast<bool(*)(const Tag6::Ptr &, const Tag2::Ptr &)>(&verify_revoke));
boost::python::def("verify_revoke", static_cast<bool(*)(const PGPPublicKey &, const PGPPublicKey &)>(&verify_revoke));
boost::python::def("verify_revoke", static_cast<bool(*)(const PGPSecretKey &, const PGPPublicKey &)>(&verify_revoke));
boost::python::def("verify_key", static_cast<bool(*)(const PGPPublicKey &, const PGPPublicKey &)>(&verify_key));
boost::python::def("verify_key", static_cast<bool(*)(const PGPSecretKey &, const PGPPublicKey &)>(&verify_key));
boost::python::def("verify_cleartext_signature", static_cast<bool(*)(const PGPPublicKey &, const PGPCleartextSignature &)>(&verify_cleartext_signature));
boost::python::def("verify_cleartext_signature", static_cast<bool(*)(const PGPSecretKey &, const PGPCleartextSignature &)>(&verify_cleartext_signature));
boost::python::def("pka_verify", static_cast<bool(*)(const std::string &, const uint8_t, const uint8_t, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &)>(&pka_verify));
boost::python::def("pka_verify", static_cast<bool(*)(const std::string &, const Tag6::Ptr, const Tag2::Ptr &)>(&pka_verify));
}
