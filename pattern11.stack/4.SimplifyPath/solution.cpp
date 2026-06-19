class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        string token;
        stringstream ss(path);

        while(getline(ss,token,'/')){
            if(token == "." || token == "") continue;
            else if(token == ".."){
                if(!s.empty()) s.pop();
            }
            else s.push(token);
        }
        string ans = "";
        if(s.size() == 0){
            return "/";
        }
        stack<string> s2;
        while(!s.empty()){
            string back = s.top();s.pop();
            s2.push(back);
        }
        while(!s2.empty()){
            ans.append("/" + s2.top());
            s2.pop();
        }
        return ans;
    }
};