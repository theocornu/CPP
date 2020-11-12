#include "pile.hpp"
#include <iostream>

Pile::Pile() : capacite(CAPACITE_DEFAUT), taille(0), 
contenu(new int[CAPACITE_DEFAUT]){
}

Pile::Pile(const int inCapacite) : capacite(inCapacite < 1 ? -1 : inCapacite), taille(0), contenu(inCapacite < 1 ? nullptr : new int[inCapacite]) {
    if (contenu == nullptr)
        throw std::invalid_argument("ERREUR constructeur : capacité invalide.");
}

Pile::~Pile() {
    delete[] contenu;
}

// renvoie le nombre d'entiers dans la pile
int Pile::size()const {
    return taille;
}

// renvoie true si la pile est vide, false sinon
bool Pile::empty()const{
    if (contenu == nullptr) 
        throw std::invalid_argument("ERREUR empty() : Pile de capacité invalide.");
    return (taille == 0);
}

// ajoute l'entier donné au sommet de la pile
void Pile::push(const int i){
    if (taille == capacite) 
        throw std::out_of_range("ERREUR push() : Pile pleine.");
    contenu[taille] = i;
    taille++;
}

// retire l'entier au sommet de la pile
void Pile::pop(){
    if (taille == 0) throw std::invalid_argument("ERREUR pop() : Pile vide.");
    taille--;
}

// renvoie l'entier au sommet de la pile
const int& Pile::top()const{
    if (taille == 0) throw std::out_of_range("ERREUR top() : Pile vide");
    return contenu[taille-1];
}