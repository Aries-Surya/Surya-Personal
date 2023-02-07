#simple method
lis = [2,88,56,43,23,1,-2]
print("Minimum number:",min(lis))

#simple method
lis = [2,88,56,43,23,1,-2]
print("Maximum number:",max(lis))

#breaf method

lis = [2,88,56,43,23,1,-2]

i=0

Minimum = lis[0]

while i< len(lis):
    if Minimum > lis[i]:
        Minimum = lis[i]
    i=i+1

print("Minimum number:",Minimum)

#breaf method

lis = [2,88,56,43,23,1,-2]

i=0

maximum = lis[0]

while i< len(lis):

    if maximum < lis[i]:
        maximum = lis[i]
    i=i+1

print ("Maximum number:",maximum)
