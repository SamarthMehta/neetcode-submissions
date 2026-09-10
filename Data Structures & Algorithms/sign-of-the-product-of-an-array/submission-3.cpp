class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        long long product = 1;
        for(int i = 0;i<n;i++){
            product = product*signFunc(nums[i]);
        }
        long long ans = signFunc(product);
        return ans;
    }

    int signFunc(int product){
        if(product>0){
            return 1;
        }
        else if(product<0){
            return -1;
        }
        else{
            return 0;
        }
    }
};