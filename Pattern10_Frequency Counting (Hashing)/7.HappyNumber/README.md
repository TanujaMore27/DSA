\\\\\\\\\\\\\\\\#  Happy Number



\\\\\\\\\\\\\\\\## Problem



Write an algorithm to determine if a number n is happy.



A happy number is a number defined by the following process:



Starting with any positive integer, replace the number by the sum of the squares of its digits.

Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.

Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not.





\\\\\\\\\\\\\\\\## Approach



* declare global set
* make function operation having argument num , declare sum=0 while num sum += pow(num%10,2) num=num/10..return sum
* in main function isHappy having argument n , declare sum = operation(n)
* if sum == 1 return true
* else if sum is in set return false else insert sum in set
* return isHappy(sum)



\\\\\\\\\\\\\\\\# This ensures:





\\\\\\\\\\\\\\\\- Time Complexity: O(logN)

* The time this takes depends on how many digits are in the number.if 3 digits loop runs 3 times.



* Think of it like this:



A 1-digit number (like 9) is less than 

A 2-digit number (like 99) is less than (100).

A 3-digit number (like 999) is less than (1000).

The Log (Logarithm) is the opposite of an exponent. It asks: "10 to the power of what gives me this number?" i.e 9 < 10^1 i.e log9(base ten) < 1 which is log9 is approximately the number of times the loop runs. 





\\\\\\\\\\\\\\\\- space complexity: Space Complexity: O(small constant)

&#x20;It uses very little memory because the list of "seen" numbers never gets very long.



\\\\\\\\\\\\\\\\- Key Learnings :



* use set to track the repeated sum
* if sum is repeated then return false else continue to calculate the sum

