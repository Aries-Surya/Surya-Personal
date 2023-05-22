#include<stdio.h>
long int factorial(int n);
int main()
{
    int n,fact;
    printf("Enter integer number:");
    scanf("%d",&n);
    fact= factorial(n);
    printf("Factorial of %d = %d",n,fact);
    return 0;
}
long int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}

// Enter integer number:5
// Factorial of 5 = 120