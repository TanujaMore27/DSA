class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currProfit = 0;
        for(int i=1;i<prices.size();i++){
            currProfit = max(0,prices[i]-prices[i-1]);
            maxProfit += currProfit;
        }
        return maxProfit;
    }
};