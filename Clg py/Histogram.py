def histo(a):
    for i in a:
        sum=''
        while(i>0):
            sum+='#'
            i=i-1
        print(sum)
a=[1,2,3,4,5,6,7,8,9,0]
histo(a)
