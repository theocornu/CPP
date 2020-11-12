#include "catch.hpp"
#include "pile.hpp"
#include <iostream>

//typedef PileGen<int> Pile;
typedef PileGen<std::string> Pile;

TEST_CASE("Constructeur par defaut") {
   Pile p; // cela implique que par defaut la capacite de la pile n'est pas nulle => pas d exception
   
   CHECK(  p.empty() );
   CHECK(  0 == p.size() );
}

// A faire quand on aura vu les exceptions
TEST_CASE("Exceptions de mauvaise construction") {

   REQUIRE_THROWS_AS( Pile(-1).empty(), std::invalid_argument& );
   REQUIRE_THROWS_AS( Pile( 0).empty(), std::invalid_argument& );
   
}

// A faire quand on aura vu les exceptions
TEST_CASE("Exception pile vide") {

   REQUIRE_THROWS_AS( Pile().pop(), std::invalid_argument& );
   
}

/*TEST_CASE("Exception pile pleine") {
   Pile p(5);
   for (int i = 1; i <= 5; ++i) p.push(i);
   REQUIRE_THROWS_AS( p.push(10), std::out_of_range& );
   
}

TEST_CASE("Live pile entier") {
    Pile p(10);

    CHECK(  p.empty() );
    CHECK(  0 == p.size() );

    p.push(5);

    CHECK( !p.empty() );
    CHECK( 1 == p.size() );
    CHECK( 5 == p.top() );

    p.push(2);
    p.push(1);

    CHECK( 3 == p.size() );
    CHECK( 1 == p.top() );

    p.pop();

    CHECK( 2 == p.size() );
    CHECK( 2 == p.top() );

    p.pop();
    p.pop();

    CHECK( 0 == p.size() );

}*/

TEST_CASE("Live pile string") {
    Pile p(10);

    CHECK(  p.empty() );
    CHECK(  0 == p.size() );

    p.push("à");

    CHECK( !p.empty() );
    CHECK( 1 == p.size() );
    CHECK( "à" == p.top() );

    p.push("Tous");
    p.push("Salut");

    CHECK( 3 == p.size() );
    CHECK( "Salut" == p.top() );

    p.pop();

    CHECK( 2 == p.size() );
    CHECK( "Tous" == p.top() );

    p.pop();
    p.pop();

    CHECK( 0 == p.size() );
}