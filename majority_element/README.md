\\# Majority Element







\\## Problem



given array nums of size n , if element appears more than n/2 then that element is a majority element.



the nums array always has an majority element.



1.use hash map



\\## Approach

* take a unordered map for storing each elemnt with its occurring frequency.
* if its freq is > n/2 then return that the majority element else return -1.





\\# This ensures:



\\- O(n) space



\\- O(n) time complexity



2.using Boyar Moore Voting Algorithm:



\\## Approach

* take two variable to store count and the element num of the array
* if count becomes 0 then make that traversing element as num and increment count if the traversing element is same as num else decrement count.
* return num



\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



this algo ensures working as there is guarantee majority element is present in the array , it fails if not present.(main logic is as majority element > n/2 then this count ensures that count will become > 0 )



