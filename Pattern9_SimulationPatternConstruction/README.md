\\\\\\\\\\\\\\\\# Zigzag Conversion



\\\\\\\\\\\\\\\\## Problem



The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)



P   A   H   N

A P L S I I G

Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"



Write the code that will take a string and make this conversion given a number of rows:



string convert(string s, int numRows);



\\\\\\\\\\\\\\\\## Approach



* if (numRows <= 1 || s.size() <= numRows) return s;
* maintain a pointer j for chars and i for rows and take a array of arrays and also going\_down flag to make zig zag
* while j<s.size() push char in row\[i]
* if row == numrows-1 going down set to false and if becomes equal to one make it true.
* if going\_down is true then increment i of rows and else decrement it
* also increment string index j
* now append all chars row by row in new string and written that string.

\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(N)





\\\\\\\\\\\\\\\\- space complexity: O(N)





\\\\\\\\\\\\\\\\## Key Learning



* analyze pattern and maintain pointer to when increment and decrement the index
* maintaining array of array for storing the chars as per zigzag combinations.

