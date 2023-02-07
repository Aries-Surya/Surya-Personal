def binary(A,val):
    first=0
    last=len(A)-1
    found=False
    while first<=last and not found:
        mid=(first+last)//2
        if A[mid]==val:
            print ("Value at position:",(mid+1))
            found=True
            break
        else:
            if val<A[mid]:
                last=mid-1
            else:
                first=mid+1
    if(found!=True):
        print("Value not present.")
A=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
binary(A,1) 

# easy method
# a=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
# print("Value at position:",a.index(1))
