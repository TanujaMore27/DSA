class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currSum = 0;
        int minArray = INT_MAX;
        int left = 0,right=0;
        while(right < nums.size()){
            currSum += nums[right];
            right++;
            while(currSum >= target){
                minArray = min(minArray,right-left);
                currSum -= nums[left];
                left++;
            }
        }
        return minArray == INT_MAX ? 0 : minArray;
    }
};