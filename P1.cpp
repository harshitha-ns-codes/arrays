#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0]; // Initialize with first element
        int n = nums.size();   // Get size of vector

        for (int i = 0; i < n; i++) {
            if (nums[i] > largest)
                largest = nums[i];
        }
        return largest;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 2, 9, 1, 6, 7};

    int ans = sol.largestElement(nums);
    cout << "Largest element: " << ans << endl;

    return 0;
}
