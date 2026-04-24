\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Valid Sudoku





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:



Each row must contain the digits 1-9 without repetition.

Each column must contain the digits 1-9 without repetition.

Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:



A Sudoku board (partially filled) could be valid but is not necessarily solvable.

Only the filled cells need to be validated according to the mentioned rules.





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* make a function for iterating each value from matrix
* take a outer loop make set and then inner loop
* set modes 0,1,else for changing index vertical,horizontal,small columns
* for mode 0 keep board\[i]\[j],for 1 keep board\[j]\[i] for else nt rowStart = (i / 3) \* 3; int colStart = (i % 3) \* 3;current = board\[rowStart + (j / 3)]\[colStart + (j % 3)];
* if not alphanumeric then check if present in set if present return false else insert in set
* return true
* in main function call for vertical , horizontal and for each sub square in it
* if vertical \&\& horizontal then return sub square
* return vertical \&\& horizontal

&#x20;

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(1)

If generalized to an N×N Sudoku:

&#x20;O(N² log N) but n is constant=9



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: Space Complexity: O(1)









