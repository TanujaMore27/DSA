class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count = 0;
        sort(points.begin(),points.end());
        vector<int> curr = points[0];
        int base = curr[1];
        for(int i=1;i<points.size();i++){
            if(curr[1] >= points[i][0] && base >= points[i][0]){
                curr[1] = max(curr[1],points[i][1]);
                base = min(base,points[i][1]);
            }
            else{
                count++;
                curr = points[i];
                base = curr[1];
            }
        }
        count++;
        return count;
    }
};