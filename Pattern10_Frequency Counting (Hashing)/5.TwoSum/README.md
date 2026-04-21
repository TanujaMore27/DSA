\\\\\\\\\\\\\\\\#  Two Sum



\\\\\\\\\\\\\\\\## Problem



Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.



You may assume that each input would have exactly one solution, and you may not use the same element twice.



You can return the answer in any order.



\\\\\\\\\\\\\\\\## Approach



* take an unordered map for storing elements within their index
* take a loop over nums
* take a variable computing target-nums\[i]
* if that variable value is present in unordered map then return pair such as {ans\[variable\_value],i}
* else add that element in map
* return {}



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(N)



\\\\\\\\\\\\\\\\## Key Learning :

* the double loop is also acceptable
* using hashmaps reduces complexity

