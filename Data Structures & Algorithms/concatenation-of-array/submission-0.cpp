class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> conc(2*nums.size());
        for(int i = 0;i<nums.size();i++){
            conc[i] = nums[i];
            conc[i+nums.size()] = nums[i];
        }
        return conc;
    }
};