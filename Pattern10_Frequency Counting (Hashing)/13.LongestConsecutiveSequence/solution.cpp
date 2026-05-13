class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int longest = 0;
        unordered_set<int> map(begin(nums),end(nums));
        
        for(int n:map){
            if(!map.contains(n-1)){
                int count = 1;
                while(map.contains(n+count)){
                    count +=1;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }    
};