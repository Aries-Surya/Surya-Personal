def circulate (L,n):
    print ("Circulating elements in the list")
    for i in range(0,n):
        val=L.pop(0)
        L.append(val)
        print(L)
L=[]
n=int(input("Enter the size of the list:"))
for i in range (0,n):
    val=int(input("Enter the val:"))
    L.append(val)
circulate(L,n)

#short method
a=list(input("Enter the list:"))
print(a)
for i in range(1,len(a),1):
    print(a[i:]+a[:i])