\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Spiral Matrix





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Given an m x n matrix, return all elements of the matrix in spiral order.



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* take vector res , m,n,start row and col , end row and col
* while srow <= erow \&\& scol <= ecol 
* set forward by matrix\[srow]\[j] varying j from scol to ecol,push matrix values in res
* set right by  matrix\[j]\[ecol] where j varies from srow to erow,push matrix values in res



* set backward by  matrix\[erow]\[j] where j varies from ecol-1 to scol to erow,push matrix values in res
* set left by  matrix\[j]\[scol] where j varies from ecol-1 to srow+1,push matrix values in res
* edge case (for backward if srow==erow) break and for left if scol == ecol break
* srow++,scol++,ecol--,erow--
* return res



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(M x N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: Space Complexity: 

Auxiliary Space: O(1)

Output Space:  O(M x N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* code is logicaaly making next points for next loop by using four start and end for col and row each
* edge cases are handled to avoid traversing duplicates in opposite order
* while loop is making sure the every element traverse and for loop is making sure to not add duplicates by bounds making wrong conditions to not work.



