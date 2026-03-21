\\\\\\\\\\\\\\\\# Minimum Size Subarray Sum





\\\\\\\\\\\\\\\\## Problem



Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.



\\\\\\\\\\\\\\\\## Approach



* take two pointers both from start,currsum as 0 and minlength array as infinity
* while the right pointer reaches to the length iterate
* add it in currsum and increment right until it becomes greater than equal to target
* while it becomes greater than equal to target set minArray length as that sub array i.e right-left
* reduce left index sum from subarray and increment left 
* return 0 if min array length is infinity else return min array length



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(1)





\\\\\\\\\\\\\\\\## Key Learning



* deducing the left index from the sub array to check if sum still becomes greater than equal to target if it becomes then our min sub array length will be reduce and if not then and next i.e right index to it to check further possible subarray length.

