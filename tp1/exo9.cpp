#include <iostream>

using std::cout;
using std::endl;

int exemple1(){
    int * p = new int;

   *p = 3;
   cout << *p << endl;

   delete p;

   return 0;
}

int exemple2(){
    const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) cout << p[i] << endl;

//    delete p;  
   delete [] p;

   return 0;
}

int main(int, char**) {
//    return exemple1();
   return exemple2();
}