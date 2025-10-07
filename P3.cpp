#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Count the decreasing pairs
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i])
                count++;
        }
        
        // Check the wrap-around (for rotation)
        if (nums[n - 1] > nums[0])
            count++;
        
        // At most one violation → rotated sorted array
        return count <= 1;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {3, 4, 5, 1, 2}; // Example input
    
    if (sol.check(nums))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    return 0;
}
