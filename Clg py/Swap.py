print("With 3values")
def swap (a,b):
    temp=a
    a=b
    b=temp
    print("The value of a is",a,"The value of b is",b)
a=int (input("Enter the a:"))
b=int (input("Enter the b:"))
swap (a,b)

print("Without 3values")
def swap (x,y):
    x,y=y,x
    print("The value of x is",x,"The value of y is",y)
x=int (input("Enter the x:"))
y=int (input("Enter the y:"))
swap (x,y)
    