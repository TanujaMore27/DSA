\\\\\\\\# Two Sum II





\\\\\\\\## Problem



Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers\[index1] and numbers\[index2] where 1 <= index1 < index2 <= numbers.length.



Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array \[index1, index2] of length 2.



The tests are generated such that there is exactly one solution. You may not use the same element twice.



Your solution must use only constant extra space.





\\\\\\\\## Approach



* take pointers left and right
* take vector array and sum variable
* while left < right ,if target < sum right--,target>sum left++;
* else target=sum so , push index in array and break
* return ans array



\\\\\\\\# This ensures:



\\\\\\\\- time complexity: O(N)



\\\\\\\\- space complexity: O(1) (as always add only constant number of elements)





\\\\\\\\## Key Learning



* two pointers left and right because instead of traversing n^2 it traverse according to the need of target if sum becomes greater then some greater number should be removed i.e right--,if sum becomes less then greater number should be added and smaller number should be remove so left++
* this is possible because array is sorted.
