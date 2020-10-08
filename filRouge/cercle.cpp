#include <iostream>
#include <sstream>
#include "cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h, COULEURS couleur) : Forme(Point(x, y), couleur, w, h)
{
    ordre = -1;
} 

Cercle::Cercle() : Cercle(Point::ORIGINE.getX(), Point::ORIGINE.getY(), 2, 2)
{}

Cercle::Cercle(int x, int y, int rayon, COULEURS couleur) : Cercle(x, y, 2*rayon, 2*rayon, couleur)
{} 

float Cercle::getRayon()const{
    return (float)w/2;
}

void Cercle::setRayon(int r){
    w = h = 2*r;
}

std::string Cercle::toString()const
{
    std::ostringstream oss;
    oss << "CERCLE " << id << " " << point.getX() << " " << point.getY() 
        << " " << getCouleur() << " " << w << " " << h;
    return oss.str();
}