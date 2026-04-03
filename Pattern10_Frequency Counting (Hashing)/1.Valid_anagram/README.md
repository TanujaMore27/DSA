\\\\\\\\\\\\\\\\# Valid Anagram



\\\\\\\\\\\\\\\\## Problem



Given two strings s and t, return true if t is an anagram of s, and false otherwise.



\\\\\\\\\\\\\\\\## Approach



* take fixed size array for freq
* if  sizes of given array are different then return false
* iterate over size of them and add freq for element in s array and also decrease its frequency in t
* then again iterate over all letters in array we made if freq of element in it is not zero then return false
* return true 



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(1)





\\\\\\\\\\\\\\\\## Key Learning



* as there will be only fixed lower English letters so take fixed size array
* also instead of sorting the given arrays just use fixed array freq counting ensuring understanding in interviews
* also dont use unordered map as it does not give fixed size array.

