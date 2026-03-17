\\\\\\\\\\\\\\\\# Longest Common Prefix





\\\\\\\\\\\\\\\\## Problem



Write a function to find the longest common prefix string amongst an array of strings.



If there is no common prefix, return an empty string "".





\\\\\\\\\\\\\\\\## Approach

* if array of string is empty return ""
* take first word of array as base word and iterate over it only
* take char ch from it
* now iterate over remaining words of the array and check if that char is present
* if length of base words becomes greater than current word while iterating over char or the character doesn't match then return the string till iterate over base word



\\\\\\\\\\\\\\\\# This ensures:







\\\\\\\\\\\\\\\\- Time Complexity: O(N\*M) N->length of base word , M-> size of array







\\\\\\\\\\\\\\\\- space complexity: O(1)







\\\\\\\\\\\\\\\\## Key Learning



* take a base word and compare remaining words with it



