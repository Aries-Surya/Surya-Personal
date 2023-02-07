a=[2,3,4,5,6,7,8,9,10]
print(a)

print("indexing",a[1],a[-2])

print("slicing",a[0:4],a[0:-3])

b=[20,30,3]
print("concatenation",a+b)

print("repetition",b*5)

a[3]=200
print("updating a[3]=200",a)

print("membership")
print(5 in a,100 in a)

print("comparison")
print(a==b,a!=b)
