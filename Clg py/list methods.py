a=[1,2,3,4,5,6,7,8]
a.append(9)
print("append:",a)

a.insert(9,10)
print("insert:",a)

b=[1,2,3,4]
a.extend(b)
print("extend:",a)

print("index:")
print(a.index(8))

print("sort:")
a.sort()
print(a)

print("reverse:")
a.reverse()
print(a)

print("pop:")
a.pop() #if there is no value last will pop or we have to give index
print (a)

print("remove:")
a.remove(10)
print (a)

print("count:")
print (a.count(3))

print("copy:")
b=a.copy()
print(b)

print("length of a:",len(a))
print("min of a:",min(a))
print("max of a:",max(a))
a.clear()
print("clear:",a)
del(a)
print("del:we deleted list a do we get error that list(a) is not defined")
print (a)