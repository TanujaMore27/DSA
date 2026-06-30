\\#  Asteroid Collision





\\## Problem



We are given an array asteroids of integers representing asteroids in a row. The indices of the asteroid in the array represent their relative position in space.



For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.



Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.



\\## Approach



* take a stack s
* iterate over the given array asteroids and take flag false
* while stack is not empty and stack top is > 0 and asteroid element is < 0 
* calculate sum for this condition if sum > 0 no need to push the negative element and set flag true then break , if sum = 0 pop the current top stack and make flag false and then break , if sum < 0 then pop the element only(as while loop continues comparing to stack top till condition satisfies so no need to put array element directly)
* if the flag is false then only push the element from asteroids in stack
* take a answer array of stack size after doing above operations 
* take i = size-1
* while s.empty() put element of stack at end of the array index pop the element from stack and decrement the i
* return array ans



\\# This ensures:





\\- Time Complexity: O(N)





\\- space complexity: O(N)



\\- Key Learnings :



* use flag to allow only valid element to push in stack
* this uses stack as it has operations like we did in parenthesis if such condition occurs then took these do some operations and push in stack like here
* the only condition for collision is first element is positive and the next occurring is negative(check examples by using arrows of the asteroids moving).

