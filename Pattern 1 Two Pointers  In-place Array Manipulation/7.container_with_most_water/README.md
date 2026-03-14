\\\\\\\\# Container with Most Water





\\\\\\\\## Problem



You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height\[i]).



Find two lines that together with the x-axis form a container, such that the container contains the most water.



Return the maximum amount of water a container can store.



Notice that you may not slant the container.



\\\\\\\\## Approach



* take two pointer left and right;
* take height,width and calculate area and save it maximun till now.
* if(height\[left] < height\[right]) then left++ else right--;
* return max water area

\\\\\\\\# This ensures:



\\\\\\\\- time complexity: O(N)



\\\\\\\\- space complexity: O(1) 





\\\\\\\\## Key Learning



* two pointers because time limit exceeds on o(n^2)
* (height\[left] < height\[right]) because only matters to go further if the height of next is greater than current else area will be reduce because same height only width is minimizing so area minimizes.

