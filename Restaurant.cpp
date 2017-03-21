#include <iostream>
#include <conio.h>
#include "Restaurant.h"

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
