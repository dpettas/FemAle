#include <iostream>
#include "../include/CoordinateSys.hpp"
#include "../include/Point.hpp"


int main()
{
    Point p = Point(0, 1, 2);


    std::cout << p.get<Cartesian::z>() << std::endl;

    return 0;
}