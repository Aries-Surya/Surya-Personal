n=int(input("Enter the number:"))
a=n
temp=n
reverse=0
while (n>0):
    remainder=n%10
    reverse = (reverse*10)+remainder
    n=n//10
if(temp==reverse):
    print(a," is Palindrome")
else:
    print(a," is not Palindrome")
