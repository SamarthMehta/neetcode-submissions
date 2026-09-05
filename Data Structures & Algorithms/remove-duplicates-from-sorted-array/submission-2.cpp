class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueCount = 1;
        int n = nums.size();
        int occupied = 0;
        for(int i = 1;i<n;i++){
            if(nums[i-1]!=nums[i]){
                nums[++occupied] = nums[i];
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
};