#pragma once
#include <string>

class Cercle;
class Rectangle;

const int CAPACITE = 50;

class Liste
{
    public :
    Cercle * cercles[CAPACITE];
    int nb_c;
    Rectangle * rectangles[CAPACITE];
    int nb_r;
    static int compteur;

    public :
        Liste();
        static int getCompteur();
        void ajouterCercle(Cercle * c);
        void ajouterRectangle(Rectangle * r);
        std::string toString();
};