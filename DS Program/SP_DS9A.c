//IMPLEMENTATION OF Linear search
#include<stdio.h>
#include<conio.h>
int main()
{   
    printf("IMPLEMENTATION OF Linear search");
    int a[10],i,n,m,c=0;
    //clrscr();
    printf("\nEnter the size of an array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: ");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the number to be search: ");
    scanf("%d",&m);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==m)
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("The number is not in the list");
    else
        printf("The number is found");
        printf("%d",a[i]);
    getch();
}