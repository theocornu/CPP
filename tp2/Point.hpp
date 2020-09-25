#pragma once

// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C
class Point {
   // par défaut, tout est privé dans une "class"
   
   int x; // init a 0
   int y; // init a 0
   static int cpt; // init a 0

 public:
  Point();
  Point(int px, int py);
  int getX();
  int getY();
  static int getCpt();
  void setX(int px);
  void setY(int py);
  void deplacerDe(int dx, int dy);
  void deplacerVers(int px, int py);
};
