# program a game of guess the lucky number
#rr
from random import randint
# import random

# def play_game():
#     lucky = randint(1,10)

play = lambda : randint(1,10)

while True:
    usr_num = int(input("guess your number"))

    if usr_num == play():
         print("waao")
         break
    elif usr_num < play():
            print("Toolow")
    else:
            print("TOO HIGH")
print("won the game")

play()