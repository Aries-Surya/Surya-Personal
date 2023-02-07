print("To find reminder & quotient")
def div(a,b):
    r=a%b
    q=a//b
    return(r,q)
a=int(input("Enter the value of a:"))
b=int(input("Enter the value of b:"))
r,q=div(a,b)
print("reminder:",r)
print("quotient:",q)

print("To find big & small")
def min_max(a):
    small=min(a)
    big=max(a)
    return(small,big)
print("a=[1,2,3,4,5,6,7,8,9,10]")
a=[1,2,3,4,5,6,7,8,9,10]
small,big = min_max(a)
print("smallest;",small)
print("biggest:",big)
