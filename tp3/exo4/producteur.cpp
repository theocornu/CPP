#include "producteur.hpp"
#include <fstream>

Producteur::Producteur() : travail(0)
{}

int Producteur::getTravail()
{
    return travail;
}

bool Producteur::produire(int quantite, std::string nom) {
    std::ofstream file(nom);
    int i;
    bool output = false;

    if (file)
    {
        output = true;

        file << quantite << std::endl;
        for(i = 1; i < quantite ; i++)
        {
            file << i << std::endl;
        }
        file << i;

        file.close();
    }
    
    travail++;
    return output;
}
