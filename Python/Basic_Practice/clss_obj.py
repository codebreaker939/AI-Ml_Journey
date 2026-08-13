# class person():
#     name = "aniket"
#     job = "ceo"
#     sex = "male"
#     def my_info(self):
#         print(f"{self.name} is a {self.sex} and doing {self.job}")
        
# a =person()
# b = person()
# a.my_info()
# a.name ="shiva"
# a.job="owner"
# a.my_info()
# b.name="anchal"
# b.sex="female"
# b.cook="yes"
# b.my_info()


class car :
    Brand = "BMW"

    def __init__(self,name,age):
        self.name = name
        self.age= age
    
car1 =car("tim",4)
print(car1.name, car1.age ,car1.Brand)
