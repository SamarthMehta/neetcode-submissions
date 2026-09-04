class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int togetherCount = 0;
        for(int num : nums){
            if(num==1){
                togetherCount++;
                maxCount = max(togetherCount,maxCount);
            }
            else{
                togetherCount = 0;
            }
        }
        return maxCount;
    }
};