# 🟢 Question 8 — Remove Duplicates

# Now let's try something different.

# Given:

# arr = [1, 2, 2, 3, 4, 4, 5, 5]

# We want:

# [1, 2, 3, 4, 5]

# Don't use:

# set(arr)

arr = [1, 2, 2, 3, 4, 4, 5, 5]

unique = []
for i in arr:
    if i not in unique:
        unique.append(i)
print(unique)