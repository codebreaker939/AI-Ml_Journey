# opening file 

# f = open("/Users/aniketrai/Desktop/AI:ML_Journey/Python/Basic_Practice/fnctons.py" , "r")
# data = f.read()
# print(data)
# print(type(data))
# f.close()

# readine specific line
# f = open("/Users/aniketrai/Desktop/AI:ML_Journey/Python/Basic_Practice/fnctons.py" , "r")

# line1 = f.readline()
# print(line1)

# line2 = f.readline()
# print(line2)
# f.close




# writing the file           --- remove tthe old data
# f = open("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt" , "w")
# f.write("i want to take first ctc of 75LPA")
# f.close

# appending file               --- writes at last of the file
# f = open("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt" , "a")
# f.write("\nthan next ctc of 2.84cr LPA")     # --- ones wrriten is save can use f.write multiple times
# f.close


# opening with r+
# f = open("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt" , "r+")
# f.write("helooooo")
# data = f.read()
# print(data)

# opening with w+
# f= open("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt" ,"w+")
# print(f.read())
# f.write("byeeee")
# f=open("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt" ,"r")
# print(f.read())
# f.close

# with syntax
# with open ("/Users/aniketrai/Desktop/AI:ML_Journey/demo.txt","r") as f: 
#     data = f.read()
#     print(data)
    

# remove file
# import os
# os.remove("demo.txt")




# Question : create new file demo.txt add sdata : HI EVERYONE , I'M LEARNING FILE I/O ..I LIKE JAVA ......NOW CHANGE OCCURANCE OF JAVA WITH PYTHON AND SEARCH KEYWORD LEARNIG EXISTS OR NOT

# f =  open("demo.txt","x")
# f.close

# with open("demo.txt", "w") as f:
#     f.write("HI everyone " \
#     "I'm Learing FIle I/O and " \
#     "I like java")
# f.close

# with open("demo.txt","r") as f:
#     data = f.read()
#     new_data = data.replace("java" ," pythonsn")
# print(new_data)
# f.close

# with  open("demo.txt" ,"w") as f:
#     f.write(new_data)
# f.close()

# word = "like"
# with open("demo.txt","r") as f:
#     data = f.read()
#     if (data.find(word) != 1):
#         print("found")
#     else:
        # print("not found")



# now create a fucntiona nd check in which line "like " occurs

def check_line ():
    word ="like"
    data =True
    line_no=1
    with open ("demo.txt", "r") as f:
        while data:
            data = f.readline()
            if (word in data):
              print(line_no)
              return
              line_no +=1
            
      
    return -1
check_line()
