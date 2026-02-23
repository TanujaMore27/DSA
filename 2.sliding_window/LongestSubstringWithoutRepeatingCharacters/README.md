\# Longest Substring Without Repeating Characters



\## Pattern

Sliding Window



\## Approach

\- Use two pointers (left and right).

\- Use unordered\_map to store last index of characters.

\- If duplicate found:

&nbsp;   left = max(left, last\_index + 1)

\- Update max length at every step.



\## Time Complexity

O(n)



\## Space Complexity

O(1)



\## Key Learning

update the left pointer by removing it from the duplicate character

Always use max() to maintain valid window.



