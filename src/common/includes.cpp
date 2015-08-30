#include <boost/python.hpp>

#include "OpenPGP/common/includes.h"

void includes_init()
{
boost::python::def("pad", &pad);
boost::python::def("bintohex", &bintohex);
boost::python::def("remove_padding", &remove_padding);
boost::python::def("unbinify", &unbinify);
boost::python::def("pkcs5", &pkcs5);
boost::python::def("unhexlify", &unhexlify);
boost::python::def("hexlify", static_cast<std::string(*)(const std::string &, bool)>(&hexlify));
boost::python::def("hexlify", static_cast<std::string(*)(const char, bool)>(&hexlify));
boost::python::def("binify", static_cast<std::string(*)(const std::string &, unsigned int)>(&binify));
boost::python::def("binify", static_cast<std::string(*)(unsigned char)>(&binify));
boost::python::def("little_end", &little_end);
boost::python::def("xor_strings", &xor_strings);
boost::python::def("zfill", &zfill);
boost::python::def("toint", &toint);
}
