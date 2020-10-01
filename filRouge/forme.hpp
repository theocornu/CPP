#pragma once

class Forme
{
    int w;
    int h;
    static int nbFormes;

    public :
        Forme();
        Forme(int w, int h);
        static int getCompteur();
};