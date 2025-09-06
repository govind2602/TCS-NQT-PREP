#include <bits/stdc++.h>
using namespace std;


    // Function: Decimal to Binary
    string decimalToBinary(int n) {
        if (n == 0) return "0";  // edge case
        string res = "";
        while (n > 0) {
            res += (n % 2 == 0 ? '0' : '1');
            n /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }


int main() {
    

    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary value: " << decimalToBinary(decimal) << endl;

    return 0;
}

