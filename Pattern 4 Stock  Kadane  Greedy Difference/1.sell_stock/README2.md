\\# Best Time to Buy and Sell Stock II







\\## Problem



You are given an integer array prices where prices\[i] is the price of a given stock on the i th day.



On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can sell and buy the stock multiple times on the same day, ensuring you never hold more than one share of the stock.



Find and return the maximum profit you can achieve.





\\## Approach



* take maxprofit as 0 and initial profit as 0
* if the price of current stock is greater than before day stock price then only add its difference i.e current profit as maxprofit
* but if its in less i.e negative then set current profit as 0. 
* return maxprofit





\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



observed pattern of kadanes algorithm by making difference array and its positive sum giving the profit which is required.

