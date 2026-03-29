class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || s.size() <= numRows) return s;

        vector<vector<char>> ans(numRows);
        string new_s = "";
        int j = 0, i = 0;
        bool going_down = true;

        while (j < s.size()) {
            ans[i].push_back(s[j]);
            
            if (i == numRows - 1) going_down = false;
            else if (i == 0) going_down = true;
            
            if (going_down) i++;
            else i--;
            
            j++;
        }

        for (const auto& row : ans) {
            for (char c : row) {
                new_s += c;
            }
        }   
        return new_s;
    }
};
