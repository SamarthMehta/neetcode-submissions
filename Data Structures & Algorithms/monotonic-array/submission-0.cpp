class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            if(!(nums[i] <= nums[i+1])){
                isIncreasing = false;
            }
            if(!(nums[i]>=nums[i+1])){
                isDecreasing = false;
            }
        }
        return isIncreasing || isDecreasing;
    }
};