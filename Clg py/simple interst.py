p=int(input("Enter principle amount: "))
n=int(input("Enter number of months: "))
r=int(input("Enter rate of interst per month: "))

n=n/12
rm=r*12

si=(p*n*rm)/100

print("Simple interst is: ",si)
