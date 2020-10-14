#include <iostream>

class Bavarde{
    static int nbInstance;

    public :
        Bavarde(){
            std::cout << "DEFAUT\n";
        }
        Bavarde(const Bavarde&){
            std::cout << "COPIE\n";
        }
        ~Bavarde(){
            //std::cout << "Destruction\n";
        }
        static int getNbInstance(){
            return nbInstance;
        }
};

int Bavarde::nbInstance = 0;

void test1(Bavarde b) {
  std::cout << "appel de fonction avec parametre objet et copie\n";
}

Bavarde test2a() {
  std::cout << "appel de fonction avec retour\n";
  return Bavarde(); // creation d'un objet local
} // plus de copie - voir ZZ3

Bavarde test2b() {
  Bavarde b; // creation d'un objet local
  std::cout << "appel de fonction avec retour\n";
  return b; 
} // plus de copie - ZZ3 

void test3(Bavarde& b) {
  std::cout << "appel de fonction avec référence\n";
}

void test4(Bavarde *b) {
  std::cout << "appel de fonction avec un pointeur sur un objet\n";
}

int main(int, char**){
    Bavarde b;
    test1(b);
    b = test2a();
    b = test2b();
    test3(b);
    test4(&b);
    std::cout << Bavarde::getNbInstance() << std::endl;
}