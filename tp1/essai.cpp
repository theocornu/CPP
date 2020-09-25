#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{


    string s1("Hello");
    for (char &c : s1)
        c = toupper(c);
    cout << s1 << endl;
    
    return 0;
}