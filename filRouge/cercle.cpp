#include <iostream>
#include <sstream>
#include "cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h), ordre(-1)
{

} 

Cercle::Cercle(int x, int y, int rayon) : x(x-rayon), y(y-rayon), w(2*rayon), h(2*rayon), ordre(-1)
{

} 

std::string Cercle::toString()
{
    std::ostringstream oss;
    oss << "CERCLE " << x << " " << y << " " << w << " " << h;
    return oss.str();
}