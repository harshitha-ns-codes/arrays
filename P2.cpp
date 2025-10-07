#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();

        // ✅ if there are fewer than 2 elements, no second largest exists
        if (n < 2) return -1;

        int largest = nums[0];
        int slargest = -1;

        // Find the largest element
        for (int i = 1; i < n; i++) {
            if (nums[i] > largest)
                largest = nums[i];
        }

        // Find the second largest element (different from largest)
        for (int i = 0; i < n; i++) {
            if (nums[i] != largest && nums[i] > slargest)
                slargest = nums[i];
        }

        return slargest;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {5, 9, 1, 7, 9, 3};
    // You can also try: {7}, {5, 5}, {2, 3}

    int ans = sol.secondLargestElement(nums);

    cout << "Second largest element: " << ans << endl;

    return 0;
}
