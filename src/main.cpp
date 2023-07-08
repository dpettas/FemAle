#include <iostream>
#include "CoordinateSys.hpp"
#include "Point.hpp"
#include "Point.hpp"



int main()
{
    Point p = Point(0, 1, 2);


    std::cout << p.get<Cartesian::z>() << std::endl;
    std::cout << p << std::endl;

    return 0;
}