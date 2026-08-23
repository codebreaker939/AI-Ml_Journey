# 🟢 Question 6 — Reverse an Array

# Now let's learn another very important array operation.

# Given:

# arr = [1, 2, 3, 4, 5]

# Expected:

# [5, 4, 3, 2, 1]
# Important:

# Don't use:

# arr.reverse()

# We want you to figure out the logic using a loop.

arr = [1, 2, 3, 4, 5]

reverse = []

# for i in range(4,-1,-1):
for i in range(len(arr)-1, -1, -1):
    reverse.append(arr[i])



print(reverse)