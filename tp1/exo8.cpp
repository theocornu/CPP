#include <iostream>

void echangeInt_ptr(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void echangeInt_ref(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}


int main(int, char **){
    int  a = 3;
    int  b = a;
    int& c = a;

    std::cout << a << " " << b << " " << c << std::endl;
    b = 4;
    std::cout << a << " " << b << " " << c << std::endl;
    c = 5;
    std::cout << a << " " << b << " " << c << std::endl;
    a = 6;
    std::cout << a << " " << b << " " << c << std::endl;

    echangeInt_ptr(&a, &b);
    std::cout << a << " " << b << std::endl;
    echangeInt_ref(a, b);
    std::cout << a << " " << b << std::endl;
}
