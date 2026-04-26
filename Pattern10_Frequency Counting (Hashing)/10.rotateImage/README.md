\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Rotate Image





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).



You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* apply loops outer from 0 to n+1/2 and inner with 0 to n/2
* do operations such as 
* int temp = matrix\[n-1-j]\[i];
* &#x20;               matrix\[n-1-j]\[i] = matrix\[n-1-i]\[n-j-1];
* &#x20;               matrix\[n-1-i]\[n-j-1] = matrix\[j]\[n-1-i];
* &#x20;               matrix\[j]\[n-1-i] = matrix\[i]\[j];
* &#x20;               matrix\[i]\[j] = temp;





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(N x N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(1)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* draw how the elements are shifting
* apply maths and assign variables such a way to get the desired index element.
* we are shifting four corner elements per loop

