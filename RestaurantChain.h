#include <iostream>
#include "Restaurant.h"

class RestaurantChain
{
private:
    std::string name;
    std::string kindoffood;
    unsigned int numofrestaurants;
    unsigned int numofemployees;
    float incomes;

public:
    Restaurant r;
    void load(); // metoda wczytujaca wszystkie parametry
    void show(); // metoda pokazujaca wszystkie parametry
    RestaurantChain(std::string="", std::string="", unsigned int=0, unsigned int=0, float=0);
    ~RestaurantChain();
};
