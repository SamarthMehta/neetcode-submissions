class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char c : s){
            if(isalnum(c)){
                newStr += tolower(c);
            }
        }
        string newStrRev = newStr;
        reverse(newStrRev.begin(),newStrRev.end());
        return newStr == newStrRev;
    }
};
