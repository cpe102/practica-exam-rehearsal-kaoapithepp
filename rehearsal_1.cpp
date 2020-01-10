#include <iostream>

using namespace std;

int main() {
    string name;
    float GPA;

    cout << "What is your name?: " ;
    cin >> name;
    cout << "What is your GPA?: " ;
    cin >> GPA;

    if (GPA >= 3.50) {
        cout << name << " Inw Jrim Jrim!!!" << endl;
    } else {
        cout << "Try harder, " << name << " !!!" << endl ;
    }

    return 0;
}