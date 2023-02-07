a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
c=int(input("Enter the third number:"))
if (a>b) & (a>c):
    print (a,"is greater")
elif (b>a) and (b>c):
    print(b,"is greater")
elif (a==b==c):
    print ("All are equal")
else:
    print(c,"is greater")