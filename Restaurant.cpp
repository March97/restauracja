#include <iostream>
#include <conio.h>
#include "Restaurant.h"


void Restaurant::load()
{
    std::cout<<"Address: "; std::getline(std::cin, address_);
    std::cout<<"Manager: "; std::getline(std::cin, manager_);
    std::cout<<"Number of seats: "; std::cin>>seats_;
    std::cout<<"Number of employees: "; std::cin>>employees_;
    std::cout<<"Incomes in $: "; std::cin>>incomes_;
}

void Restaurant::show()
{
    std::cout<<"Address: "<<address_<<std::endl;
    std::cout<<"Manager: "<<manager_<<std::endl;
    std::cout<<"Number of seats: "<<seats_<<std::endl;
    std::cout<<"Number of employees: "<<employees_<<std::endl;
    std::cout<<"Incomes: "<<incomes_<<"$"<<std::endl;
}

Restaurant::Restaurant(std::string a, std::string m, unsigned int s, unsigned int e, float i)
{
    address_=a;
    manager_=m;
    seats_=s;
    employees_=e;
    incomes_=i;
}

Restaurant::~Restaurant()
{
    std::cout<<"Destruktor restauracji"<<std::endl;
}
