#pragma once

class Rectangle
{
    int x; // coordonnée x
    int y; // coordonnée y
    int w; // largeur du rectangle
    int h; // hauteur du rectangle

    public :
        Rectangle(int x, int y, int w, int h);
        std::string toString();
};