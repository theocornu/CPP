#include <sstream>
#include "forme.hpp"

int Forme::nbFormes = 0;
int Forme::nbId = 0;

Forme::Forme(Point point, COULEURS couleur, int w, int h) :
    id(Forme::prochainId()), point(point), couleur(couleur), w(w), h(h)
{
    nbFormes++;
    nbId++;
    ordre = -1;
}

Forme::Forme() : Forme(Point::ORIGINE, COULEURS::BLEU, 1, 1)
{}

Forme::Forme(Point point, int w, int h) : Forme(point, COULEURS::BLEU, w, h)
{}

int Forme::getId()const
{
    return id;
}

int Forme::prochainId()
{
    return nbId;
}

Point& Forme::getPoint()
{
    return point;
}

int Forme::getLargeur()const{
    return w;
}

int Forme::getHauteur()const{
    return h;
}

int Forme::getOrdre()const{
    return ordre;
}

std::string Forme::getCouleur()const
{
    switch (couleur){
        case COULEURS::BLEU : 
            return "BLEU";
        case COULEURS::ROUGE :
            return "ROUGE";
        case COULEURS::VERT :
            return "VERT";
        case COULEURS::JAUNE :
            return "JAUNE";
        default :
            return "INCONNU";
    };
}

int Forme::getCompteur()
{
    return nbFormes;
}


void Forme::setX(int x)
{
    point.setX(x);
}

void Forme::setY(int y)
{
    point.setY(y);
}

void Forme::setCouleur(COULEURS couleur_)
{
    couleur = couleur_;
}

Forme::~Forme()
{
    nbFormes--;
}