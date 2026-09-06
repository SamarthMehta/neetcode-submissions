class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int positiveIndex = 0;
        int negIndex = 1;

        vector<int> result(n);
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                result[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
            else{
                result[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        return result;
    }
};