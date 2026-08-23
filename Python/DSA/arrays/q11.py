# 🟠 Challenge 2 — Find the Missing Number

# You are given an array containing numbers from 0 to n, but one number is missing.

# Example:

# arr = [3, 0, 1]

# The numbers should be:

# 0, 1, 2, 3

# But 2 is missing.

# Expected output
# 2

# Another example:

# arr = [9, 6, 4, 2, 3, 5, 7, 0, 1]

# Expected:

# 8

arr = [9, 6, 4, 2, 3, 5, 7, 0, 1]

for i in range(len(arr) + 1):
    if i not in arr:
        print(i)
