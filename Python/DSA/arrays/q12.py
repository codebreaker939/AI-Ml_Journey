# 🟠 Challenge 3 — Find the First Duplicate

# Given:

# arr = [2, 5, 1, 2, 3, 5, 1, 2, 4]

# Find the first number that appears again while moving from left to right.

# Expected output:

# 2


arr = [2, 5, 1, 2, 3, 5, 1, 2, 4]

duplicate = []

for i in arr:
    if i in duplicate:
        print(i)
        break
    else:
        duplicate.append(i)