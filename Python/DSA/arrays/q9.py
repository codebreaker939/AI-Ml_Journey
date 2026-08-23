# 🟢 Question 9 — Check if Array is Sorted

# Let's do one more basic one before we move toward LeetCode.

# Given:

# arr = [1, 2, 3, 4, 5]

# Expected:

# Sorted

# But:

# arr = [1, 3, 2, 4, 5]

# Expected:

# Not Sorted

arr = [1,6,2, 3, 4, 5]

sorted = True

for i in range(len(arr)-1):
    if arr[i] > arr[i+1]:
        sorted=False

if sorted :
    print("yes")
else:
    print("nop")
