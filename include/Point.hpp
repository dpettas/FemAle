#ifndef FEMALE_POINT_HPP
#define FEMALE_POINT_HPP

#include <iostream>

class Point
{
    public:
        Point();
        Point( float x, float y = 0.0f, float z = 0.0f);

        void set(float x, float y, float z);
        
        template<int coord>
        void set( float val);

        template<int coord>
        float get();

        friend std::ostream& operator<<(std::ostream& os, const Point& p);
    private:
        float m_x[3];
};



/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
Point::Point()
{
    m_x[0] = 0.0f;
    m_x[1] = 0.0f;
    m_x[2] = 0.0f;
}

Point::Point(float x, float y, float z)
{
    m_x[0] = x;
    m_x[1] = y;
    m_x[2] = z;
}

void Point::set(float x, float y, float z )
{
    m_x[0] = x;
    m_x[1] = y;
    m_x[2] = z;
}


template<int coord>
void Point::set( float val)
{
    m_x[coord] = val;
}

template<int coord>
float Point::get()
{
    return m_x[coord];
}


inline std::ostream& operator << (std::ostream& os, const Point& p)
{
    os << '(' << p.m_x[0] << ',' << p.m_x[1] << ',' << p.m_x[2] << ')';
    return os;
}


#endif