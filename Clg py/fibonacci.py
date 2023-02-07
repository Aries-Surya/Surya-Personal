print("Fibonacci Without recursion")
n=int(input("Enter the range: "))
a=1
b=1
i=1
print(a)
print(b)
while i<=n-2:
    c=a+b
    print(c)
    a=b
    b=c
    i=i+1
    




print("Fibonacci With recursion")
def fibonacci (n):
    if (n<2):
        return 1
    return (fibonacci(n-1)+fibonacci(n-2))

n=int(input("Enter the number of terms:"))
for i in range (n):
    print ("fibonacci(",i,")=",fibonacci(i))
fibonacci (n)