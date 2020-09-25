#include <iostream>
#include "A.hpp"
#include "B.hpp"

int main(int, char**)
{
    A unA;
    B unB;

    for (int _ = 0; _ < 10 ; _++)
    {
        std::cout << "i = " << unA.getI() << std::endl;
        std::cout << "j = " << unB.getJ() << std::endl;
        unA.send(&unB);
        unB.send(&unA);
        std::cout << std::endl;
    }
    
}