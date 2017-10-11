#ifndef ajp2_h
#define ajp2_h

#include <string>
#include "ajp.h"

std::string multi_bob(int);

class xyz: public ajp
{
public:
    xyz(const std::string&, double, double);
    void set_discount(double);
    double get_discount();
    double get_price();
    
private:
    double discount;
};

#endif
