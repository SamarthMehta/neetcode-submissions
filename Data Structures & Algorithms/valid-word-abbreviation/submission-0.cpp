class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.size();
        int m = abbr.size();
        int i = 0;
        int j = 0;

        while(i<n and j<m){
            if(abbr[j]=='0') return false;

            if(isalpha(abbr[j])){
                if(word[i]==abbr[j]){
                    i++;
                    j++;
                }
                else{
                    return false;
                }
            }
            else{
                int subLen = 0;
                while(j<m and isdigit(abbr[j])){
                    subLen = subLen * 10 + (abbr[j]-'0');
                    j++;
                }
                i += subLen;
            }
        }
        return i == n and j == m;
    }
};