#include <iostream>
#include <sstream>
#include "rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h)
{

} 

std::string Rectangle::toString()
{
    std::ostringstream oss;
    oss << "RECTANGLE " << x << " " << y << " " << w << " " << h;
    return oss.str();
}