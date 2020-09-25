#include "statisticien.hpp"
#include <fstream>

Statisticien::Statisticien() : calcul(false)
{}

bool Statisticien::aCalcule()
{
    return calcul;
}

bool Statisticien::acquerir(std::string nom) {
	std::ifstream file(nom);
    bool output = false;
    int n, somme = 0;
    float moyenne = .0;

    if (file)
    {
        output = true;
        file >> n;

        somme = n*(n+1)/2;
        moyenne = somme/n;

        file.close();
    }

    calcul = true;
    return output;
}
