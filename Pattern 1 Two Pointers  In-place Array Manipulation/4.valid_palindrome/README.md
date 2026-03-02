\\\\# Valid Palindrome





\\\\## Problem



&nbsp;phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.



Given a string s, return true if it is a palindrome, or false otherwise.



\\\\## Approach



* maintain pointer left and right
* till left<right if any does not becomes alphanumeric then left++ and right-- separately.
* check if both are same by lowering them if not return false
* else left++ and right--;
* after condition becomes unsatisfied of while return true.

\\\\# This ensures:



\\\\- time complexity: O(n)

\\\\- space complexity: O(1)





\\\\## Key Learning



* instead of using loop use pointers
