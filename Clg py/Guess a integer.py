import random

num = random.randrange(1,20)
a =int(input("Enter the Guess number between 1 to 20: "))
a==num
while a!=num:
    if a>num:
        print("Your value is too higher. Try again")
        a =int(input("Enter the Guess number between 1 to 20: "))
    else:
        print("YOur value is too lower. Try again")
        a =int(input("Enter the Guess number between 1 to 20: "))

print("Congratulation your guess is correct!")
        
