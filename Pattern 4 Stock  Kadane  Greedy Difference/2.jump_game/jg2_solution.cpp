class Solution {
public:
    int jump(vector<int>& nums) {
        int currReach,maxReach,jump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxReach = max(maxReach,nums[i]+i);
            if(i == currReach){
                jump++;
                currReach = maxReach;
            }
        }
        return jump;
    }
};