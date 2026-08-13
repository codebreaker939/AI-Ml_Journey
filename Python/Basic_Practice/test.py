# Given a number n, print the multiplication table from 1 to 10 for n in a single line, separated by spaces.

# n=int(input())
# for i in range (1,11):
#     print(n*i, end=" ")

#You are given a String S, you need to print its characters at even indices(index starts at 0).
a = str(input("write your line"))
# for i in range (0,len(a),2):
#     print(a[i],end=" ")

i=0
for i in range(len(a)):
    print(a[i], end=" ")
    i=i+2