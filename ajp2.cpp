#include "ajp2.h"

std::string multi_bob(int n)
{
   std::string name = "Bob";
   std::string r = "";
   for (int i=0;i<n;i++)
      r += name;
   return r;
}

xyz::xyz(const std::string& name, double cost, double discount) : ajp(name, cost)
{
    this->discount = discount;
}

double xyz::get_discount()
{
    return this->discount;
}

void xyz::set_discount(double d)
{
    this->discount = d;
}

double xyz::get_price()
{
    return ajp::get_price() / (1 + this->discount);
}
