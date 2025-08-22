#include <iostream>
using namespace std;

void swaptwo(int &a, int &b) {   // pass by reference
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int m, n;
    cin >> m >> n;

    swaptwo(m, n);

    cout << m << " " << n;   // print swapped values
    return 0;
}

