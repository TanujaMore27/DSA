\\\\\\\\\\\\\\\\#  Contains Duplicate II



\\\\\\\\\\\\\\\\## Problem



Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums\[i] == nums\[j] and abs(i - j) <= k.



\\\\\\\\\\\\\\\\## Approach



* take an unordered map for storing elements within their index
* take a loop over nums
* if the map has duplicate then check if abs(i - j) <= k then return true else remove that pair from map(removing not necessary because it simply overwrites if duplicate is inserted)
* insert the element in map
* return false



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(N)





\\\\\\\\\\\\\\\\- Key Learnings :



* removing the pair because if the abs(i - j) ! <= k will else condition where the difference in index will be too much so removing that pair gives above present duplicate index chance to check avoids same elemnts entering in map
* return false at end because after all traversing through loop still no finding even after removing non satisfying values there is no possible answer left.

