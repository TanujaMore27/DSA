\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Group Anagrams





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Given an array of strings strs, group the anagrams together. You can return the answer in any order.



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* take an unordered map having string and vector of string
* then traverse through given array of string and sort it and map that sorted one with main word for all array
* take an array of array i.e answer array and push that values mapped to key in answer array by traversing unordered map and push second pair i.e values array of the keys.
* return answer array



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(N∗K∗logK)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(N∗K)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* instead of applying all algorithm like valid anagram think in the direction of hash table and sorting
* sorting used as key helps to avoid overhead of adding main word



