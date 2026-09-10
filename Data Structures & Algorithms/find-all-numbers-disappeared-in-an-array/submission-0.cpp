class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        cycleSort(nums);
        vector <int> res;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=i+1){
                res.push_back(i+1);
            }
        }
        return res;
    }

    void cycleSort(vector<int> &nums){
        int i = 0;
        while(i<nums.size()){
            int correctIndex = nums[i] - 1;
            if(nums[i]!=nums[correctIndex]){
                swap(nums[i],nums[correctIndex]);
            }
            else{
                i++;
            }
        }
    }
};