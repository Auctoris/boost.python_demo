#include <boost/python.hpp>
#include <string>

std::string multi_bob(int n)
{
   std::string name = "Bob";
   std::string r = "";
   for (int i=0;i<n;i++)
      r += name;
   return r;
}

class ajp
{
public:
    ajp(const std::string& name, double cost)
    {
        // Constructor ... we need to assign the name & cost; generate the id; and initialize the counter...
        this->name = name;
        this->cost = cost;

        // Demo code - this would be a UUID...
        this->id = 0xAB12345;
        this->counter = 0;
    }

    uint64_t get_id()
    {
        return this->id;
    }

    double get_price()
    {
        return this->counter * this->cost;
    }

    int get_counter()
    {
        return this->counter;
    }

    void set_counter(int i)
    {
        this->counter = i;
    }

    void inc_counter()
    {
        this->counter++;
    }

private:
    std::string name;
    int counter;
    double cost;
    uint64_t id;
};

BOOST_PYTHON_MODULE(pyajplib)
{
    using namespace boost::python;

    class_<ajp>("ajp", init<std::string, double>())
        .def("get_id", &ajp::get_id)
        .def("get_price", &ajp::get_price)
        .def("get_counter", &ajp::get_counter)
        .def("set_counter", &ajp::set_counter)
        .def("inc_counter", &ajp::inc_counter);
}
