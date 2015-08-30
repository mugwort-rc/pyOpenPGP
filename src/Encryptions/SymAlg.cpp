#include <boost/python.hpp>

#include "OpenPGP/Encryptions/SymAlg.h"

class SymAlgWrapper : public boost::python::wrapper<SymAlg>, public SymAlg
{
public:
    std::string encrypt(const std::string & DATA)
    {
        return this->get_override("encrypt")(DATA);
    }

    std::string decrypt(const std::string & DATA)
    {
        return this->get_override("decrypt")(DATA);
    }

    unsigned int blocksize() const
    {
        return this->get_override("blocksize")();
    }

};

void SymAlg_init()
{
boost::python::class_<SymAlgWrapper, boost::noncopyable>("SymAlg")
    .def("decrypt", boost::python::pure_virtual(&SymAlg::decrypt))
    .def("blocksize", boost::python::pure_virtual(&SymAlg::blocksize))
    .def("encrypt", boost::python::pure_virtual(&SymAlg::encrypt))
    ;
}
