#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien {
	bool calcul;

    public :
        Statisticien();
        bool aCalcule();
        bool acquerir(std::string filename);
};

#endif