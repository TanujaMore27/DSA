class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> pair;
        unordered_set<char> unique;
        if(s.size() != t.size()) return false;
        for(int i=0;i<s.size();i++){
            char ch_s = s[i];
            char ch_t = t[i];

            if(pair.count(ch_s)){
                if(pair[ch_s] != ch_t) return false;
            }
            else{
                if(unique.count(ch_t)) return false;
                pair[ch_s] = ch_t;
                unique.insert(ch_t);
            }
        }
        return true;
    }
};