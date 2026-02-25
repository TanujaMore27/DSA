\\# Jump Game II







\\## Problem



You are given a 0-indexed array of integers nums of length n. You are initially positioned at index 0.



Each element nums\[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i, you can jump to any index (i + j) where:



0 <= j <= nums\[i] and

i + j < n

Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index n - 1.



\\## Approach



* maintain variable jump,furtherReach and currReach with initialize with zero
* take loop over array and take the maximum further reach over each index till size-2 , because it will again increase jump as last index which we are not jumping.
* if index becomes equal to the currReach then update jump and currReach=further reach
* return jump after iterating over array



\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



* keeping variables to check what happens at every time
* as jump starting was calucate as jump 1 , because we are using that index value as the jump and updating curr reach  with further reach because the first jump was only till that index and next one starts by taking max further we can go.
