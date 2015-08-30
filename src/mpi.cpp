#include <boost/python.hpp>

#include "OpenPGP/mpi.h"

void mpi_init()
{
boost::python::def("mpitoulong", &mpitoulong);
boost::python::def("bitsize", &bitsize);
boost::python::def("bintompi", &bintompi);
boost::python::def("knuth_prime_test", &knuth_prime_test);
boost::python::def("mpitobin", &mpitobin);
boost::python::def("read_MPI", &read_MPI);
boost::python::def("mpitoraw", &mpitoraw);
boost::python::def("write_MPI", &write_MPI);
boost::python::def("hextompi", &hextompi);
boost::python::def("powm", &powm);
boost::python::def("dectompi", &dectompi);
boost::python::def("rawtompi", &rawtompi);
boost::python::def("invert", &invert);
boost::python::def("mpitodec", &mpitodec);
boost::python::def("mpigcd", &mpigcd);
boost::python::def("random", &random);
boost::python::def("mpitohex", &mpitohex);
boost::python::def("nextprime", &nextprime);
}
