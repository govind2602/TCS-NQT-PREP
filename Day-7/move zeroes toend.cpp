#include <iostream>
#include <vector>
using namespace std;

void movezero(vector<int>& nums) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n); 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    movezero(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

