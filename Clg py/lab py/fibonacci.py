n=10#int(input("Enter the range: "))
a=0
b=1
i=1
print(a,b,end=' ')
c=a+b
while c<n:
    c=a+b
    a=b
    b=c
    print(c,end=' ')

