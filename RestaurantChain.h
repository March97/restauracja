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
    RestaurantChain addRestaurant(Restaurant &r); // metoda dodajaca restauracje do sieci

    void moreclients(int, float);
    float incomesonemployee();
    void setname(std::string); //zmienia nazwe (name)

    //void load(); // metoda wczytujaca wszystkie parametry
    //void show(); // metoda pokazujaca wszystkie parametry

    //konstruktor i destruktor
    RestaurantChain(std::string="", unsigned int=0, unsigned int=0, float=0);
    ~RestaurantChain();

    friend std::ostream &operator<<(std::ostream &output, const RestaurantChain &c);
    friend std::istream &operator>>(std::istream &input, RestaurantChain &c);

    //wlasciwosci
    inline std::string name() {return name_;}
    inline unsigned int numofrestaurants() {return numofrestaurants_;}
    inline unsigned int numofemployees() {return numofemployees_;}
    inline float chainincomes() {return chainincomes_;}
};
