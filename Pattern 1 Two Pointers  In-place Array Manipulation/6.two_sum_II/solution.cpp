class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int sum = 0;
        int left = 0;
        int right = numbers.size()-1;
        while(left < right){
            sum = numbers[left] + numbers[right];
            if(sum < target) left++;
            else if(sum > target) right--;
            else{
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;
    }
};