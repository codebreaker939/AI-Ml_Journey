# 🟢 Question 2: Find the Smallest Element

# Given:

# arr = [8, 3, 10, 2, 6, 1, 7]

# Find the smallest number without using min().

arr = [8, 3, 10, 2, 6, 1, 7]

small = arr[0]

for i in arr :
    if i < small:
        small = i

print(small)