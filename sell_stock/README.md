\*\* Pattern 2 found : Kadanes algorithm -> max sum of subarray



\\# Best Time to Buy and Sell Stock





\\## Problem



given the array for prices such that each index is the day on which that is the price of that stock on that day , so take that stock which gives the maximum profit upon selling it in future(so only look for the days after stock way buy) and return max profit





\\## Approach



* start with day one as min price of the stock and max profit as 0 because the stock having lowest value is the one who will be sold at maximum amount in given array of prices.
* traverse array from next day from taken min price.
* if price of current stock is less than old one then update min price to that.
* update profit if current profit is greater than old where current profit it current stock price - min price of the stock till traverse
* return max profit





\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



🧠 Key Learning



Kadane teaches you:



If cumulative gain becomes negative → reset.



Stock greedy teaches:



If price drops → reset buying point.



Same philosophy.







🔥 The Hidden Connection



Stock problem:



We want:



max(prices\[j] - prices\[i]) where j > i



Now rewrite it differently.



Instead of looking at prices directly, look at daily differences.



Example:



Prices:



\[7, 1, 5, 3, 6, 4]



Differences array:



\[ -6, +4, -2, +3, -2 ]



(Each element = prices\[i] - prices\[i-1])



Now think carefully:



If you buy at 1 and sell at 6

Profit = 5



That equals:



+4 -2 +3 = 5



Which is a maximum subarray sum problem.



So stock problem becomes:



Find maximum sum of a contiguous subarray in the difference array.



That is literally Kadane.





🔥 Big Pattern Insight



Whenever you see:



Max profit between two indices (j > i)



Think:



Can I convert to difference array?



Does this reduce to maximum subarray?



That’s the key pattern recognition.



