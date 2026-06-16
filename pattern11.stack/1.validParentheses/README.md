\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#  Valid Parentheses





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Problem



Given a string s containing just the characters '(', ')', '{', '}', '\[' and ']', determine if the input string is valid.



An input string is valid if:



Open brackets must be closed by the same type of brackets.

Open brackets must be closed in the correct order.

Every close bracket has a corresponding open bracket of the same type.





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\## Approach



* take a stack
* if the string has opening brackets put it in stack
* else  if size of stack == 0 return false , else if opening and closr brackets are same then pop element from the top,else return false
* return stack size == 0 



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- Time Complexity: O(N)



\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\- space complexity: O(N)





\\\\\\\\\\ Key Learnings :



* check if size of stack is zero or not while checking for closed bracket , there is possibility that there are only open brackets in the string
* instead of returning true and false by checking the stack top return if the stack size == 0 .





