\#  Min Stack



\## Problem



Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.



Implement the MinStack class:



MinStack() initializes the stack object.

void push(int value) pushes the element value onto the stack.

void pop() removes the element on the top of the stack.

int top() gets the top element of the stack.

int getMin() retrieves the minimum element in the stack.

You must implement a solution with O(1) time complexity for each function.



An input string is valid if:





Open brackets must be closed by the same type of brackets.



Open brackets must be closed in the correct order.



Every close bracket has a corresponding open bracket of the same type.







\## Approach



* take a int pair of stack 
* for push operation if stack is empty put pair of val,val in it
* else put val,min(val,s.top().second)
* for pop use pop()
* for top use top().first
* for getmin return s.top().second
* no need for condition of s.empty as per constraints







\# This ensures:



\- Time Complexity: O(1)



\- space complexity: O(N)





&#x20;Key Learnings :



* use pair of stack so that there will be O(1) operation for traversing minimum element from stack











