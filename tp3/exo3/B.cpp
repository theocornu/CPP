#include <iostream>
#include "B.hpp"
#include "A.hpp"

B::B() : B(0)
{}
B::B(int j = 0) : j(j)
{}
int B::getJ()
{
    return j;
}
void B::send(A * ptrA)
{
    ptrA->exec(1);
}
void B::exec(int v)
{
    j += v;
}