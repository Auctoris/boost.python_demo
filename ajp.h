#include <string>

class ajp
{
public:
    ajp(const std::string&, double);

    uint64_t get_id();
    double get_price();
    int get_counter();
    void inc_counter();
    std::string get_name();
    void set_counter(int);
    
private:
    std::string name;
    int counter;
    double cost;
    uint64_t id;
};