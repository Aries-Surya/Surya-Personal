print("Without Recorsion:")
n=int(input("Enter the value of n: "))
fact=1
i=1
while(i<=n):
    fact=fact*i
    i=i+1
#method 1
print("Factorial of %s is %s" %(n,fact))

#method 2
print("Factorial of ",n,"is:",fact)
#%s is to call string

print(" ")

print("Recorsion:")

def fact (n):
    if (n==1 or n==0):
        return 1
    else:
        return(n*fact(n-1))
n=int(input("Enter the value of n:"))
fact=print("The factorial",n,"is",fact(n))