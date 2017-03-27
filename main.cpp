#include <cassert>
#include <iostream>
#include <conio.h>

#include "RestaurantChain.h"

int main()
{
    std::cout << "Hello world!" << std::endl;

//#ifdef DEBUG
    Restaurant a("Programistyczna 13", "Dominik Marchewka");
    assert(a.address()=="Programistyczna 13");
    assert(a.manager()=="Dominik Marchewka");
    assert(a.seats()==0);
    assert(a.employees()==0);
    assert(a.incomes()==0);

    Restaurant b("Pesymistyczna 24", "Jan Kowalski", 30, 10, 30000);
    Restaurant c("Pesymistyczna 24", "Jan Kowalski", 30, 10, 30000);

    assert(a!=b);
    assert(b==c);

    assert(b>=c);
    assert(b<=c);

    assert(!(b>c));
    assert(!(b<c));

    //return 0;
//#endif // DEBUG
}
