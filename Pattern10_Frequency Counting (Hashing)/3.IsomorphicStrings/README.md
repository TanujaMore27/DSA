\\\\\\\\\\\\\\\\#  Isomorphic Strings

\\\\\\\\\\\\\\\\## Problem



Given two strings s and t, determine if they are isomorphic.



Two strings s and t are isomorphic if the characters in s can be replaced to get t.



All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.



\\\\\\\\\\\\\\\\## Approach



* take unordered map for storing pairs and unordered set 
* if size of both given strings are not same return false
* traverse through s string 
* if element of s is present in map then check if it is same as the element from array t if not return false
* else if the element from t is present in set return false
* else add that in map and also add that element of array t in set
* return true



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(1) as There are only 256 possible characters in standard extended ASCII.There are only 256 possible characters in standard extended ASCII.





\\\\\\\\\\\\\\\\## Key Learning :

* set is taken so that no value of key should repeat as key





