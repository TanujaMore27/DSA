\\\\# Insert Intervals 





\\\\## Problem



You are given an array of non-overlapping intervals intervals where intervals\[i] = \[starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = \[start, end] that represents the start and end of another interval.



Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).



Return intervals after the insertion.



Note that you don't need to modify intervals in-place. You can make a new array and return it.







\\\\## Approach







* take two vectors  for vector of all lists and other for vector curr intervals i.e 0 th interval. 
* insert the new interval in main interval array and sort it.
* check that curr with next intervals with loop from i=1
* if curr\\\[1] >= intervals\\\[i]\\\[0] then take curr\\\[1] = max(curr\\\[i],intervals\\\[i]\\\[1]) 
* &nbsp;else add it to result vector and update curr to the curr index intervals.
* then at end add curr to result (i.e last index interval)
* return result





\\\\# This ensures:







\\\\- O(n) + O(log n)(sort recursion stack) space = Overall auxiliary = O(n)







\\\\- time complexity:







Sorting → O(n log n)







One pass merge → O(n)







Total = O(n log n)











\\\\## Key Learning



\*  curr\\\[1] = max(curr\\\[i],intervals\\\[i]\\\[1]) because this check to merge intervals till it will able to merge.

\* curr as vector ensures that we can easily put list into results so no other space is taken.



