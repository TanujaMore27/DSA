\\\\# Minimum Number of Arrows to Burst Balloons





\\\\## Problem



There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points\[i] = \[xstart, xend] denotes a balloon whose horizontal diameter stretches between xstart and xend. You do not know the exact y-coordinates of the balloons.



Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xstart and xend is burst by an arrow shot at x if xstart <= x <= xend. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.



Given the array points, return the minimum number of arrows that must be shot to burst all balloons.





\\\\## Approach



* sort the array points
* take variable count,base and curr vector
* initialize curr with index 0 array and base with second element of base
* traverse points array from index 1
* if curr\[1] >= points\[i]\[0] \&\& base >= points\[i]\[0] then take curr max between curr and points\[i]\[1] and update base as min of base and points\[i]\[1]
* else update count,curr and base=curr\[1];



\\\\# This ensures:



\\\\- O(1) + O(log n)(sort recursion stack) space = Overall auxiliary = O(logn)



\\\\- time complexity:



Sorting → O(n log n)



One pass merge → O(n)



Total = O(n log n)





\\\\## Key Learning



*  curr\[1] = max(curr\[i],intervals\[i]\[1]) because this check to merge intervals till it will able to merge.
* base because it will check the lowest point from the starting of merging array which is the max diameter an arrow can reach.



