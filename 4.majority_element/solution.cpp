// approach 1 (optimized):
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = 0;
        int cnt = 0;
        for(int n:nums){
            if(cnt == 0){
                num = n; 
            }
            if(n == num){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return num;
    }
};

//approach 2:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
            if(freq[i] > n/2){
                return i;
            }
        }
        return -1;
    }
};