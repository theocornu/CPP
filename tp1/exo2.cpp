#include <iostream>
#include <string>

int main(int, char **) {  // parametres muets
  std::string prenom, nom;     // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre nom ?" << std::endl;
  std::cin  >> nom;
  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour " << nom << std::endl;
  std::cout << prenom << std::endl;
  std::cout << nom << " : " << prenom << std::endl;

  return 0;
}
