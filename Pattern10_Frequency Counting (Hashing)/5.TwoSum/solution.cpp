class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            int remainder = target - nums[i];
            if(ans.find(remainder) != ans.end()){
                return {ans[remainder],i};
            }
            ans[nums[i]] = i;
        }
        return {};
    }

};