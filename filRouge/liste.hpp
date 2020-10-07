#pragma once
#include <string>
#include "forme.hpp"

class Cercle;
class Rectangle;

const int CAPACITE = 50;

class Groupe : public Forme
{
    public :
        Groupe();
        int getNbCercles();
        int getNbRectangles();
        int getCompteur();
        void ajouterCercle(Cercle * c);
        void ajouterRectangle(Rectangle * r);
        void supprimerCercle();
        void supprimerRectangle();
        std::string toString();

        Cercle * cercles[CAPACITE];  
        Rectangle * rectangles[CAPACITE];

    private :
        int nb_c;
        int nb_r;
        int compteur;
};