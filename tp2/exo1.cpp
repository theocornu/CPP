// Fichier main.cpp
#include <iostream>
#include "Point.hpp"

using std::cout; using std::endl; using std::cin;

void afficherPoint(Point p){
    cout << "x = " << p.getX() << " , y = " << p.getY() << endl;
}

void testDeplacements(Point p){
    afficherPoint(p);
    p.deplacerVers(2, 4); // (2,4)
    afficherPoint(p);
    p.deplacerDe(2, 3); // (4,7)
    afficherPoint(p);
}

int main(int, char**) {
  Point p, p2(1,1), p3{2,3};
  cout << p.getCpt() << endl;
  Point *ptrp = new Point;
  cout << p.getCpt() << endl;
  
  // testDeplacements(p);

  afficherPoint(p);
  afficherPoint(p2);
  afficherPoint(p3);
  afficherPoint(*ptrp);

  delete ptrp;
  return 0;
}
