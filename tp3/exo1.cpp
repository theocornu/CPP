#include <iostream>

class Bavarde {
    int param;

    public :
        Bavarde() : param(0)
        {}
        Bavarde(int param) : param(param)
        {
            std::cout << "Construction de " << param << std::endl;
        }
        int get()
        {
            return param;
        }
        void afficher()
        {
            std::cout << "Affichage de " << param << std::endl; 
        }
        ~Bavarde()
        {
            std::cout << "Tais-toi " << param << std::endl;
        }
} /*bizarre(1)*/;  

class Couple
{
    Bavarde att1;
    Bavarde att2;

    public :
        Couple() : att1(), att2() {}
        Couple(Bavarde att1, Bavarde att2) : att1(att1), att2(att2) {}
};

class Famille
{
    Bavarde* tab;

    public :
        Famille(const int taille) {
            tab = new Bavarde[taille];
        }
        ~Famille() {
            delete [] tab;
        }
};

// Bavarde globale(2);

/*void fonction(Bavarde b) {
  std::cout << "code de la fonction";
}*/

int main(int, char **) {
    // Couple cpl1(Bavarde(9), Bavarde(9)), cpl2(Bavarde(1), Bavarde(2)), cpl3(Bavarde(3), Bavarde(5));
    // Famille fam(3);
    Bavarde *b = (Bavarde *) malloc(sizeof(Bavarde));
    Bavarde *b2 = new Bavarde();

    std::cout << b->get() << std::endl;
    std::cout << b2->get() << std::endl;

    free(b);
    delete b2;
    return 0;
}

