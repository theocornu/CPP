#include "liste.hpp"
#include "rectangle.hpp"
#include "cercle.hpp"

int Liste::compteur = 0;

Liste::Liste() : cercles(), nb_c(0), rectangles(), nb_r(0)  
{
    compteur++;
}

int Liste::getCompteur()
{
    return compteur;
}

void ajouterCercle(Cercle * c)
{
    nb_c++;
}

void ajouterRectangle(Rectangle * r)
{
    nb_r++;
}

std::string Liste::toString()
{
    std::string chaine;
    return chaine;
}
