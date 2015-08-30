#include <boost/python.hpp>

#include "OpenPGP/sign.h"

void sign_init()
{
boost::python::def("sign_cleartext", &sign_cleartext);
boost::python::def("sign_00", &sign_00);
boost::python::def("pka_sign", static_cast<std::vector<PGPMPI>(*)(const std::string &, const uint8_t, const std::vector<PGPMPI> &, const std::vector<PGPMPI> &, const uint8_t)>(&pka_sign));
boost::python::def("pka_sign", static_cast<std::vector<PGPMPI>(*)(const std::string &, const Tag5::Ptr &, const std::string &, const uint8_t)>(&pka_sign));
boost::python::def("sign_subkey", &sign_subkey);
boost::python::def("sign_message", static_cast<PGPMessage(*)(const PGPSecretKey &, const std::string &, const std::string &, const std::string &, const uint8_t, const uint8_t)>(&sign_message));
boost::python::def("sign_message", static_cast<PGPMessage(*)(const PGPSecretKey &, const std::string &, const std::string &, const uint8_t, const uint8_t)>(&sign_message));
boost::python::def("sign_message", static_cast<PGPMessage(*)(const PGPSecretKey &, const std::string &, const std::string &, std::ifstream &, const uint8_t, const uint8_t)>(&sign_message));
boost::python::def("sign_detach", static_cast<PGPDetachedSignature(*)(const PGPSecretKey &, const std::string &, const std::string &, const uint8_t)>(&sign_detach));
boost::python::def("sign_detach", static_cast<PGPDetachedSignature(*)(const PGPSecretKey &, const std::string &, std::ifstream &, const uint8_t)>(&sign_detach));
boost::python::def("standalone_signature", &standalone_signature);
boost::python::def("find_user_id", &find_user_id);
boost::python::def("sign_primary_key_binding", static_cast<Tag2::Ptr(*)(const Tag7::Ptr &, const std::string &, const Tag6::Ptr &, const Tag14::Ptr &, const uint8_t)>(&sign_primary_key_binding));
boost::python::def("sign_primary_key_binding", static_cast<Tag2::Ptr(*)(const PGPSecretKey &, const std::string &, const PGPPublicKey &, const uint8_t)>(&sign_primary_key_binding));
boost::python::def("sign_primary_key", static_cast<Tag2::Ptr(*)(const Tag5::Ptr &, const ID::Ptr &, const std::string &, const uint8_t, const uint8_t)>(&sign_primary_key));
boost::python::def("sign_primary_key", static_cast<PGPPublicKey(*)(const PGPSecretKey &, const std::string &, const PGPPublicKey &, const uint8_t, const uint8_t)>(&sign_primary_key));
boost::python::def("create_sig_packet", static_cast<Tag2::Ptr(*)(const uint8_t, const Tag5::Ptr &, const ID::Ptr &, const uint8_t)>(&create_sig_packet));
boost::python::def("create_sig_packet", static_cast<Tag2::Ptr(*)(const uint8_t, const PGPSecretKey &, const uint8_t)>(&create_sig_packet));
}
