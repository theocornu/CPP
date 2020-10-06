#include "forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme() : Forme(Point::ORIGINE, COULEURS::BLEU, 1, 1)
{}

Forme::Forme(Point point, COULEURS couleur, int w, int h) :
    id(Forme::prochainId()), point(point), couleur(couleur), w(w), h(h)
{
    nbFormes++;
}

Point& Forme::getPoint()
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

int Forme::getId()
{
    return id;
}

void Forme::setCouleur(COULEURS couleur_)
{
    couleur = couleur_;
}

int Forme::getCompteur()
{
    return nbFormes;
}

int Forme::prochainId()
{
    return nbFormes;
}

Forme::~Forme()
{
    nbFormes--;
}