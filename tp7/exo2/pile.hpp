#pragma once

template <typename T>
class PileGen {
    int capacite;
    int taille;
    T * contenu;
    static const int CAPACITE_DEFAUT = 10;

    public :
        PileGen();
        PileGen(const int inCapacite);
        ~PileGen();
        int size()const;
        bool empty()const;
        void push(const T&);
        void pop();
        const T& top()const;
};

template <typename T>
PileGen<T>::PileGen() : capacite(CAPACITE_DEFAUT), taille(0), 
contenu(new T[CAPACITE_DEFAUT]){
}

template <typename T>
PileGen<T>::PileGen(const int inCapacite) : capacite(inCapacite < 1 ? -1 : inCapacite), taille(0), contenu(inCapacite < 1 ? nullptr : new T[inCapacite]) {
    if (contenu == nullptr)
        throw std::invalid_argument("ERREUR constructeur : capacité invalide.");
}

template <typename T>
PileGen<T>::~PileGen() {
    delete[] contenu;
}

// renvoie le nombre d'éléments dans la pile
template <typename T>
int PileGen<T>::size()const {
    return taille;
}

// renvoie true si la pile est vide, false sinon
template <typename T>
bool PileGen<T>::empty()const{
    if (contenu == nullptr) 
        throw std::invalid_argument("ERREUR empty() : Pile de capacité invalide.");
    return (taille == 0);
}

// ajoute l'élément donné au sommet de la pile
template <typename T>
void PileGen<T>::push(const T& elem){
    if (taille == capacite) 
        throw std::out_of_range("ERREUR push() : Pile pleine.");
    T nouv = elem;
    contenu[taille] = nouv;
    taille++;
}

// retire l'élément au sommet de la pile
template <typename T>
void PileGen<T>::pop(){
    if (taille == 0) throw std::invalid_argument("ERREUR pop() : Pile vide.");
    taille--;
}

// renvoie l'entier au sommet de la pile
template <typename T>
const T& PileGen<T>::top()const{
    if (taille == 0) throw std::out_of_range("ERREUR top() : Pile vide");
    return contenu[taille-1];
}