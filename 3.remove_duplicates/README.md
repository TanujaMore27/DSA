

\#### Pattern Found :)



🔥 The Pattern



Both problems are:



“Keep at most m duplicates in a sorted array.”



Where:



Remove Duplicates I → m = 1



Remove Duplicates II → m = 2



That’s it.



Same structure. Same two-pointer idea. Same in-place writing.



Only difference is the allowed count.



🧠 Problem 1 (m = 1)



Condition:



if nums\[i] != nums\[k-1]



Meaning:



Only insert if current element is different from last inserted one.



So only one copy survives.



🧠 Problem 2 (m = 2)



Condition:



if nums\[i] != nums\[k-2]



Meaning:



Only insert if we haven’t already inserted two copies.



🧠 The General Pattern



If allowed duplicates = m



Initialize:



k = m



Loop from:



i = m to n-1



Condition:



if nums\[i] != nums\[k-m]:

&nbsp;   nums\[k] = nums\[i]

&nbsp;   k += 1



That’s the generalized template. 



\\# 1.Remove Duplicate from sorted array I :







\\## Problem



Given an sorted integer array `nums` remove the duplicates of the each element in nums array in place such that 'k' is number of valid elements return k.

The first `k` elements of `nums` should contain the valid elements.

The remaining elements do not matter.





\\## Pattern



use a pointer





\\## Approach



* use a pointer k=1
* traverse the array by loop starting from 1
* if element on k-1 and on loop variable are not same then assign the values of that loop variable to the kth value of num
* increment k
* return k





\\# This ensures:



\\- In-place modification



\\- No extra space



\\- O(n) time complexity







\\## Key Learning



if we compare with nums\[k-1] then there will be only one copy that is its alone the valid element itself.if the two elements we compare are not equal then there is a one copy present.(k-1) is the last inserted element.





\\# 2.Remove Duplicate from sorted array II :







\\## Problem



Given an sorted integer array `nums` remove the duplicates such that if element has duplicates then its overall occurrence should be twice only of the each element in nums array in place such that 'k' is number of valid elements return k.

The first `k` elements of `nums` should contain the valid elements.

The remaining elements do not matter.





\\## Pattern



use a pointer





\\## Approach



* use a pointer k=2
* traverse the array by loop starting from 2
* if element on k-2 and on loop variable are not same then assign the values of that loop variable to the kth value of num
* increment k
* return k





\\# This ensures:



\\- In-place modification



\\- No extra space



\\- O(n) time complexity







\\## Key Learning



if we compare with nums\[k-2] then there will be only exact two copies that is its alone the valid element and other one its copy itself.if the two elements we compare are not equal then there are a two copies present.(k-2) is the element before the last element inserted.









