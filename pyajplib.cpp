#include <boost/python.hpp>
#include <string>

#include "ajp.h"
#include "ajp2.h"

BOOST_PYTHON_MODULE(pyajplib)
{
    using namespace boost::python;

    class_<ajp>("ajp", init<std::string, double>())
        .def("get_id", &ajp::get_id)
        .def("get_price", &ajp::get_price)
        .def("get_counter", &ajp::get_counter)
        .def("set_counter", &ajp::set_counter)
        .def("inc_counter", &ajp::inc_counter)
        .def("get_name", &ajp::get_name)
        .def("get_cost", &ajp::get_cost);

    class_<xyz>("xyz", init<std::string, double, double>())
        .def("get_id", &xyz::get_id)
        .def("get_price", &xyz::get_price)
        .def("get_counter", &xyz::get_counter)
        .def("set_counter", &xyz::set_counter)
        .def("inc_counter", &xyz::inc_counter)
        .def("get_discount", &xyz::get_discount)
        .def("set_discount", &xyz::set_discount)
        .def("get_name", &xyz::get_name)
        .def("get_cost", &xyz::get_cost);
}
