#include <iostream>
#include <string>

int main(int, char **) {  // parametres muets
  std::string chaine1, chaine2, min;

  std::cout << "entrez chaine 1 : " << std::endl;
  std::cin >> chaine1;
  std::cout << "entrez chaine 2 : " << std::endl;
  std::cin >> chaine2;

  min = (chaine1 < chaine2 ? chaine1 : chaine2);

  std::cout << "plus petite chaine : " << min << std::endl;
  std::cout << "longueur de la chaine : " << min.length() << std::endl;

  return 0;
}
