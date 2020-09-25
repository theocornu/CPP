#pragma once

class A;

class B
{
    private :
        int j;
        
    public :
        B();
        B(int j);
        int getJ();
        void send(A * ptrA);
        void exec(int v);
};