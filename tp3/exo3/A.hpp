#pragma once

class B;

class A
{
    private :
        int i;

    public :
        A();
        A(int i);
        int getI();
        void send(B * ptrB);
        void exec(int v);
};