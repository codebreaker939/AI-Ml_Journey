# 🟢 Question 4: Count Even and Odd Numbers

# Given:

# arr = [4, 7, 2, 9, 6, 1, 8]

# Expected:

# Even numbers: 4
# Odd numbers: 3
# Think step by step

# You probably need:

# One variable to count even numbers
# One variable to count odd numbers
# A for loop
# An if condition

arr = [4, 7, 2, 9, 6, 1, 8]

even = 0
odd = 0

for i in arr:
    if i%2==0:
        even +=1
    else:
        odd +=1

print(even,odd)
