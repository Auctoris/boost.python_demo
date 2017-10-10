#include "ajp.h"

ajp::ajp(const std::string& name, double cost)
{
    // Constructor ... we need to assign the name & cost; generate the id; and initialize the counter...
    this->name = name;
    this->cost = cost;

    // Demo code - this would be a UUID...
    this->id = 0xAB12345;
    this->counter = 0;
}

uint64_t ajp::get_id()
{
    return this->id;
}

double ajp::get_price()
{
    return this->counter * this->cost;
}

int ajp::get_counter()
{
    return this->counter;
}

void ajp::set_counter(int i)
{
    this->counter = i;
}

void ajp::inc_counter()
{
    this->counter++;
}

std::string ajp::get_name()
{
    return this->name;
}

double ajp::get_cost()
{
    return this->cost;
}