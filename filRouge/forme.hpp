#pragma once
#include "point.hpp"
#include <string>

enum class COULEURS {
  ROUGE, BLEU, JAUNE, VERT
};

class Point;

class Forme
{
  protected :
    int id;
    Point point;
    COULEURS couleur;
    int w;
    int h;
    int ordre; // index si le cercle est dans une liste
    static int nbFormes;
    static int nbId;


  public :
    Forme();
    Forme(Point point, int w, int h);
    Forme(Point point, COULEURS couleur = COULEURS::BLEU, int w = 1, int h = 1);
    int getId()const;
    static int prochainId();
    Point& getPoint();
    std::string getCouleur()const;
    int getLargeur()const;
    int getHauteur()const;
    int getOrdre()const;
    static int getCompteur();
    void setX(int x);
    void setY(int y);
    void setCouleur(COULEURS couleur_);
    virtual std::string toString()const = 0 ;
    virtual ~Forme() = 0;
};