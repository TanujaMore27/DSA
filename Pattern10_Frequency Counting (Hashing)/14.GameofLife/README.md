\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#   Game of Life





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



According to Wikipedia's article: "The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."



The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):



Any live cell with fewer than two live neighbors dies as if caused by under-population.

Any live cell with two or three live neighbors lives on to the next generation.

Any live cell with more than three live neighbors dies, as if by over-population.

Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

The next state of the board is determined by applying the above rules simultaneously to every cell in the current state of the m x n grid board. In this process, births and deaths occur simultaneously.



Given the current state of the board, update the board to reflect its next state.



Note that you do not need to return anything.





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* for each element first find sum of their valid eight neighbours and store them in array
* manually go the each element and check their state and sum
* change the state according to the conditions



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(M\*N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(M\*N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Key Learnings:



* use sum to get total live ones 
* use different array to store the sum because if we go for one by one during check neighbours and then update together it will do wrong calculations i.e for according to the changed ones.

