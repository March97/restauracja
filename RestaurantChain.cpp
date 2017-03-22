#include <iostream>
#include <conio.h>
#include "RestaurantChain.h"

void RestaurantChain::load()
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
}

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
