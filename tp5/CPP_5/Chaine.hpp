#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {
    int capacite;
    char * tab;

    public : 
        Chaine();
        Chaine(const char * inCS);
        Chaine(const int inCapacite);
        Chaine(const Chaine& copie);
        Chaine& operator=(const Chaine& chaine);
        Chaine operator+(const Chaine& c)const;
        ~Chaine();
        int getCapacite()const;
        char * c_str()const;
        char& operator[](const int i);
        char& operator[](const int i)const;
        void afficher(std::ostream& flux = std::cout)const;
        friend std::ostream& operator<<(std::ostream& flux, const Chaine& chaine);
};

void afficherParValeur(const Chaine chaine);
void afficherParReference(const Chaine& chaine);

#endif
