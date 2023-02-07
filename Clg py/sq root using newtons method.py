def newtonsqrt(n):
    root=n/2
    for i in range(10):
        root=(root+n/root)/2
    print("The sqrt of",n,'=',root)
n=eval(input("Enter number to find sqrt:"))
newtonsqrt(n)

#normal method: but it wrks only on positive numbers:(
def sqrt(a):
    b=a**0.5
    print ("The sqrt of the",a,"=",int(b)) 
a=float(input("Enter the number:"))
sqrt(a)