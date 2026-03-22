\\\\\\\\\\\\\\\\# H index





\\\\\\\\\\\\\\\\## Problem



Given an array of integers citations where citations\[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.



According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.



\\\\\\\\\\\\\\\\## Approach 1 : sort + greedy



* take count =0;
* sort the citation array in descending order
* increment count till citation\[i] >= i+1
* return count



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N) + O(nlogn) = O(nlogn)





\\\\\\\\\\\\\\\\- space complexity: O(logn)





\\\\\\\\\\\\\\\\## Approach 2 : count sort



* create an array equal to the number of papers i.e if citations.size()=n then array has n+1 size initialized with 0(not of biggest number because it can 100 that is not even required)
* &#x20;traverse citations array to store citations papers for each index in array as per the paper index i.e idx = citations\[i] , arr\[idx]++
* if idx > n then put it in last index of array only
* then traverse array from right and take sum=0
* for each index value of array add it in sum and check if sum >= that index if yes then return that index of array.



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(N)







\\\\\\\\\\\\\\\\## Key Learning



* Position matters more than value
* value vs index comparison
* sum = number of papers with ≥ j citations i.e we are counting highest citations to least citations matching the index because it calculating sum of all the papers having that much index of citations.

