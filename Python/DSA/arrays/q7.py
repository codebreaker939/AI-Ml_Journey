# 🟢 Question 7 — Second Largest

# Now we're going to combine what you've learned.

# Given:

# arr = [10, 5, 8, 20, 3, 15]

# Find the second largest number.

# Expected:

# 15

# Don't use:

# sort()
# sorted()
# max()
# Think about it

# You already know how to find the largest.

# But now we need:

# largest = ?
# second_largest = ?

# Think about what should happen when you encounter a number bigger than the current largest.

# For example:

# 10 → largest
# 5  → second?
# 8  → ?
# 20 → new largest
# 3  → ?
# 15 → ?


arr = [10, 5, 8, 20, 3, 15,30]

largest = arr[0]
second = arr[0]

for i in arr:
    if i > largest:
        second = largest
        largest= i
    elif i > second:
        second = i

print(second)
