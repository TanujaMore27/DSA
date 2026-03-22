// Approach 1
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count = 0;
        sort(citations.rbegin(),citations.rend());
        for(int i=0;i<citations.size();i++){
            if(citations[i] >= i+1) count++;
            else break;
        }
        return count;
    }
};



// Approach 2
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++){
            int idx = citations[i];
            if(idx > n){
                arr[n]++;
            }
            else{
                arr[idx]++;
            }  
        }
        int sum = 0;
        for(int j=arr.size()-1;j>=0;j--){
            sum += arr[j];
            if(sum >= j) return j;
        }
        return -1;
    }
};