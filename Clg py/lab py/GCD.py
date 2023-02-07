def gcd(a,b):
    if (b==0):
        return a
    return gcd(b,a%b)
a=int(input("Enter the first number: "))
b=int(input("Enter the second number: "))
gcd=gcd(a,b)
print("GCD of this two numbers is:",gcd)
