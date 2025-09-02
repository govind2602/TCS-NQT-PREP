#include <iostream>
#include <vector>
using namespace std;

int findMissingnum(vector<int>& nums, int n) {
    int totalsum = n * (n + 1) / 2;

    int actualsum = 0;
    for (int i = 0; i < nums.size(); i++) { // safer than i<n-1
        actualsum += nums[i];
    }

    return totalsum - actualsum;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<int> nums(n - 1);
    cout << "Enter " << n - 1 << " numbers from 1 to " << n << ": ";
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    int missing = findMissingnum(nums, n);
    cout << "Missing number is " << missing << endl;

    return 0;
}

