#include <boost/python.hpp>

#include "OpenPGP/Packets/packets.h"

void packets_init()
{
boost::python::def("read_packet_header", &read_packet_header);
boost::python::def("read_packet", &read_packet);
boost::python::def("partialBodyLen", &partialBodyLen);
boost::python::def("read_packet_raw", &read_packet_raw);
}
