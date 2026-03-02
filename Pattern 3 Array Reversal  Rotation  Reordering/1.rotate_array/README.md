\\# Rotate Array







\\## Problem



Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.





\\## Approach

* first if k is greater than size of array then there will be repeation of traversing same, so set k= k % n , where n is size of array
* best is to reverse array fully
* then the last elements had come closer to start ,so reverse them till the kth index 
* again reverse the remaining last elements to maintain the order





\\# This ensures:



\\- O(1) space



\\- O(n) time complexity





\\## Key Learning



* avoid doing traversing for same
* instead of looping , changing the place of elements in circular is reversing them



