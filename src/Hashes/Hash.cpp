#include <boost/python.hpp>

#include "OpenPGP/Hashes/Hash.h"

class HashWrapper : public boost::python::wrapper<Hash>, public Hash
{
    void update(const std::string & str)
    {
        this->get_override("update")(str);
    }

    std::string hexdigest()
    {
        return this->get_override("hexdigest")();
    }

    unsigned int blocksize() const
    {
        return this->get_override("blocksize")();
    }

    unsigned int digestsize() const
    {
        return this->get_override("digestsize")();
    }
};

void Hash_init()
{
boost::python::class_<HashWrapper, boost::noncopyable>("Hash")
    .def("digestsize", boost::python::pure_virtual(&Hash::digestsize))
    .def("blocksize", boost::python::pure_virtual(&Hash::blocksize))
    .def("digest", &Hash::digest)
    .def("hexdigest", boost::python::pure_virtual(&Hash::hexdigest))
    .def("update", boost::python::pure_virtual(&Hash::update))
    ;
}
