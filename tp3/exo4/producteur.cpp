#include "producteur.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

Producteur::Producteur() : travail(0)
{}

int Producteur::getTravail()
{
    return travail;
}

bool ProducteurPremiersEntiers::produire(int quantite, std::string nom) {
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

bool ProducteurAleatoire::produire(int quantite, std::string nom) {
    std::ofstream file(nom);
    int i;
    bool output = false;

    std::srand(std::time(NULL));

    if (file)
    {
        output = true;

        file << quantite << std::endl;
        for(i = 1; i < quantite ; i++)
        {
            file << (std::rand() % 100) << std::endl;
        }
        file << (std::rand() % 100);

        file.close();
    }
    
    travail++;
    return output;
}