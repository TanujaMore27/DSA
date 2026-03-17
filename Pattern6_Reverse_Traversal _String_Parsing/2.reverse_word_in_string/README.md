\\\\\\\\\\\\\\\\# Reverse a word in String





\\\\\\\\\\\\\\\\## Problem



Given an input string s, reverse the order of the words.



A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.



Return a string of the words in reverse order concatenated by a single space.



Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.



\\\\\\\\\\\\\\\\## Approach

* reverse the string
* now we have string we required only words are reversed
* iterate over a string
* take empty string word and add char one by one till space occurs
* reverse that word and add it to the answer string with space before it to maintain space between two words
* return the answer string i.e sub string from index 1 as to avoid first space.



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)

The for loop and while loop: Together, they traverse the string exactly once O(N). Each character is visited and appended to word once. also string is reversed globally and locally once i.e also O(N).





\\\\\\\\\\\\\\\\- space complexity: O(N)

You are creating a brand new string to store the result, which takes up to N space.





\\\\\\\\\\\\\\\\## Key Learning



* instead of iterating over and check space and all within first and last word to word reverse the string instead.
* this makes space O(N) also,inplace will give you space O(1) which is better but it requires more overhead according to me.



