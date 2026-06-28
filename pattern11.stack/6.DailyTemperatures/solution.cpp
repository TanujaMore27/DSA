class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> ans;
        int n = temperatures.size() - 1;
        s.push(n);
        ans.push_back(0);
        for(int i= n-1 ; i >= 0 ; i--){
            while(!s.empty() && temperatures[i] >= temperatures[s.top()]) s.pop();
            if(s.size() == 0) {
                ans.push_back(0);
                s.push(i);
            }
            else{
                ans.push_back(s.top() - i);
                s.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};