class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int i=0;
        for(int j=0;j < t.size();j++){
            if(s[i] != t[j]){
                continue;
            }
            i++;
        }
        if(i < n){
            return false;
        }
        return true;
    }
};