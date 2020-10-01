#include "forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme() : Forme(1, 1)
{}

Forme::Forme(int w, int h) : w(w), h(h)
{
    nbFormes++;
}

int Forme::getCompteur()
{
    return nbFormes;
}