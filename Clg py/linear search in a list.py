def linear (a,val):
    for i in range(len(a)):
        if(a[i]==val):
            print ("The given no is present at :",(i+1))
            return
    print ("Element not present.!")

a=[5,1,2,9,0,6,3,8]
linear (a,9)
