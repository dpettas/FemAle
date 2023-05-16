#ifndef FEMALE_COORDINATESSYS_HPP
#define FEMALE_COORDINATESSYS_HPP


struct Cartesian
{
    static const int x = 0;
    static const int y = 1;
    static const int z = 2;
};

struct Cylindrical
{
    static const int r     = 0;
    static const int theta = 1;
    static const int z     = 2;
};

struct Spherical
{
    static const int r     = 0;
    static const int theta = 1;
    static const int phi   = 2;
};


#endif