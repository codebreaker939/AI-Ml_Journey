nums = [2, 7, 11, 15,8,1]
target = 9

# for i in range(len(nums)):
#     for j in range(i+1,len(nums)):
#        if nums[i]+nums[j]==target:
#         print(i,j)
        
#     break

#approach 2
# def two_sum(nums,target):
#    for i in range(len(nums)):
#     for j in range(i+1,len(nums)):
#        if nums[i]+nums[j]==target:
#           return[i,j]

# approach 3
def two_sum(nums, target):
    seen = {}

    for i in range(len(nums)):
        needed = target - nums[i]

        if needed in seen:
            return [seen[needed], i]

        seen[nums[i]] = i
