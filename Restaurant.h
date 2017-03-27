#include <iostream>

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

    //operatory
    bool operator==(Restaurant &r)
    {
        return(employees()==r.employees_)
            &&(incomes()==r.incomes_);
    }

    bool operator!=(Restaurant &r)
    {
        return(employees()!=r.employees_)
            &&(incomes()!=r.incomes_);
    }

    bool operator<(Restaurant &r)
    {
        return(employees()<r.employees_)
            &&(incomes()<r.incomes_);
    }

    bool operator<=(Restaurant &r)
    {
        return(employees()<=r.employees_);
    }

    bool operator>(Restaurant &r)
    {
        return(employees()>r.employees_)
            &&(incomes()>r.incomes_);
    }

    bool operator >=(Restaurant &r)
    {
        return(employees()>=r.employees_);
    }

    Restaurant &operator=(Restaurant &r);

    //wlasciwosci
    inline std::string address() {return address_;}
    inline std::string manager() {return manager_;}
    inline unsigned int seats() {return seats_;}
    inline unsigned int employees() {return employees_;}
    inline float incomes() {return incomes_;}

};
