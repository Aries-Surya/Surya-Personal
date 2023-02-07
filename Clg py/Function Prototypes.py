print ("Function without arguments and without return")
def add():
    a=int(input("Enter the value of A:"))
    b=int(input("Enter the value of B:"))
    c=a+b
    print(c)
add()

print ("Function with arguments and without return")
def add(a,b):
    c=a+b
    print(c)
a=int(input("Enter the value of A:"))
b=int(input("Enter the value of B:"))
add(a,b)

print ("Function without arguments and with return")
def add():
    a=int(input("Enter the value of A:"))
    b=int(input("Enter the value of B:"))
    c=a+b
    return c
c=add()
print(c)

print ("Function with arguments and with return")
def add(a,b):
    c=a+b
    return c
a=int(input("Enter the value of A:"))
b=int(input("Enter the value of B:"))
c=add(a,b)
print (c)
