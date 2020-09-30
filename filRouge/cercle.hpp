#pragma once
#include <string>

class Cercle
{
    int x; // coordonnée x
    int y; // coordonnée y
    // le cercle est inscrit dans un rectangle
    int w; // largeur du rectangle
    int h; // hauteur du rectangle
    int ordre; // index si le cercle est dans une liste
    friend class Liste;

    public :
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);
        std::string toString();
};