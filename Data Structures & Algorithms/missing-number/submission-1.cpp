class Solution {
public:
    int missingNumber(vector<int>& nums) {
        cyclicSort(nums);
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }

    void cyclicSort(vector<int> &nums){
        int i = 0;
        while(i<nums.size()){
            int correct = nums[i];
            if(correct < nums.size() && nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
            }
            else{
                i++;
            }
        }
    }
};
