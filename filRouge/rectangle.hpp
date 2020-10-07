#pragma once
#include <string>
#include "forme.hpp"

class Rectangle : public Forme
{
    friend class Groupe;
    int ordre; // index si le rectangle est dans une liste

    public :
        Rectangle();
        Rectangle(int x, int y, int w = 1, int h = 1, COULEURS couleur = COULEURS::BLEU);
        virtual std::string toString();
};