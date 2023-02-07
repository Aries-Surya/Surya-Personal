a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
c=int(input("Enter the value of c: "))

if(a>b):
    if(a>c):
        print("The greatest number is: ",a)
elif(b>c):
    print("The greatest number is: ",b)
else:
    print("The greatest number is: ",c)
    
