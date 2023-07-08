#include "Point.hpp"

Point::Point()
{
    m_x[0] = 0.0f;
    m_x[1] = 0.0f;
    m_x[2] = 0.0f;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

Point::Point(float x, float y, float z)
{
    m_x[0] = x;
    m_x[1] = y;
    m_x[2] = z;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

void Point::set(float x, float y, float z )
{
    m_x[0] = x;
    m_x[1] = y;
    m_x[2] = z;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

inline std::ostream& operator << (std::ostream& os, const Point& p)
{
    os << '(' << p.m_x[0] << ',' << p.m_x[1] << ',' << p.m_x[2] << ')';
    return os;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

template<int coord>
void Point::set( float val)
{
    m_x[coord] = val;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

template<int coord>
float Point::get()
{
    return m_x[coord];
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////