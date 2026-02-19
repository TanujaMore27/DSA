\# Remove Element



\## Problem

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place and return the number of elements not equal to `val`.



The first `k` elements of `nums` should contain the valid elements.

The remaining elements do not matter.





\## Pattern

use a pointer



\## Approach

* use a pointer k=0
* when there is element != val do nums\[k]= that element (as we only care about the not matching element not remaing ones) and increment the k
* return value of k
* handle edge case of empty array by returning 0



\# This ensures:

\- In-place modification

\- No extra space

\- O(n) time complexity



\## Key Learning

&nbsp;instead of swapping just taking a pointer for only required elements to get them at starting and take the count.

