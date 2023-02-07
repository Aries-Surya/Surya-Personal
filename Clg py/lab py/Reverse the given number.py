n=int(input("Enter the number:"))
rev=0
while n>0:
    seperate=n%10
    rev=(rev*10)+seperate
    n=n//10
print(rev)

#Simple method
a=str(input('Enter the number (or) word:'))
print(a[::-1])