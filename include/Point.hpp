#ifndef FEMALE_POINT_HPP
#define FEMALE_POINT_HPP

#include <iostream>

class Point
{
    public:
        Point() = default;
        Point( float x, float y, float z);


        friend std::ostream& operator<<(std::ostream& os, const Point& p);
    private:
        float m_x = 0.0f;
        float m_y = 0.0f;
        float m_z = 0.0f;
};

std::ostream& operator << (std::ostream& os, const Point& p)
{
    os << '(' << p.m_x << ',' << p.m_y << ',' << p.m_z << ')';
    return os;
}


/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////

Point::Point(float x, float y, float z):
m_x(x),
m_y(y),
m_z(z)
{}




#endif