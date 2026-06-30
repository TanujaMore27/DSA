class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int i=0;i<asteroids.size();i++){
            bool a = false;
            while(!s.empty() && s.top() > 0 && asteroids[i] < 0){
                int sum = s.top() + asteroids[i];
                if(sum < 0){
                    s.pop();
                }
                else if(sum == 0) {
                    s.pop();
                    a = true;
                    break;
                }
                else{
                    a=true;
                    break;
                }
            } 
            if(!a){
                s.push(asteroids[i]);
            }
        }
        int total = s.size();
        vector<int> ans(total);
        int i = total-1;
        while(!s.empty()){
            ans[i] = s.top();
            s.pop();
            i--;
        }
        return ans;
    }
};