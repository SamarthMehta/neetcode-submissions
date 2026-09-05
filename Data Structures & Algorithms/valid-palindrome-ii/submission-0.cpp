class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return checkPalindrome(s,start,end-1) || checkPalindrome(s,start+1,end);
            }
            start++;
            end--;
        }
        return true;
    }

    bool checkPalindrome(string s,int start,int end){
        while(start<end){
            while(start<end and !isalnum(s[start])){
                start++;
            }
            while(start<end and !isalnum(s[end])){
                end--;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            start++;
            end--;
       }
       return true;
    }
};