class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majElement = nums[0];
        int count = 0;
        for(int num : nums){
            if(count==0){
                majElement = num;
            }
            if(num == majElement){
                count++;
            }
            else{
                count--;
            }
        }
        return majElement;
    }
};