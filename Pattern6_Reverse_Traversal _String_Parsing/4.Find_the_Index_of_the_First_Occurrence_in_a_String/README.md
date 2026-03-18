\\\\\\\\\\\\\\\\# Find the Index of the First Occurrence in a String





\\\\\\\\\\\\\\\\## Problem



Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.



\\\\\\\\\\\\\\\\## Approach



* traverse only till n-m size of haystack - needle
* put j=0
* while j<m and haystack\[i+j] == needle\[j] , j++
* if j==m then return i
* return -1 at end
* 

\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N\*M)





\\\\\\\\\\\\\\\\- space complexity: O(1)





\\\\\\\\\\\\\\\\## Key Learning



* traverse string haystack only till possible index no need to traverse all because needle string possible length should be covered only.
* dont try to traverse i again and again with j and return i-j as index for first occurance cause confusion.
* hee i+j ensures that no back propagating for searching the string.

