#include<stdio.h>
int main()
{
    int n,c,k;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for (k=0;k<=n;k++)
    {
        for(c=0;c<=n-k;c++)
            printf(" ");
        for (c=0;c<=k-1;c++)
            printf(" *");
            printf("\n");
    }
    for(k=1;k<=n-1;k++)
    {
        for(c=0;c<=k;c++)
            printf(" ");
        for(c=0;c<=(n-k)-1;c++)
            printf(" *");
            printf("\n");
    }
    return 0;
}
