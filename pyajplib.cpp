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
        .def("get_name", &ajp::get_name);
}
