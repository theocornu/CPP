#pragma once

class Pile {
    int capacite;
    int taille;
    int * contenu;
    static const int CAPACITE_DEFAUT = 10;

    public :
        Pile();
        Pile(const int inCapacite);
        ~Pile();
        int size()const;
        bool empty()const;
        void push(const int);
        void pop();
        const int& top()const;
};