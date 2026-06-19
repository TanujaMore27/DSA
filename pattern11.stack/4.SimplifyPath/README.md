\\#  Simplify Path







\\## Problem



You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. Your task is to transform this absolute path into its simplified canonical path.



The rules of a Unix-style file system are as follows:



A single period '.' represents the current directory.

A double period '..' represents the previous/parent directory.

Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.

Any sequence of periods that does not match the rules above should be treated as a valid directory or file name. For example, '...' and '....' are valid directory or file names.

The simplified canonical path should follow these rules:



The path must start with a single slash '/'.

Directories within the path must be separated by exactly one slash '/'.

The path must not end with a slash '/', unless it is the root directory.

The path must not have any single or double periods ('.' and '..') used to denote current or parent directories.

Return the simplified canonical path.



Note that:





The valid operators are '+', '-', '\\\*', and '/'.



Each operand may be an integer or another expression.



The division between two integers always truncates toward zero.



There will not be any division by zero.



The input represents a valid arithmetic expression in a reverse polish notation.



The answer and all the intermediate calculations can be represented in a 32-bit integer.







\\## Approach



* take two stacks s,s2 ,string ans and string token
* pass path into stringstream
* using getline within while loop separate each string from path by "/" and push it into s
* if token == "" or "." ignore
* else if token == ".." if s not empty s.pop()
* else s.push(token)
* if stack is empty return "/"
* if not then push all elements into s2 
* now till s2.empty() append "/"+s2.top() to ans 
* return ans







\\# This ensures:





\\- Time Complexity: O(N)





\\- space complexity: O(N)



Key Learnings :



* token is the stringstream saperated sub strings
* in token == "" or "." ignore have "" because while separating by / getline gives it as 

When stringstream splits /home/ using the / character, it breaks it into three pieces (tokens):



Token 1: "" (An empty string before the first slash)

Token 2: "home"

Token 3: "" (An empty string after the last slash)



First token (""): It is not . and it is not ... code goes to the else block and pushes "" into your stack s.



so in stack s contains: \["", "home", ""] 

therefore it takes the first empty string "": ans.append("/" + "") -> "/"



so output becomes "//home" instead of "/home"



