#include "point.hpp"

Point Point::ORIGINE = Point();

Point::Point() : Point(0, 0)
{}

Point::Point(int x, int y) : x(x), y(y)
{}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}