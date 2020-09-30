#pragma once
#include <string>

class Cercle;
class Rectangle;

class Liste
{
    Cercle * cercles;
    int nb_c;
    Rectangle * rectangles;
    int nb_r;
    static int compteur;

    public :
        Liste();
        static int getCompteur();
        static std::string toString();
};