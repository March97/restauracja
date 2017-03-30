#include <iostream>
#include <limits>
#include <string>

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
    float averageincomes(float, unsigned int); // liczy srednie przychody na pracownika
    void happytime(unsigned int); //czas promocji zwieksza przychody zaleznie od czasu e godzinach (argument metody), liczby miejsc i pracownikow

    //Konstruktor i Destruktor
    Restaurant(std::string address="", std::string manager="", unsigned int seats=0, unsigned int employees=0, float incomes=0);
    ~Restaurant();

    //operatory porownania
    bool operator==(Restaurant &r);
    bool operator!=(Restaurant &r);
    bool operator<(Restaurant &r);
    bool operator<=(Restaurant &r);
    bool operator>(Restaurant &r);
    bool operator >=(Restaurant &r);

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

    inline Restaurant &operator=(Restaurant &r)
    {
        if(this!=&r)
        {
            this->address_=r.address();
            this->manager_=r.manager();
            this->employees_=r.employees();
            this->seats_=r.seats();
            this->incomes_=r.incomes();
            return *this;
        }
        return *this;
    };

    //operatory strumienia
    friend std::ostream &operator<<(std::ostream &output, const Restaurant &r);
    friend std::istream &operator>>(std::istream &input, Restaurant &r);


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
