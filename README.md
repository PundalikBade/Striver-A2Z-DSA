# Striver-A2Z-DSA

✅ 1. Check if Array is Sorted and Rotated
🧠 Problem Statement:
You are given an array. Check if it is sorted in non-decreasing order, and then rotated.

Example:

[3, 4, 5, 1, 2] → YES (sorted [1, 2, 3, 4, 5] and rotated)

[1, 2, 3, 4, 5] → YES (sorted, 0 rotation)

[1, 3, 2] → NO

🧩 Logic Breakdown:
A sorted and rotated array will have at most one place where nums[i] > nums[i + 1] (i.e., a “break” in the increasing order).

We count how many such breaks occur.

If more than 1 break, it’s not sorted and rotated.

🔁 Example Walkthrough:
cpp
Copy
Edit
Input: [3, 4, 5, 1, 2]
i=0: 3 < 4 → OK  
i=1: 4 < 5 → OK  
i=2: 5 > 1 → ❗ break → count++
i=3: 1 < 2 → OK  
i=4: 2 < 3 (wraps to start) → OK

Total breaks: 1 → Valid
✅ Rule:
cpp
Copy
Edit
return count <= 1;
✅ 2. Remove Duplicates from Sorted Array
🧠 Problem Statement:
Given a sorted array, remove the duplicates in-place, and return the count of unique elements.

🧩 Logic Breakdown (Two-pointer technique):
We use:

i: to mark the last unique element

j: to scan the array

Whenever nums[j] != nums[i], it means a new unique number is found:

We move i forward

Copy the new number: nums[i] = nums[j]

🔁 Example Walkthrough:
cpp
Copy
Edit
Input: [0,0,1,1,1,2,2,3,3,4]

Step-by-step:
j=1: 0 == 0 → skip
j=2: 1 != 0 → i=1; nums[1] = 1
j=3: 1 == 1 → skip
j=4: 1 == 1 → skip
j=5: 2 != 1 → i=2; nums[2] = 2
j=6: 2 == 2 → skip
j=7: 3 != 2 → i=3; nums[3] = 3
j=8: 3 == 3 → skip
j=9: 4 != 3 → i=4; nums[4] = 4

Return i+1 = 5

Modified array: [0, 1, 2, 3, 4, _, _, _, _, _]