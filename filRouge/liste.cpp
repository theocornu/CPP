#include <iostream>
#include "liste.hpp"
#include "rectangle.hpp"
#include "cercle.hpp"

Groupe::Groupe() : Forme(), cercles(), rectangles(), nb_c(0), nb_r(0), compteur(0)
{}

int Groupe::getNbCercles()const{
    return nb_c;
}

int Groupe::getNbRectangles()const{
    return nb_r;
}

int Groupe::getCompteur()const
{
    return compteur;
}

void Groupe::ajouter(Cercle * c)
{
    if (c && nb_c < CAPACITE && c->ordre == -1)
    {
        cercles[nb_c] = c;
        c->ordre = compteur;
        compteur++;
        nb_c++;
    }
}

void Groupe::ajouter(Rectangle * r)
{
    if (r && nb_r < CAPACITE && r->ordre == -1)
    {
        rectangles[nb_r] = r;
        r->ordre = compteur;
        compteur++;
        nb_r++;
    }
}

void Groupe::supprimerCercle(){
    nb_c--;
    compteur--;
    cercles[nb_c]->ordre = -1;
}

void Groupe::supprimerRectangle(){
    nb_r--;
    compteur--;
    rectangles[nb_r]->ordre = -1;
}

std::string Groupe::toString()const
{
    std::string chaine;
    int iCercle = 0, iRect = 0;
    Cercle * c_cour;
    Rectangle * r_cour;

    while (iCercle < nb_c && iRect < nb_r)
    {
        c_cour = cercles[iCercle];
        r_cour = rectangles[iRect];
        if (c_cour->ordre < r_cour->ordre)
        {
            chaine += c_cour->toString();
            iCercle++;
        }
        else
        {
            chaine += r_cour->toString();
            iRect++;
        }
        chaine += "\n";
    }
    while (iCercle < nb_c)
    {
        c_cour = cercles[iCercle];
        chaine += c_cour->toString() + "\n";
        iCercle++;
    }
    while (iRect < nb_r)
    {
        r_cour = rectangles[iRect];
        chaine += r_cour->toString() + "\n";
        iRect++;
    }

    return chaine;
}
