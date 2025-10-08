class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        // Step 1: find first zero
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, array is already fine
        if(j == -1) return;

        // Step 2: move non-zeros forward
        for(int i = j+1 ; i < n ; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++; // increment j only if swap happened
            }
        }
    }
};
