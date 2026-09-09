class Solution {
public:
    string largestGoodInteger(string num) {
        string res ="";
        int n = num.size();
        for(int i = 0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string current = num.substr(i,3);
                res = max(res,current);
            }
        }
        return res;
    }
};