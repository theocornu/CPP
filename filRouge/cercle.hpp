#pragma once

class Cercle
{
    int x; // coordonnée x
    int y; // coordonnée y
    // le cercle est inscrit dans un rectangle
    int w; // largeur du rectangle
    int h; // hauteur du rectangle

    public :
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);
        std::string toString();
};