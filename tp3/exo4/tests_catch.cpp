#include <fstream>
#include <iostream>

#include "producteur.hpp"
#include "statisticien.hpp"
#include "catch.hpp"

TEST_CASE("Producteur_Initialisation") {
  ProducteurPremiersEntiers p;
  REQUIRE( p.getTravail() == 0);
}

TEST_CASE("Producteur_travail2") {
  ProducteurPremiersEntiers p;
  p.produire(10, "test01.txt");
  p.produire(10, "test01.txt");
  p.produire(10, "test01.txt");
  REQUIRE ( p.getTravail() == 3);
}

TEST_CASE("Producteur_Travail3") {

    const int         DEMANDE    = 10;
    const std::string NOM_FICHIER("test01.txt");
    int               lecture, i;
    ProducteurPremiersEntiers        p; 


    p.produire(DEMANDE, NOM_FICHIER.c_str());

    std::ifstream fichier(NOM_FICHIER.c_str());

    REQUIRE(fichier.is_open());

    if (!fichier.eof()) {
      fichier >> lecture; 
      REQUIRE(DEMANDE == lecture);
      for (i = 0; i < DEMANDE; ++i) {
        fichier >> lecture;
        REQUIRE( lecture == (i+1) );
      }
    
    REQUIRE(i == DEMANDE);
    CHECK(fichier.eof());
    fichier.close();

    REQUIRE(p.getTravail() == 1);
  }
}

TEST_CASE("Statisticien_Initialisation") {
  Statisticien p;
  REQUIRE_FALSE(p.aCalcule());
}

TEST_CASE("Satisticien_Acquerir") {
  Statisticien s;
  ProducteurPremiersEntiers p;
  int somme;
  float moyenne;

  REQUIRE(p.produire(10, "test01.txt") == true);
  REQUIRE(s.acquerir("test01.txt", somme, moyenne) == true);
  REQUIRE(s.aCalcule() == true);
}

TEST_CASE("Statisticien_Calculs"){
  Statisticien s;
  ProducteurPremiersEntiers p;
  const int DEMANDE = 10, SOMME = DEMANDE*(DEMANDE+1)/2;
  const float MOYENNE = (float)SOMME/DEMANDE;
  int somme = 0;
  float moyenne = .0;

  p.produire(DEMANDE, "test01.txt");
  s.acquerir("test01.txt", somme, moyenne);
  REQUIRE(somme == SOMME);
  REQUIRE(moyenne == Approx(MOYENNE));
}

TEST_CASE("Producteur_Aleatoire"){
  ProducteurAleatoire pa;

  pa.produire(10, "test01.txt");
}