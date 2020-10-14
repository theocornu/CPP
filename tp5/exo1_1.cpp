#include <iostream>

class Forme{
    public :
        virtual void afficher(){
            std::cout << "FORME\n";
        }
};

class Cercle : public Forme{
    public :
        virtual void afficher(){
            std::cout << "CERCLE\n";
        }
};

void afficher1(Forme f) {
   f.afficher();
}

void afficher2(Forme &f) {
   f.afficher();
}

void afficher3(Forme * f) {
   f->afficher();
}

int main(int, char**) {
   Cercle cercle;
   
   afficher1(cercle);
   afficher2(cercle);
   afficher3(&cercle);
   
   return 0;
}