n=int(input("Enter the number:"))
arm=0
temp=n
while temp>0:
    seperate=temp%10
    arm=arm+(seperate^3)  # ^ (or) **power
    temp=temp//10
if n==arm:
    print(n,"is not a armstrong number:(")
else:
    print(n,"is a armstrong number!")
