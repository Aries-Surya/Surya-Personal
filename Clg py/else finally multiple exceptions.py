try:
    age=18
    if(age<0):
        raise ValueError ("Age can't be negative")
except:
    print("you have enterd incorrect age")
else:
    print("age is:",age)
finally:
    print("This program is done by Mr.Aries Surya")

try:
    a,b=map(int,input("Enter the number:").split(','))
    c=a//b
except ZeroDivisionError:
    print("U can't divide any number with 0")
except ValueError:
    print("its not a number")
else:
    print(c)
