\#  Evaluate Reverse Polish Notation



\## Problem



You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.



Evaluate the expression. Return an integer that represents the value of the expression.



Note that:



The valid operators are '+', '-', '\*', and '/'.

Each operand may be an integer or another expression.

The division between two integers always truncates toward zero.

There will not be any division by zero.

The input represents a valid arithmetic expression in a reverse polish notation.

The answer and all the intermediate calculations can be represented in a 32-bit integer.





\## Approach



* take a stack s
* iterate over the tokens 
* if tokens\[i] == "/" || tokens\[i] == "\*" || tokens\[i] == "-" || tokens\[i] == "+" then take top two values from stack and pop them and do each operation according to operator between these two and push it in stack
* else push the string to stack in stoi(tokens\[i]) form
* return s.top()



\# This ensures:



\- Time Complexity: O(N)



\- space complexity: O(N)





&#x20;Key Learnings :



* use ""(string) instead of ''(char) as vector<string>\& tokens is given input
* while taking values from stack to do operations first s.top() is second values and next s.top() is first value as per the input 
* if we use if condition as isdigit instead of operator checking it would cause problem.isdigit takes char not string and our input is string and if we did tokens\[i]\[0] it will took first values of string but its wrong bcoz if the input has "-11" then it will take - and got into operator but the digit is 11 , so cant handle negative values to avoid that confusion we shift it in else condition
* use stoi() function to convert into int instead of ascii i.e token\[i]-'0' again its wrong because token is string and '0' is char . 



