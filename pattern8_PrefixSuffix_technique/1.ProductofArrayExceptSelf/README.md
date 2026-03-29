\\\\\\\\\\\\\\\\# Product of Array Except Self





\\\\\\\\\\\\\\\\## Problem



Given an integer array nums, return an array answer such that answer\[i] is equal to the product of all the elements of nums except nums\[i].



The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.



You must write an algorithm that runs in O(n) time and without using the division operation.



\\\\\\\\\\\\\\\\## Approach



* create array ans of same size as nums and initialize it with 1;
* calculate prefix for each index  by multiplying prefix of back index and back nums value i.e ans\[i] = ans\[i-1]\*nums\[i-1];
* as for suffix it becomes solved from last index , start from n-2 index till 0 and take suffix multiplication within for each index and multiply it with answers index i.e ans\[i] = ans\[i]\*suffix;
* return ans array



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(1)





\\\\\\\\\\\\\\\\## Key Learning



* Instead of making prefix and suffix array and multiply them separately optimize it by multiplying in place.

