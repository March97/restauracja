#include <iostream>
#include <limits>
#include <conio.h>

class Restaurant
{
private:
    std::string address_;
    std::string manager_;
    unsigned int seats_;
    unsigned int employees_;
    float incomes_;
    static float burgerprice_;

public:
    void load(); // metoda wczytujaca wszystkie parametry
    void show(); // metoda pokazujaca wszystkie parametry

    //Konstruktor i Destruktor
    Restaurant(std::string="", std::string="", unsigned int=0, unsigned int=0, float=0);
    ~Restaurant();

    //operatory porownania
    bool operator==(Restaurant &r)
    {
        return(employees()==r.employees_)
            &&(incomes()==r.incomes_)
            &&(seats()==r.seats_);
    }

    bool operator!=(Restaurant &r)
    {
        return(employees()!=r.employees_)
            &&(incomes()!=r.incomes_)
            &&(seats()!=r.seats_);
    }

    bool operator<(Restaurant &r)
    {
        return(employees()<r.employees_)
            &&(incomes()<r.incomes_)
            &&(seats()<r.seats_);
    }

    bool operator<=(Restaurant &r)
    {
        return(employees()<=r.employees_)
            &&(incomes()<=r.incomes_)
            &&(seats()<=r.seats_);
    }

    bool operator>(Restaurant &r)
    {
        return(employees()>r.employees_)
            &&(incomes()>r.incomes_)
            &&(seats()>r.seats_);
    }

    bool operator >=(Restaurant &r)
    {
        return(employees()>=r.employees_)
            &&(incomes()>=r.incomes_)
            &&(seats()>=r.seats_);
    }

    inline Restaurant &operator++()
    {
        if(employees_<std::numeric_limits<unsigned int>::max())
            employees_++;
            return *this;
    }

    //operatory pre i post inkrementacji i dekrementacji
    inline Restaurant &operator--()
    {
        if(employees_>0)
            employees_--;
            return *this;
    }

    inline Restaurant &operator++(int)
    {
        if(seats_<std::numeric_limits<unsigned int>::max())
            seats_++;
            return *this;
    }

    inline Restaurant &operator--(int)
    {
        if(seats_>0)
            seats_--;
            return *this;
    }

    inline Restaurant &operator+(Restaurant &r) {return together(*this, r);}

    //Restaurant &operator=(Restaurant &r);

    //wlasciwosci
    inline std::string address() {return address_;}
    inline std::string manager() {return manager_;}
    inline unsigned int seats() {return seats_;}
    inline unsigned int employees() {return employees_;}
    inline float incomes() {return incomes_;}

    //metody
    static Restaurant &together(Restaurant &a, Restaurant &b) //metoda laczaca dwie restauracje
    {
        std::string managers;
        unsigned int seats;
        unsigned int employees;
        float incomes;

        managers=a.manager()+" & "+b.manager();
        seats=a.seats()+b.seats();
        employees=a.employees()+b.employees();
        incomes=a.incomes()+b.incomes();
        Restaurant *c=new Restaurant(a.address(), managers, seats, employees, incomes);

        return *c;

    };

};
