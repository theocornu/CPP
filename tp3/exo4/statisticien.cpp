#include "statisticien.hpp"
#include <iostream>
#include <fstream>

Statisticien::Statisticien() : calcul(false)
{}

bool Statisticien::aCalcule()
{
    return calcul;
}

bool Statisticien::acquerir(std::string filename, int& somme, float& moyenne) {
	std::ifstream file(filename);
    bool output = false;
    int n;
    somme = 0;
    moyenne = .0;

    if (file)
    {
        output = true;
        file >> n;

        somme = n*(n+1)/2;
        moyenne = (float)somme/n;

        file.close();
    }

    calcul = true;
    return output;
}
