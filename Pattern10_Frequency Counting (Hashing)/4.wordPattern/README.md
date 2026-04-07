\\\\\\\\\\\\\\\\#  Word Pattern



\\\\\\\\\\\\\\\\## Problem



Given a pattern and a string s, find if s follows the same pattern.



Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:



Each letter in pattern maps to exactly one unique word in s.

Each unique word in s maps to exactly one letter in pattern.

No two letters map to the same word, and no two words map to the same letter.



\\\\\\\\\\\\\\\\## Approach



* take fixed array of string of 26 size, vector array for storing words from string,stringstream ss,unordered\_set unique and string word for traversing word from given string
* push the words from string s to vector words
* if pattern.size() != words.size() return false
* interate over the given string and char 
* if for that index element element is assign and it is not equal to the current word from the words vector return false
* else , if word is present in set then return false
* else assign the words to that index and insert that word in the set
* return true



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(1) 



\\\\\\\\\\\\\\\\## Key Learning :

* set is taken so that no value of key should repeat as key
* as there are only lowercase English letters so take a fix array of string instead of using dynamic because one letter will be assign to one word only .



