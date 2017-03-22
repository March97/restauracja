#include <iostream>
#include <conio.h>
#include "Restaurant.h"

void Restaurant::load()
{
    std::cout<<"Address: "; std::getline(std::cin, address);
    std::cout<<"Manager: "; std::getline(std::cin, manager);
    std::cout<<"Number of seats: "; std::cin>>seats;
    std::cout<<"Number of employees: "; std::cin>>employees;
    std::cout<<"Incomes in $: "; std::cin>>incomes;
}

void Restaurant::show()
{
    std::cout<<"Address: "<<address<<std::endl;
    std::cout<<"Manager: "<<manager<<std::endl;
    std::cout<<"Number of seats: "<<seats<<std::endl;
    std::cout<<"Number of employees: "<<employees<<std::endl;
    std::cout<<"Incomes: "<<incomes<<"$"<<std::endl;
}

Restaurant::Restaurant(std::string a, std::string m, unsigned int s, unsigned int e, float i)
{
    address=a;
    manager=m;
    seats=s;
    employees=e;
    incomes=i;
}

Restaurant::~Restaurant()
{
    std::cout<<"Destruktor restauracji"<<std::endl;
}
