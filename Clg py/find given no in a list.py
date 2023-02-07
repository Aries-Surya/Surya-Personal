lis = [2,88,56,43,23,1,-2]

no=43

i=0
equal=lis[0]
while i<len(lis):
    if lis[i]==no:
        equal = lis[i]
        break
    i=i+1
else:
    equal="Not found :("

print(equal, "is present")
