#include <iostream>
#include <sstream>
#include "rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h, COULEURS couleur) : Forme(Point(x, y), couleur, w, h)
{
    ordre = -1;
} 

Rectangle::Rectangle() : Rectangle(0, 0, 1, 1)
{}

std::string Rectangle::toString()
{
    std::ostringstream oss;
    oss << "RECTANGLE " << id << " " << point.getX() << " " << point.getY() 
        << " " << getCouleur() << " " << w << " " << h;
    return oss.str();
}