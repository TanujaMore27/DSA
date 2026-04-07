class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string pair[26] = {""};
        string word;
        vector<string> words;
        unordered_set<string> unique;
        stringstream ss(s);
        while(ss >> word){
            words.push_back(word);
        }
        if(pattern.size() != words.size()) return false;
        for(int i=0;i<pattern.size();i++){
            char ch_p = pattern[i];
            string s_s = words[i];
            if(pair[ch_p - 'a'] != ""){
                if(pair[ch_p - 'a'] != s_s) return false;
            }
            else{
                if(unique.count(s_s)) return false;
                pair[ch_p - 'a'] = s_s;
                unique.insert(s_s);
            }
        }
        return true;
    }
};