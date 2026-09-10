class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        cycleSort(nums);
        vector<int> res;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=i+1){
                res.push_back(nums[i]);
                res.push_back(i+1);
            }
        }
        return res;
    }
    void cycleSort(vector<int>& nums){
        int  i = 0;
        while(i<nums.size()){
            int correctIndex = nums[i] - 1;
            if(nums[i]!=nums[correctIndex]){
                int temp = nums[i];
                nums[i] = nums[correctIndex];
                nums[correctIndex] = temp;
            }
            else{
                i++;
            }
        }
    }
};