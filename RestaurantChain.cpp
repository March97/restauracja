#include <iostream>
#include <conio.h>
#include "RestaurantChain.h"

void RestaurantChain::moreclients(int people, float dinnerprice)
{
    incomes+=people*dinnerprice;
}

float RestaurantChain::incomesonemployee()
{
    return incomes/numofemployees;
}

void RestaurantChain::setname(std::string s)
{
    name=s;
}

/*void RestaurantChain::load()
{
    std::cout<<"Name: "; std::getline(std::cin, name);
    std::cout<<"Kind of food: "; std::getline(std::cin, kindoffood);
    std::cout<<"Number of restaurants: "; std::cin>>numofrestaurants;
    std::cout<<"Number of employees: "; std::cin>>numofemployees;
    std::cout<<"Incomes: "; std::cin>>incomes;
}

void RestaurantChain::show()
{
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Kind of food: "<<kindoffood<<std::endl;
    std::cout<<"Number of restaurants: "<<numofrestaurants<<std::endl;
    std::cout<<"Number of employees: "<<numofemployees<<std::endl;
    std::cout<<"Incomes: "<<incomes<<"$"<<std::endl;
}*/

RestaurantChain::RestaurantChain(std::string n, std::string k, unsigned int r, unsigned int e, float i)
{
    name=n;
    kindoffood=k;
    numofrestaurants=r;
    numofemployees=e;
    incomes=i;
}

RestaurantChain::~RestaurantChain()
{
    std::cout<<"Destruktor sieci restauracji"<<std::endl;
}

std::ostream &operator<<(std::ostream &output, const RestaurantChain &c)
{
   return output<<"Name: "<<c.name<<std::endl<<"Kind of food: "<<c.kindoffood<<std::endl
   <<"Number of restaurants: "<<c.numofrestaurants<<std::endl<<"Number of employees: "<<c.numofemployees<<std::endl
   <<"Incomes: "<<c.incomes<<std::endl;
}

std::istream &operator>>(std::istream &input, RestaurantChain &c)
{
    return input>>c.name>>c.kindoffood>>c.numofemployees>>c.numofrestaurants>>c.incomes;
}

//RestaurantChain &operator+(RestaurantChain &c1, RestaurantChain &c2)
//{
//    return merge;
//}
