#include <iostream>

using namespace std;

int main() {
    float sum = 0,x;

    
    while (x != 0) {
        cout << "Enter x: ";
        cin >> x;
        sum = sum + x;
    }

    cout << "sum = " << sum << endl;

    return 0;
}
