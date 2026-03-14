\\\\\\\\# 3 Sum





\\\\\\\\## Problem



Given an integer array nums, return all the triplets \[nums\[i], nums\[j], nums\[k]] such that i != j, i != k, and j != k, and nums\[i] + nums\[j] + nums\[k] == 0.



Notice that the solution set must not contain duplicate triplets.



\\\\\\\\## Approach



* sort the array
* one loop iterate over i and two pointers approach between j\&k;
* if sum >0 k-- sum<0 j++
* also if nums\[i] is same as nums\[i-1] go to next iteration
* else add it to array and j++,k-- and while(nums\[j] is same as nums\[j-1]) then j++
* return result array





\\\\\\\\# This ensures:



\\\\\\\\- Time Complexity: O(N^2)

sorting - O(NLOGN) (get dominated by O(N^2))



\\\\\\\\- space complexity: O(logn) to O(n) as ans array is not getting constant arrays insertion.





\\\\\\\\## Key Learning



* sort array as to go with sum less and greater the required
* check i and j because same duplicates can be push in array not k because making unique combination.

