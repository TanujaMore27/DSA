class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> pair;
        for(int i=0;i<nums.size();i++){
            if(pair.find(nums[i]) != pair.end()){
                if(i-pair[nums[i]] <= k) return true;
                else pair.erase(nums[i]);
            }
            pair[nums[i]] = i;
        }
        return false;
    }
};