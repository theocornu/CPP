#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>
#include <sstream>
#include <queue>

class ZZ {
    std::string nom, prenom;
    double note;

    public :
        ZZ() : nom("nomTest"), prenom("prenomTest"), note(0.) {}
        ZZ(std::string nom, std::string prenom="-", double note=10.) :
            nom(nom), prenom(prenom), note(note) {}
        friend bool operator<(const ZZ& a, const ZZ& b);
        friend std::ostream& operator<<(std::ostream& os, const ZZ& zz);

};

std::ostream& operator<<(std::ostream& os, const ZZ& zz) {
    os << zz.nom << " " << zz.prenom << " " << zz.note;
    return os;
}

bool operator<(const ZZ& a, const ZZ& b) { return a.note < b.note; }

void testVector() {
    std::vector<int> v;  
    int input;
    
    while (std::cin >> input)
        v.push_back (input);  
    
    std::sort(v.begin(), v.end());

    std::copy (v.begin(), v.end(), 
        std::ostream_iterator<int> (std::cout, "\n"));
}

void testStack() {
    std::stack<int> is;
    std::stack<double, std::vector<double> > ds;

    for (int i = 0; i < 100; ++i)
        is.push(i);

    while (!is.empty()) {
        std::cout << is.top() << std::endl;
        ds.push((double)is.top()*is.top());
        is.pop();
    }
}

void testPriorityQueue() {
    typedef std::vector<ZZ>  vzz;

    vzz zz;
    zz.push_back(ZZ("Dubois", "Léo", 15));
    zz.push_back(ZZ("Amar", "Bertrand", 18));
    zz.push_back(ZZ("Christin", "Hugo", 12));
    zz.push_back(ZZ("Save", "Ludovic", 9));

    std::priority_queue<ZZ> tri;

    for(vzz::iterator it = zz.begin(); 
        it!=zz.end(); ++it)
    tri.push(*it);

    while(!tri.empty()) {
        std::cout << tri.top() << "\n";
        tri.pop();
    }
}

int main(int, char **) {
    std::vector<ZZ *> zz;
    ZZ * zz1 = new ZZ("Dubois", "Léo", 15);
    ZZ * zz2 = new ZZ("Amar", "Bertrand", 18);
    ZZ * zz3 = new ZZ("Christin", "Hugo", 12);
    ZZ * zz4 = new ZZ("Save", "Ludovic", 9);

    zz.push_back(zz1);
    zz.push_back(zz2);
    zz.push_back(zz3);
    zz.push_back(zz4);

    zz.pop_back();
    zz.pop_back();
    zz.pop_back();
    zz.pop_back();

    return 0;
}
