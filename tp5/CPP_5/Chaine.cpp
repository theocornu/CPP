#include "Chaine.hpp"
#include <cstring>
#include <cstdlib>


Chaine::Chaine() : capacite(-1), tab(nullptr){}

Chaine::Chaine(const char * inCS) : capacite(inCS < 0 ? -42 : inCS),
tab(inCS < 0 ? ) {
    /*if (inCS){
        try {
            capacite = std::strlen(inCS);
            tab = new char[capacite+1];
            std::strcpy(tab, inCS);
        } catch (std::bad_alloc& e_tab) {
            capacite = -1;
            throw std::bad_alloc();
        }
    } */
}

Chaine::Chaine(const int inCapacite) :  capacite(inCapacite < 0 ? -42 : inCapacite),
tab(inCapacite < 0 ? nullptr : new char[capacite+1]) {
    if (inCapacite == -42) throw std::bad_alloc();
    else {
        *tab = '\0';
    }
}

Chaine::Chaine(const Chaine& copie) : Chaine(copie.getCapacite()){
    strcpy(tab, copie.tab);
    std::cerr << "Constructeur par copie appelé\n";
}

Chaine& Chaine::operator=(const Chaine& chaine){
    if (this != &chaine){
        try {
            capacite = chaine.getCapacite();
            delete[] tab;
            tab = new char[capacite+1];
            strcpy(tab, chaine.c_str());
        } catch (std::bad_alloc& e_tab) {
            capacite = -1;
        }
    }
    return *this;
}

Chaine Chaine::operator+(const Chaine& c)const{
    int nouvCapacite = capacite + c.getCapacite();
    Chaine concat(nouvCapacite);
    char    * ptrConcat = concat.c_str(),
            * ptrThis = tab;
    while ((*ptrConcat++ = *ptrThis++));
    ptrConcat--;
    std::strcpy(ptrConcat, c.c_str());
    return concat;
}

Chaine::~Chaine(){
    delete[] tab;
}

int Chaine::getCapacite()const{
    return capacite;
}

char * Chaine::c_str()const{
    return tab;
}

char& Chaine::operator[](const int i){
    if (i < 0) throw std::out_of_range("Index invalide");
    if (i >= capacite) throw std::bad_alloc();
    return tab[i];
}

char& Chaine::operator[](const int i)const{
    if (i < 0) throw std::out_of_range("Index invalide");
    if (i >= capacite) throw std::bad_alloc();
    return tab[i];
}

void Chaine::afficher(std::ostream& flux)const{
    flux << tab;
}

void afficherParValeur(const Chaine chaine){
    chaine.afficher();
}

void afficherParReference(const Chaine& chaine){
    chaine.afficher();
}

std::ostream& operator<<(std::ostream& flux, const Chaine& chaine){
    //chaine.afficher(flux);
    for (int i = 0; chaine[i] != '\0'; ++i){
        flux << chaine[i] << std::endl;
    }
    return flux;
}