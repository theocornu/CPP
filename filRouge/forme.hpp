#pragma once
#include "point.hpp"

enum class COULEURS {
  ROUGE, BLEU, JAUNE, VERT
};

class Point;

class Forme
{
  int id;
  Point point;
  COULEURS couleur;
  int w;
  int h;
  static int nbFormes;
  static int nbId;

    public :
        Forme();
        Forme(Point point, COULEURS couleur = COULEURS::BLEU, int w = 1, int h = 1);
        Point& getPoint();
        void setX(int x);
        void setY(int y);
        COULEURS getCouleur();
        int getId();
        void setCouleur(COULEURS couleur_);
        static int getCompteur();
        static int prochainId();
        ~Forme();
};