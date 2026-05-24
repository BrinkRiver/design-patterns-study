#include "Product.h"

#include <iostream>

void Truck::Deliver()
{
    std::cout << "Deliver by truck" << std::endl;
}


void Ship::Deliver()
{
    std::cout << "Deliver by ship" << std::endl;
}