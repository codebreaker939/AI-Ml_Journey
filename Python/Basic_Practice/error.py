# a = (input("give your number"))
# print(f"multiplication of {a} is:")
# try:
#     for i in range (1,11):
#         print(f"{int(a)}*{i} = {int(a*i)}")
# except Exception as e :
#     print("error", e)


# print("hi hekooo")
# print("herfejrkhfe")


try:
    num = int(input("enter youur number"))
    a = [5,4,4]
    print(a[num])
except ValueError:
    print("numb imporper")
except IndexError :
    print("indeex n/a")
