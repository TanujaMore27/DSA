\\# Merge Intervals 







\\## Problem



Given an array of intervals where intervals\[i] = \[starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.



\\## Approach



* take two vectors  for vector of all lists and other for vector curr intervals i.e 0 th interval. 
* check that curr with next intervals with loop from i=1
* if curr\[1] >= intervals\[i]\[0] then take curr\[1] = max(curr\[i],intervals\[i]\[1]) 
* else add it to result vector and update curr to the curr index intervals.
* then at end add curr to result (i.e last index interval)
* return result
* 

\\# This ensures:



\\- O(n) + O(log n)(sort recursion stack) space = Overall auxiliary = O(n)



\\- time complexity:



Sorting → O(n log n)



One pass merge → O(n)



Total = O(n log n)





\\## Key Learning



*  curr\[1] = max(curr\[i],intervals\[i]\[1]) because this check to merge intervals till it will able to merge.
* curr as vector ensures that we can easily put list into results so no other space is taken.
