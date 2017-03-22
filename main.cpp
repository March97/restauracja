#include <iostream>
#include <conio.h>
#include "RestaurantChain.h"


int main()
{
    std::cout << "Hello world!" << std::endl;
    RestaurantChain c;
    c.r.load();
    c.show();
    c.r.show();
    return 0;
}
