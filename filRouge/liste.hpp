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
        int getNbCercles()const;
        int getNbRectangles()const;
        int getCompteur()const;
        void ajouter(Cercle * c);
        void ajouter(Rectangle * r);
        void supprimerCercle();
        void supprimerRectangle();
        virtual std::string toString()const;

        Cercle * cercles[CAPACITE];  
        Rectangle * rectangles[CAPACITE];

    private :
        int nb_c;
        int nb_r;
        int compteur;
};