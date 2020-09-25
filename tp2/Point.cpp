// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

using std::cout; using std::endl;

int Point::cpt = 0;

Point::Point(){
    x = 0;
    y = 0;
    cpt++;
    cout << "Constructeur sans arguments" << endl;
}

Point::Point(int px, int py){
    x = px;
    y = py;
    cpt++;
    cout << "Constructeur avec arguments" << endl;
}

int Point::getX() {
  return x;
}

int Point::getY() {
  return y;
}

static int Point::getCpt(){
    return cpt;
}

void Point::setX(int px) {
  x = px;
}

void Point::setY(int py) {
  y = py;
}

void Point::deplacerDe(int dx, int dy){
    x += dx;
    y += dy;
}

void Point::deplacerVers(int px, int py){
    x = px;
    y = py;
}
