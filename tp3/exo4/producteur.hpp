#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
    int travail;

    public : 
        Producteur();
        int getTravail();
        bool produire(int n, std::string filename);
};

#endif
