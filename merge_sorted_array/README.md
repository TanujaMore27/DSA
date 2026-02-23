\\# Merge Sorted Array







\\## Problem



given two sorted array nums1 of size m and nums2 of size n . merge both array such that nums1 should contain all elements from both two arrays in sorted order , hence the size of nums1 is m+n having first m elements as actual elements and last n elements as 0 to merge nums2 elements.





\\## Pattern



use a pointer(o(m+n)complexity) or use a loop(but gives O((m+n)^2) complexity)







\\## Approach



1.using loop :

* copy the elements from nums2 to nums1 at the place of zer i.e after m elements.
* sort them by bubble sort or any sorting algo.



\\# This ensures:



\\- No extra space



\\- O((m+n)^2) time complexity





2.Usinf pointer(optimized):

* take three pointer one from actual element of nums1,second for elements of nums2 and third for whole nums1 , all starting from last index of it.
* traverse both array from actual elements and change there place accordingly as if from nums1 is greater then push it back to the end of nums1 else put last in nums1 of nums2, this ensures  pushing largest element at the last of the nums1.
* decrease both that pointers that are used in both conditions.
* check if nums2 is travered fully or not if not then place remainedone in the remaining place of nums1 as its traversed by third pointer.(directly placing because if that are remaining means the larger ones are at there place and smaller ones are in nums2 remaining and as already sorted so such move.)





\\# This ensures:



\\- No extra space



\\- O(m+n) time complexity







\\## Key Learning



me complexity can be optimized by pointers as given arrays are already sorted.





