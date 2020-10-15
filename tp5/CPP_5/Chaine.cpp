#include "Chaine.hpp"
#include <cstring>
#include <cstdlib>


Chaine::Chaine() : capacite(-1), tab(nullptr){}

Chaine::Chaine(const char * inCS) : Chaine(){
    if (inCS){
        capacite = std::strlen(inCS);
        tab = (char *) malloc((capacite+1)*sizeof(char));
        std::strcpy(tab, inCS);
    }    
}

Chaine::Chaine(const int inCapacite) : Chaine(){
    if (inCapacite > -1){
        capacite = inCapacite;
        tab = (char *) malloc((capacite+1)*sizeof(char));
        *tab = '\0';
    }
}

Chaine::Chaine(const Chaine& copie) : Chaine(copie.getCapacite()){
    strcpy(tab, copie.tab);
    std::cerr << "Constructeur par copie appelé\n";
}

Chaine& Chaine::operator=(const Chaine& chaine){
    if (this != &chaine){
        capacite = chaine.getCapacite();
        tab = (char *) std::realloc(tab, (capacite+1)*sizeof(char));
        std::strcpy(tab, chaine.c_str());
    }
    return *this;
}

Chaine Chaine::operator+(const Chaine& c)const{
    int nouvCapacite = capacite + c.getCapacite();
    Chaine concat(nouvCapacite);
    int i = 0, j = 0;
    while (tab[i] != 0){
        concat[j] = tab[i];
        i++;
        j++;
    }
    i = 0;
    while (c[i] != 0){
        concat[j] = c[i];
        i++;
        j++;
    }
    concat[j] = 0;
    return concat;
}

Chaine::~Chaine(){
    std::free(tab);
}

int Chaine::getCapacite()const{
    return capacite;
}

char * Chaine::c_str()const{
    return tab;
}

char& Chaine::operator[](const int i){
    return tab[i];
}

char& Chaine::operator[](const int i)const{
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