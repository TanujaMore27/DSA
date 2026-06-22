\\#  Decode String







\\## Problem



Given an encoded string, return its decoded string.



The encoding rule is: k\[encoded\_string], where the encoded\_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.



You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2\[4].



The test cases are generated so that the length of the output will never exceed 105.



\\## Approach



* take two stacks string and num take currnum=0
* traverse through the string if digit use currnum = currnum\*10 + (iterator - '0') for tracking multiple digit number
* if string = \[ push that in string stack,put currnum in num stack and make currnum=0 
* if not ] then push it in string stack
* take a temp string while string stack has \[ take all chars and pop one by one and make string of then this condition occurs when ] appears
* pop the \[
* pop num from num stack as count 
* take replacement string and till count repeat it and append
* put that string in string stack
* take string result 
* while stack string get empty append all 
* return result



\\# This ensures:





\\- Time Complexity: O(N\*K)





\\- space complexity: O(N\*K)



Key Learnings :



* to\_String converts into ascii so use string(1,iterator)

