# 🟠 Challenge 1 — Move All Zeros to the End

# Given:

# arr = [0, 1, 0, 3, 12]

# Modify the array so that all 0s move to the end, while keeping the order of the other numbers the same.

# Expected:

# [1, 3, 12, 0, 0]


arr = [0, 1, 0, 3, 12]

# result = []
# zero = []
# for i in arr:
#    if  i != 0:
#     result.append(i)
#    else:
#      zero.append(i)

# print(result+zero)

result = []
zero_cnt = 0
for i in arr:
   if  i != 0:
    result.append(i)
   else:
     zero_cnt += 1

for i in range(zero_cnt):
  result.append(0)

print(result)