n=int(input("Enter the number"))
# for i in range(n,0,-1):
#     for j in range(i):
#         if j==0 or i==j or i==n-1:
#             print("*",end=" ")
#         else:
#             print(" ", end=" ")
#     print(" ")
    
for i in range(n+1,0,-1):
    print("* "*i,end=" ")
    print(" ")