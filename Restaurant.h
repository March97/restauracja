#include <iostream>

class Restaurant
{
private:
    std::string address;
    std::string manager;
    unsigned int seats;
    unsigned int employees;
    float incomes;

public:
    void load(); // metoda wczytujaca wszystkie parametry
    void show(); // metoda pokazujaca wszystkie parametry
    Restaurant(std::string="", std::string="", unsigned int=0, unsigned int=0, float=0);
    ~Restaurant();
};
