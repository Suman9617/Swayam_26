#include <bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(vector<int>& nums) {
    int maxOnes = 0, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
        } else {
            maxOnes = max(maxOnes, count);
            count = 0;
        }
    }
    maxOnes = max(maxOnes, count);
    return maxOnes;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum consecutive ones: " << MaxConsecutiveOnes(nums) << endl;
    return 0;
}