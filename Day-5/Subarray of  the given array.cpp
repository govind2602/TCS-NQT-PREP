#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Generate all subarrays
    for (int i = 0; i < n; i++) {
        vector<int> temp; // new vector for each starting index
        for (int j = i; j < n; j++) {
            temp.push_back(arr[j]); // extend subarray

            // print current subarray
            cout << "[ ";
            for (int k = 0; k < temp.size(); k++) {
                cout << temp[k] << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}

