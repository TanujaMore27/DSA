\\\\\\\\\\\\\\\\#  Ransom Note



\\\\\\\\\\\\\\\\## Problem



Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.



Each letter in magazine can only be used once in ransomNote.



\\\\\\\\\\\\\\\\## Approach



* take a fixed array ans and initialize with zero
* add freq of all elements in magazine in ans array
* then decrease the frequency of elemnets from ransomNote array
* iterate over the ans array if any elelment has count < 0 return false
* return true



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N+M)





\\\\\\\\\\\\\\\\- space complexity: O(1)





\\\\\\\\\\\\\\\\## Key Learning



* as there will be only fixed lower English letters so take fixed size array
* also dont use unordered map as it does not give fixed size array.
* increasing magazine gives possible characters and decreasing ransomNote gives mandatory ones so if any element has negative ount then that was not present in magazine bcoz if it was present there atleast ones then its freq will be 0 or positive.





