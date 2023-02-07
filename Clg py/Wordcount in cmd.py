from sys import argv
a=argv[0].split()
dict={}
for i in a:
    if i in dict:
        dict[i]=dict[i]+1
    else:
        dict[i]=1
print(dict)
print(len(a))