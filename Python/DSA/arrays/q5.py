# 🟢 Question 5 — Search for an Element

# Now let's make it slightly harder.

# Given:

# arr = [4, 8, 2, 9, 6, 1, 7]
# target = 9

# Your job:

# Check whether target exists in the array.

# Expected output:

# Found

# If:

# target = 5

# Expected:

# Not Found
# Hint 🧠

# You already know almost everything needed:

# Loop through the array
#         ↓
# Compare each number with target
#         ↓
# If they are equal
#         ↓
# We found it

# You will probably ne

arr = [4, 8, 2, 9, 6, 1, 7]
target = 9
mila = False
for i in arr:
    if i ==  target:
        mila = True

if mila :
    print("yes")
else:
    print("no")
