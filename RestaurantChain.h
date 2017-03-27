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
    //wymysl pare metod jakis sensownych
    void moreclients(int, float);
    float incomesonemployee();
    void setname(std::string); //zmienia nazwe (name)
    //void load(); // metoda wczytujaca wszystkie parametry
    //void show(); // metoda pokazujaca wszystkie parametry
    RestaurantChain(std::string="", std::string="", unsigned int=0, unsigned int=0, float=0);
    ~RestaurantChain();
    friend std::ostream &operator<<(std::ostream &output, const RestaurantChain &c);
    friend std::istream &operator>>(std::istream &input, RestaurantChain &c);
    //friend RestaurantChain &operator+(RestaurantChain &c1, RestaurantChain &c2);
    //RestaurantChain &operator++();
    //RestaurantChain &operator--();

    //operator +, ++i, i++, ==,  >, <, - do drugiej klasy tez napisz pare
};
