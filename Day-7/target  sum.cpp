#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool findTwoNumbersWithSum(vector<int>& nums, int target) {
    unordered_set<int> seen; // store numbers we have seen
    for (int i = 0; i < nums.size(); i++) {   // full for loop
        int num = nums[i];
        int complement = target - num; // the number we need
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: " << num << " + " << complement << " = " << target << endl;
            return true;
        }
        seen.insert(num); // store current number
    }
    cout << "No pair found" << endl;
    return false;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    findTwoNumbersWithSum(nums, target);

    return 0;
}

