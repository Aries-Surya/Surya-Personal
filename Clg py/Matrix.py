a=[[1,1,1],[2,2,2],[3,3,3]]
b=[[1,1,1],[1,1,1],[3,3,3]]
c=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(len(a)):
    for j in range(len(b)):
        c[i][j]=a[i][j]+b[j][i] #this is only for (+,-)
for i in c:
    print(i)


a=[[1,1],[1,1]]
b=[[2,2],[2,2]]
c=[[0,0],[0,0]]
for i in range(len(a)):
    for j in range(len(b)):
        for k in range(len(b)):
            c[i][j]=a[i][j]+a[i][k]*b[k][j] #this is for "*" 

for i in c:
    print(i)