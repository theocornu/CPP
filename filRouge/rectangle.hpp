#pragma once
#include <string>

class Rectangle
{
    int x; // coordonnée x
    int y; // coordonnée y
    int w; // largeur du rectangle
    int h; // hauteur du rectangle
    int ordre; // index si le rectangle est dans une liste
    friend class Liste;

    public :
        Rectangle(int x, int y, int w, int h);
        std::string toString();
};