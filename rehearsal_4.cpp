#include <iostream>
#include <string>
using namespace std;

string conpress(string x){
    string y = x;
    int L = x.size();
    int i = 1;

    while (i < L){
        y[i-1] = x[L];
        i=i+3;

    }
    return y;
    
    
}

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
