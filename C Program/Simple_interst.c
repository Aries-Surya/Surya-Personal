#include<stdio.h>
int main()
{
    int p,n,r;
    printf("Enter the principal amount:");
    scanf("%d",&p);
    printf("Enter the Months:");
    scanf("%d",&n);
    printf("Enter the Rate of interest:");
    scanf("%d",&r);
    int si =p*n*r/100;
    printf("The simple Interest is %d",si);
    return(0);
}