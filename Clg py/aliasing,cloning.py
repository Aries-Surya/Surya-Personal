print("Aliasing:")
a=[1,2,3,4]
b=a
print(a)
print(b)
a[0]=6
print(a)
print(b)

print(a==b)
print(a!=b)

print("Cloning:")
c=[6,7,8,9,10]
d=c.copy() #a=a[:] #d=c.copy()
c[0]=100
print(c)
print(d)

print(c==d)
print(c!=d)
