#include <iostream>
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

void Liste::ajouterCercle(Cercle * c)
{
    std::cout << c->ordre << std::endl;
    nb_c++;
}

void Liste::ajouterRectangle(Rectangle * r)
{
    std::cout << r->ordre << std::endl;
    nb_r++;
}

std::string Liste::toString()
{
    std::string chaine;
    return chaine;
}
