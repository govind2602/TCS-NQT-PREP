#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {  
            result.push_back(arr[i]);   // keep order
            seen.insert(arr[i]);        // mark as seen
        }
    }

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

