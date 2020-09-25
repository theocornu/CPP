#include <iostream>
#include <string>

class Mere {
    protected :
        static int compteur;
        std::string nom;

    public :
        Mere(std::string nom = "noname") : nom(nom)
        {
            //std::cout << "Construction Mere" << std::endl;
            compteur++;
            //std::cout << "compteur : " << compteur << std::endl;
        }
        std::string getName()
        {
            return nom;
        }
        static int getCompteur()
        {
            return compteur;
        }
        virtual void afficher()
        {
            std::cout << "classe : Mere" << std::endl;
        }
        ~Mere() 
        {
            //std::cout << "Destruction Mere" << std::endl;
        }
};

int Mere::compteur = 0;

class Fille : public Mere {
    public :
        Fille() : Mere() {
            //std::cout << "Construction Fille" << std::endl;
        }
        Fille(std::string nom) : Mere(nom)
        {}
        virtual void afficher() override
        {
            std::cout << "classe : Fille" << std::endl;
        }
        ~Fille() {
            //std::cout << "Destruction Fille" << std::endl;
        }
};

int main(int, char **) {
    Mere  *pm = new Mere("mere_dyn");
    Fille *pf = new Fille("fille_dyn");
    Mere  *pp = new Fille("fille vue comme mere");
    pm->afficher(); // affiche Mere
    pf->afficher(); // affiche Fille
    pp->afficher(); // affiche Fille


    return 0;
}

