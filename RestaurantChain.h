#include <iostream>
#include <vector>
#include "Restaurant.h"

class RestaurantChain
{
private:
    std::string name_;
    unsigned int numofrestaurants_;
    unsigned int numofemployees_;
    float chainincomes_;

    std::vector<Restaurant>RestaurantList_;

public:
    //Restaurant r;
    RestaurantChain addRestaurant(Restaurant &r);
    void moreclients(int, float);
    float incomesonemployee();
    void setname(std::string); //zmienia nazwe (name)
    //void load(); // metoda wczytujaca wszystkie parametry
    //void show(); // metoda pokazujaca wszystkie parametry
    RestaurantChain(std::string="", unsigned int=0, unsigned int=0, float=0);
    ~RestaurantChain();
    friend std::ostream &operator<<(std::ostream &output, const RestaurantChain &c);
    friend std::istream &operator>>(std::istream &input, RestaurantChain &c);
    //friend RestaurantChain &operator+(RestaurantChain &c1, RestaurantChain &c2);
    //RestaurantChain &operator++();
    //RestaurantChain &operator--();

    //operator +, ++i, i++, ==,  >, <, - do drugiej klasy tez napisz pare
};
