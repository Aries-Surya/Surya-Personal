n=int(input("Enter the number:"))
sum1=0
while n>0:
    seperate=n%10
    sum1=sum1+seperate
    n=n//10
print(sum1)
