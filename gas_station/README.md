\# Gas Station



\## Problem

There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.


\## Approach

* take a variables to calculate total cost, total gas , start index,currgas.
* if total gas > total cost then return -1
* else , take curr gass as gas[i]-cost[i] and iterate over loop till end of array
* if at any point curr gas becomes less than zero then update the start and curr gas. 

\# This ensures:

\- O(1) space

\- O(n) time complexity


\## Key Learning

* keeping variables to check what happens at every time
* If you fail to reach Station B starting from Station A, every station between and is also a failure. This transforms an search O(n^2) into a single O(n)pass.
* If total_gas >= total_cost, a solution must exist. This allows you to decouple the "can we do it?" check from the "where do we start?" search.