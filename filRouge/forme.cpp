#include "forme.hpp"
#include "point.hpp"

int Forme::nbFormes = 0;

Forme::Forme() : Forme(Point::ORIGINE, COULEURS::BLEU, 1, 1)
{}

Forme::Forme(Point point, COULEURS couleur, int w, int h) :
    point(point), couleur(couleur), w(w), h(h)
{
    nbFormes++;
}

Point Forme::getPoint()
{
    return point;
}

void Forme::setX(int x)
{
    point.setX(x);
}

void Forme::setY(int y)
{
    point.setY(y);
}

COULEURS Forme::getCouleur()
{
    return couleur;
}

void Forme::setCouleur(COULEURS couleur_)
{
    couleur = couleur_;
}

int Forme::getCompteur()
{
    return nbFormes;
}