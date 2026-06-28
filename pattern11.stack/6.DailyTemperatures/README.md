\\#  Daily Temperatures







\\## Problem

Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer\[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer\[i] == 0 instead.



&#x20;

\\## Approach



* take a stack and ans array with initialize array with zero and stack with last element of temperature array
* traverse through the given temp array from back 
* while !s.empty() \&\& temperatures\[i] >= temperatures\[s.top()] do  s.pop()
* if stack is empty push zero in ans and push index in stack
* else push distance i.e difference in ans between s.top and curr i and push curr index in stack 
* reverse the ans and return it 



\\# This ensures:





\\- Time Complexity: O(N)





\\- space complexity: O(N)



* as we are only pushing values of index in decreasing order it is monotonic stack 

