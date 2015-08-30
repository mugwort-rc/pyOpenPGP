#include <boost/python.hpp>

#include "OpenPGP/common/integer.h"

void integer_init()
{
boost::python::class_<integer>("integer")
    .def(boost::python::init<const integer::REP &, const bool &>())
    .def(boost::python::init<const integer &>())
    .def(boost::python::init<const bool &>())
    .def(boost::python::init<const uint8_t &>())
    .def(boost::python::init<const uint16_t &>())
    .def(boost::python::init<const uint32_t &>())
    .def(boost::python::init<const uint64_t &>())
    .def(boost::python::init<const int8_t &>())
    .def(boost::python::init<const int16_t &>())
    .def(boost::python::init<const int32_t &>())
    .def(boost::python::init<const int64_t &>())
    .def(boost::python::init<const std::string &, const uint16_t &>())
    //.def("operator<<", static_cast<integer(integer::*)(const integer &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const bool &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator<<))
    //.def("operator<<", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator<<))
    .def("bits", &integer::bits)
    //.def("operator+=", static_cast<integer(integer::*)(const integer &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const bool &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator+=))
    //.def("operator+=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator+=))
    //.def("operator>=", static_cast<bool(integer::*)(const integer &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const bool &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator>=))
    //.def("operator>=", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator>=))
    //.def("operator==", static_cast<bool(integer::*)(const integer &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const bool &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator==))
    //.def("operator==", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator==))
    //.def("operator>", static_cast<bool(integer::*)(const integer &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const bool &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator>))
    //.def("operator>", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator>))
    //.def("operator+", static_cast<integer(integer::*)(const integer &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const bool &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator+))
    //.def("operator+", static_cast<integer(integer::*)() const>(&integer::operator+))
    //.def("operator|", static_cast<integer(integer::*)(const integer &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const bool &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator|))
    //.def("operator|", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator|))
    .def("fill", &integer::fill)
    .def("str", &integer::str)
    .def("digits", &integer::digits)
    //.def("operator>>=", static_cast<integer(integer::*)(const integer &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const bool &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator>>=))
    //.def("operator>>=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator>>=))
    .def("sign", &integer::sign)
    //.def("operator%=", static_cast<integer(integer::*)(const integer &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const bool &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator%=))
    //.def("operator%=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator%=))
    //.def("operator%", static_cast<integer(integer::*)(const integer &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const bool &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator%))
    //.def("operator%", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator%))
    //.def("operator|=", static_cast<integer(integer::*)(const integer &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const bool &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator|=))
    //.def("operator|=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator|=))
    //.def("operator^=", static_cast<integer(integer::*)(const integer &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const bool &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator^=))
    //.def("operator^=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator^=))
    //.def("operator++", static_cast<const integer &(integer::*)()>(&integer::operator++))
    //.def("operator++", static_cast<integer(integer::*)(int)>(&integer::operator++))
    //.def("operator^", static_cast<integer(integer::*)(const integer &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const bool &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator^))
    //.def("operator^", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator^))
    //.def("operator!=", static_cast<bool(integer::*)(const integer &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const bool &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator!=))
    //.def("operator!=", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator!=))
    .def("twos_complement", &integer::twos_complement)
    //.def("operator!", &integer::operator!)
    //.def("operator*=", static_cast<integer(integer::*)(const integer &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const bool &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator*=))
    //.def("operator*=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator*=))
    //.def("operator[]", &integer::operator[])
    //.def("operator-", static_cast<integer(integer::*)(const integer &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const bool &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator-))
    //.def("operator-", static_cast<integer(integer::*)() const>(&integer::operator-))
    //.def("operator&=", static_cast<integer(integer::*)(const integer &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const bool &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator&=))
    //.def("operator&=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator&=))
    //.def("operator&", static_cast<integer(integer::*)(const integer &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const bool &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator&))
    //.def("operator&", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator&))
    .def("abs", &integer::abs)
    //.def("operator~", &integer::operator~)
    //.def("operator<", static_cast<bool(integer::*)(const integer &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const bool &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator<))
    //.def("operator<", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator<))
    //.def("operator-=", static_cast<integer(integer::*)(const integer &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const bool &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator-=))
    //.def("operator-=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator-=))
    //.def("operator>>", static_cast<integer(integer::*)(const integer &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const bool &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator>>))
    //.def("operator>>", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator>>))
    //.def("operator*", static_cast<integer(integer::*)(const integer &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const bool &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator*))
    //.def("operator*", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator*))
    .def("data", &integer::data)
    //.def("operator<=", static_cast<bool(integer::*)(const integer &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const bool &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const uint8_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const uint16_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const uint32_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const uint64_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const int8_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const int16_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const int32_t &) const>(&integer::operator<=))
    //.def("operator<=", static_cast<bool(integer::*)(const int64_t &) const>(&integer::operator<=))
    //.def("operator=", static_cast<const integer &(integer::*)(const integer &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const bool &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const uint8_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const uint16_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const uint32_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const uint64_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const int8_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const int16_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const int32_t &)>(&integer::operator=))
    //.def("operator=", static_cast<const integer &(integer::*)(const int64_t &)>(&integer::operator=))
    //.def("operator--", static_cast<const integer &(integer::*)()>(&integer::operator--))
    //.def("operator--", static_cast<integer(integer::*)(int)>(&integer::operator--))
    .def("bytes", &integer::bytes)
    //.def("operator/", static_cast<integer(integer::*)(const integer &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const bool &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const uint8_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const uint16_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const uint32_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const uint64_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const int8_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const int16_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const int32_t &) const>(&integer::operator/))
    //.def("operator/", static_cast<integer(integer::*)(const int64_t &) const>(&integer::operator/))
    //.def("operator/=", static_cast<integer(integer::*)(const integer &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const bool &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator/=))
    //.def("operator/=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator/=))
    //.def("operator<<=", static_cast<integer(integer::*)(const integer &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const bool &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const uint8_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const uint16_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const uint32_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const uint64_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const int8_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const int16_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const int32_t &)>(&integer::operator<<=))
    //.def("operator<<=", static_cast<integer(integer::*)(const int64_t &)>(&integer::operator<<=))
    ;
//boost::python::def("operator<<", static_cast<integer(*)(const bool &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const int8_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const int16_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const int32_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<integer(*)(const int64_t &, const integer &)>(&operator<<));
//boost::python::def("operator<<", static_cast<std::ostream &(*)(std::ostream &, const integer &)>(&operator<<));
//boost::python::def("operator+=", static_cast<bool(*)(bool &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator+=));
//boost::python::def("operator+=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator+=));
//boost::python::def("operator>=", static_cast<bool(*)(bool &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(uint8_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(uint16_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(uint32_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(uint64_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(int8_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(int16_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(int32_t &, const integer &)>(&operator>=));
//boost::python::def("operator>=", static_cast<bool(*)(int64_t &, const integer &)>(&operator>=));
//boost::python::def("operator==", static_cast<bool(*)(bool &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(uint8_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(uint16_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(uint32_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(uint64_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(int8_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(int16_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(int32_t &, const integer &)>(&operator==));
//boost::python::def("operator==", static_cast<bool(*)(int64_t &, const integer &)>(&operator==));
//boost::python::def("operator>", static_cast<bool(*)(const bool &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const uint8_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const uint16_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const uint32_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const uint64_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const int8_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const int16_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const int32_t &, const integer &)>(&operator>));
//boost::python::def("operator>", static_cast<bool(*)(const int64_t &, const integer &)>(&operator>));
//boost::python::def("operator+", static_cast<integer(*)(const bool &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const int8_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const int16_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const int32_t &, const integer &)>(&operator+));
//boost::python::def("operator+", static_cast<integer(*)(const int64_t &, const integer &)>(&operator+));
//boost::python::def("operator|", static_cast<integer(*)(const bool &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const int8_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const int16_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const int32_t &, const integer &)>(&operator|));
//boost::python::def("operator|", static_cast<integer(*)(const int64_t &, const integer &)>(&operator|));
boost::python::def("makehex", &makehex);
//boost::python::def("operator>>=", static_cast<bool(*)(bool &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator>>=));
//boost::python::def("operator>>=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator>>=));
//boost::python::def("operator%=", static_cast<bool(*)(bool &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator%=));
//boost::python::def("operator%=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator%=));
//boost::python::def("operator%", static_cast<integer(*)(const bool &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const int8_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const int16_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const int32_t &, const integer &)>(&operator%));
//boost::python::def("operator%", static_cast<integer(*)(const int64_t &, const integer &)>(&operator%));
//boost::python::def("operator|=", static_cast<bool(*)(bool &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator|=));
//boost::python::def("operator|=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator|=));
//boost::python::def("operator^=", static_cast<bool(*)(bool &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator^=));
//boost::python::def("operator^=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator^=));
//boost::python::def("operator^", static_cast<integer(*)(const bool &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const int8_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const int16_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const int32_t &, const integer &)>(&operator^));
//boost::python::def("operator^", static_cast<integer(*)(const int64_t &, const integer &)>(&operator^));
boost::python::def("makebin", &makebin);
//boost::python::def("operator!=", static_cast<bool(*)(bool &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(uint8_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(uint16_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(uint32_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(uint64_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(int8_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(int16_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(int32_t &, const integer &)>(&operator!=));
//boost::python::def("operator!=", static_cast<bool(*)(int64_t &, const integer &)>(&operator!=));
//boost::python::def("operator*=", static_cast<bool(*)(bool &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator*=));
//boost::python::def("operator*=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator*=));
//boost::python::def("operator-", static_cast<integer(*)(const bool &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const int8_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const int16_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const int32_t &, const integer &)>(&operator-));
//boost::python::def("operator-", static_cast<integer(*)(const int64_t &, const integer &)>(&operator-));
//boost::python::def("operator&=", static_cast<bool(*)(bool &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator&=));
//boost::python::def("operator&=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator&=));
//boost::python::def("operator&", static_cast<integer(*)(const bool &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const int8_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const int16_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const int32_t &, const integer &)>(&operator&));
//boost::python::def("operator&", static_cast<integer(*)(const int64_t &, const integer &)>(&operator&));
boost::python::def("abs", static_cast<integer(*)(const integer &)>(&abs));
//boost::python::def("operator<", static_cast<bool(*)(const bool &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const uint8_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const uint16_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const uint32_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const uint64_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const int8_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const int16_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const int32_t &, const integer &)>(&operator<));
//boost::python::def("operator<", static_cast<bool(*)(const int64_t &, const integer &)>(&operator<));
//boost::python::def("operator-=", static_cast<bool(*)(bool &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator-=));
//boost::python::def("operator-=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator-=));
//boost::python::def("operator>>", static_cast<integer(*)(const bool &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const int8_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const int16_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const int32_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<integer(*)(const int64_t &, const integer &)>(&operator>>));
//boost::python::def("operator>>", static_cast<std::istream &(*)(std::istream &, integer &)>(&operator>>));
//boost::python::def("operator*", static_cast<integer(*)(const bool &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const int8_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const int16_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const int32_t &, const integer &)>(&operator*));
//boost::python::def("operator*", static_cast<integer(*)(const int64_t &, const integer &)>(&operator*));
//boost::python::def("operator<=", static_cast<bool(*)(bool &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(uint8_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(uint16_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(uint32_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(uint64_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(int8_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(int16_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(int32_t &, const integer &)>(&operator<=));
//boost::python::def("operator<=", static_cast<bool(*)(int64_t &, const integer &)>(&operator<=));
boost::python::def("makeascii", &makeascii);
//boost::python::def("operator/", static_cast<integer(*)(const bool &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const uint8_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const uint16_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const uint32_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const uint64_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const int8_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const int16_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const int32_t &, const integer &)>(&operator/));
//boost::python::def("operator/", static_cast<integer(*)(const int64_t &, const integer &)>(&operator/));
//boost::python::def("operator/=", static_cast<bool(*)(bool &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator/=));
//boost::python::def("operator/=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator/=));
//boost::python::def("operator<<=", static_cast<bool(*)(bool &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<uint8_t(*)(uint8_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<uint16_t(*)(uint16_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<uint32_t(*)(uint32_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<uint64_t(*)(uint64_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<int8_t(*)(int8_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<int16_t(*)(int16_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<int32_t(*)(int32_t &, const integer &)>(&operator<<=));
//boost::python::def("operator<<=", static_cast<int64_t(*)(int64_t &, const integer &)>(&operator<<=));
}
