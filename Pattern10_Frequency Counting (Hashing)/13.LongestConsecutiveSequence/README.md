\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Longest Consecutive Sequence





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.



You must write an algorithm that runs in O(n) time.



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* push all elements of the nums given array to the unordered set,longest=0
* iterate over that set and check if has element-1 in that if not then count=1 , while we have n+count in our unordered set count++
* longest = max(count,longest)
* return longest



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* use set to get only non repeating element before traversing original array
* also set should be unordered\_set for O(N) lookup because only set has O(logn) lookup as it uses balanced binary tree and unordered\_set uses hash table. 
* element-1 to check if their exist any element in set that is less than the current element by one if not then this will be the first element of the series
* &#x20;n + count to check next occurrence which also allows while condition due to adding count in it incrementing for next element.

