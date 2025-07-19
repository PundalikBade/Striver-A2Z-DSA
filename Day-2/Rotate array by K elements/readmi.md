Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.
Solution

Solution :

Approach 1: Using a temp array 

For Rotating the Elements to right
Step 1: Copy the last k elements into the temp array.

Step 2: Shift n-k elements from the beginning by k position to the right

Step 3: Copy the elements into the main array from the temp array.



Approach 2: Using ” Reversal Algorithm “

Approach:

For Rotating Elements to right
Step 1: Reverse the last k elements of the array

Step 2: Reverse the first n-k elements of the array.

Step 3: Reverse the whole array.

For Eg , arr[]={1,2,3,4,5,6,7} , k=2

Code: