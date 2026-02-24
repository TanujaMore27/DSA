\\# Jump Game







\\## Problem



You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.



Return true if you can reach the last index, or false otherwise.





\\## Approach



* maintain max jump you can take initialize with zero.
* max jump = max(max jump , i + nums\[i])
* return false if i>max jump
* return true after all array is traverse.



\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



* if reach to an particalr index by i+nums\[i]
* max jump take the max jump we can do , whenever our max jump become less than our index means we cant reach there so we return false .
* we are checking our next index can reach by max jump but we have to get to know that can we move further hence we have to iterate all the array.
