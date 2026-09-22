# Valid Anagram

**Difficulty:** Easy

## LeetCode Link

https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array to count the characters in both strings. Increase the count for characters in the first string and decrease it for characters in the second string; if all counts are zero, the strings are anagrams.

## Complexity

**Time:** O(n)  
**Space:** O(1)

## Notes

Tested locally with two test cases and the solution was accepted on LeetCode.