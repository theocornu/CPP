#include <iostream>

template <typename T>
const T& maximum(const T& a, const T& b) { 
    return ((a > b) ? a : b);
}

int main(int, char**) {
    int a = 2, b = 5;
    long l = 15;
    std::cout << maximum(a,b) << std::endl;
    std::cout << maximum<int>(a,l) << std::endl;
}