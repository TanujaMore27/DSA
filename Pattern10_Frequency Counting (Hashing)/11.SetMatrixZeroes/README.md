\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Set Matrix Zeroes





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* take m as row size and n as col size
* assign vector bool for rows of size m and for col of size of n
* traverse the matrix if zero is present set row\[i]=true and col\[j]=true
* after traverse once again through loop and set if(row\[i] || col\[j]) matrix\[i]\[j]=0





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(M x N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(M+N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* if you first identify the matrix element zero and did its transformation independently and then go to the next for search zero then its wrong because you are not tracking actual zeroes it will include transformed also.

