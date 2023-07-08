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

#include "Point_impl.hpp"






#endif