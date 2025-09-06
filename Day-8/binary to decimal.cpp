#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string &b) {
    int result = 0;
    for (int i = 0; i < b.size(); i++) {
        result = result * 2 + (b[i] - '0');
    }
    return result;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);  // call directly
    cout << "Decimal value: " << decimal << endl;

    return 0;
}

