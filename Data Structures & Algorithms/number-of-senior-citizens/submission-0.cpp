class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            if(ageChecker(details[i])){
                count++;
            }
        }
        return count;
    }

    bool ageChecker (string s){
        string check = "";
        for(int i = 11;i<13;i++){
            check += s[i];
        }
        if(stoi(check)>60){
            return true;
        }
        else{
            return false;
        }
    }
};