#include <iostream>
#include "liste.hpp"
#include "rectangle.hpp"
#include "cercle.hpp"

Liste::Liste() : cercles(), nb_c(0), rectangles(), nb_r(0), compteur(0)
{
}

int Liste::getCompteur()
{
    return compteur;
}

void Liste::ajouterCercle(Cercle * c)
{
    if (c && nb_c < CAPACITE && c->ordre == -1)
    {
        cercles[nb_c] = c;
        c->ordre = compteur;
        compteur++;
        nb_c++;
    }
}

void Liste::ajouterRectangle(Rectangle * r)
{
    if (r && nb_r < CAPACITE && r->ordre == -1)
    {
        rectangles[nb_r] = r;
        r->ordre = compteur;
        compteur++;
        nb_r++;
    }
}

std::string Liste::toString()
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
