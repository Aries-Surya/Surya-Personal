#include <stdio.h>
void main()
{
    int n, i, flag;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number", n);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d is a prime number", n);
}
