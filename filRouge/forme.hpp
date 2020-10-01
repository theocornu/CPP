#pragma once
#include "point.hpp"

enum class COULEURS {
  ROUGE, BLEU, JAUNE, VERT
};

class Point;

class Forme
{
    Point point;
    COULEURS couleur;
    int w;
    int h;
    static int nbFormes;

    public :
        Forme();
        Forme(Point point, COULEURS couleur = COULEURS::BLEU, int w = 1, int h = 1);
        Point getPoint();
        void setX(int x);
        void setY(int y);
        COULEURS getCouleur();
        void setCouleur(COULEURS couleur_);
        static int getCompteur();
};