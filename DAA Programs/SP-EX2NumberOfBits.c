#include<stdio.h>
int countBit(int);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Number of bits=%d",countBit(num));
    return 0;
}
int countBit(int n)
{
    int count =0,i;
    if(n==0)
    return 0;
    for (i=0;i<32;i++)
    {
        if(((1<<i))&n)
        count=i;
    }
    return ++count;
}

// Enter a number 20
// Number of bits=5