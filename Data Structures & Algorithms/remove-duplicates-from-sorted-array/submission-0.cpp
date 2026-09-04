class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueCount = 1;
        int correct = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[++correct] = nums[i];
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
};