#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
    protected :
        int travail;

    public : 
        Producteur();
        virtual int getTravail();
        virtual bool produire(int n, std::string filename) = 0;
};

class ProducteurPremiersEntiers : public Producteur {
    public :
        bool produire(int n, std::string filename);
};

class ProducteurAleatoire : public Producteur {
    public :
        bool produire(int n, std::string filename);
};

#endif
