#include <iostream>
  
using namespace std;

int main() {
    int num, power;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> power;

    long long result = 1; 

    if (power == 0) {
        cout << 1;
        return 0;
    }
    else if (power < 0) {
       
        int absPow = -power;
        for (int i = 1; i <= absPow; i++) {
            result *= num;
        }
        cout << "Result: " << (1.0 / result);
        return 0;
    }
    else {
        for (int i = 1; i <= power; i++) {
            result *= num;
        }
    }

    cout << "Result: " << result;
    return 0;
}

