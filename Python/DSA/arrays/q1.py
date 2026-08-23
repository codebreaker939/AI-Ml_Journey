# 🟢 Question 1: Find the Largest Element

# Given this list:

# arr = [4, 2, 7, 1, 9, 3]

# Your task: Find the largest number without using max().

# Expected output:

# 9

# 💡 Small hint: You need a variable that remembers the largest number found so far. Then loop through the array and compare each number with it.

# Try writing the code yourself and send it to me. Even if you're 100% unsure—just attempt it.


arr = [4, 2, 7, 1, 9, 3]

largest = arr[0]

for i in arr :
    if i > largest:
        largest = i

print(largest)

