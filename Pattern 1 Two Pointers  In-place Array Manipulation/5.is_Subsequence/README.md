\\\\\\\\# Is Subsequence





\\\\\\\\## Problem



Given two strings s and t, return true if s is a subsequence of t, or false otherwise.



A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).





\\\\\\\\## Approach



* take the pointer to maintain index of s tring
* iterate string t over loop
* increment pointer of s string only if characters are same 
* check where the pointer of string s is traverse all the string or not
* if not return false else return true.

\\\\\\\\# This ensures:







\\\\\\\\- time complexity: O(t)



\\\\\\\\- space complexity: O(1)





\\\\\\\\## Key Learning





* use the pointer to traverse s string.
* also check where its limit will go to avoid "ace" is a subsequence of "abcde" while "aec" is not , this condition



