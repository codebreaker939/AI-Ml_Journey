# 🟠 Challenge 4 — Find the frequency of each element

# Given:

# arr = [1, 2, 2, 3, 1, 2, 4]

# Expected idea:

# 1 → 2 times
# 2 → 3 times
# 3 → 1 time
# 4 → 1 time

# Don't use count().

arr = [1, 2, 2, 3, 1, 2, 4]

seen = []

for i in arr:
    if i not in seen:
        count = 0

        for j in arr:
            if j == i:
                count += 1

        seen.append(i)
        print(i, count)
   