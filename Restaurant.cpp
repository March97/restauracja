#include <iostream>
#include <string>
#include "Restaurant.h"

float Restaurant::burgerprice_=5; //cena burgera

//metody

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
    std::cout<<"Burger price: "<<burgerprice_<<"$"<<std::endl;
}

float Restaurant::averageincomes(float inc, unsigned int emp)
{
    if(emp>0)
        return(inc/emp);
    else
        return 0;
}

void Restaurant::happytime(unsigned int time)
{
    float incomes2;

    incomes2=time*60*seats_*(employees_/1.5)*burgerprice_;
    std::cout<<"Incomes increased by: "<<incomes2/incomes_<<"%"<<std::endl;
    incomes_+=incomes2;
}

//konstruktor destruktor

Restaurant::Restaurant(std::string a, std::string m, unsigned int s, unsigned int e, float i)
{
    address_=a;
    manager_=m;
    seats_=s;
    employees_=e;
    incomes_=i;
}

Restaurant::~Restaurant() {}

std::ostream &operator<<(std::ostream &output, const Restaurant &r)
{
   return output<<"Address: "<<r.address_<<std::endl
   <<"Manager: "<<r.manager_<<std::endl<<"Number of employees: "<<r.employees_<<std::endl
   <<"Number of seats: "<<r.seats_<<"Incomes: "<<r.incomes_<<std::endl;
}

std::istream &operator>>(std::istream &input, Restaurant &r)
{
    return input>>r.address_>>r.manager_>>r.seats_>>r.employees_>>r.incomes_;
}

bool Restaurant::operator==(Restaurant &r)
{
    return(employees()==r.employees_)
        &&(incomes()==r.incomes_)
        &&(seats()==r.seats_);
}

bool Restaurant::operator!=(Restaurant &r)
{
    return(employees()!=r.employees_)
        &&(incomes()!=r.incomes_)
        &&(seats()!=r.seats_);
}

bool Restaurant::operator<(Restaurant &r)
{
    return(employees()<r.employees_)
        &&(incomes()<r.incomes_)
        &&(seats()<r.seats_);
}

bool Restaurant::operator<=(Restaurant &r)
{
    return(employees()<=r.employees_)
        &&(incomes()<=r.incomes_)
        &&(seats()<=r.seats_);
}

bool Restaurant::operator>(Restaurant &r)
{
    return(employees()>r.employees_)
        &&(incomes()>r.incomes_)
        &&(seats()>r.seats_);
}

bool Restaurant::operator>=(Restaurant &r)
{
    return(employees()>=r.employees_)
        &&(incomes()>=r.incomes_)
        &&(seats()>=r.seats_);
}
