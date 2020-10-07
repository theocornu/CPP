#pragma once
#include <string>
#include "forme.hpp"

class Cercle : public Forme
{
    friend class Groupe;
    int ordre; // index si le cercle est dans une liste

    public :
        Cercle();
        Cercle(int x, int y, int w, int h, COULEURS couleur = COULEURS::BLEU);
        Cercle(int x, int y, int rayon = 1, COULEURS couleur = COULEURS::BLEU);
        float getRayon();
        void setRayon(int r);
        virtual std::string toString();
};