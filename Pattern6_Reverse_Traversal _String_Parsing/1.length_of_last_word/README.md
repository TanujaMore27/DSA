\\\\\\\\# Length of Last word





\\\\\\\\## Problem



Given a string s consisting of words and spaces, return the length of the last word in the string.



A word is a maximal substring consisting of non-space characters only.



\\\\\\\\## Approach



* start from index i i.e last index of string and len = 0;
* while there is space i--
* while i>=0 and no space len++
* return len



\\\\\\\\# This ensures:



\\\\\\\\- Time Complexity: O(N) overall (O(N)+O(1)+O(N))



\\\\\\\\- space complexity: O(1)





\\\\\\\\## Key Learning



* instead of using library try to use algorithmic reasoning
* it is not calculating overall string length because while loop will run till only no space comes and increment len of last word only.

