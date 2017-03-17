#include <iostream>

class RestaurantChain
{
private:
    std::string name;
    std::string kindoffood;
    unsigned int numofrestaurants;
    unsigned int numofemployees;
    float incomes;

public:
    void show();
    RestaurantChain(std::string="", std::string="", unsigned int=0, unsigned int=0, float=0);
    ~RestaurantChain();
};
