#include <iostream>
#include "A.hpp"
#include "B.hpp"

A::A() : A(0)
{}
A::A(int i = 0) : i(i)
{}
int A::getI()
{
    return i;
}
void A::send(B * ptrB)
{
    ptrB->exec(2);
}
void A::exec(int v)
{
    i += v;
}