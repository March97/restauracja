#include <iostream>
#include <conio.h>
#include "RestaurantChain.h"


int main()
{
    std::cout << "Hello world!" << std::endl;
    RestaurantChain c;
    c.show();
    c.load();
    c.show();
    return 0;
}
