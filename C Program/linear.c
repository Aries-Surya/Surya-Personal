#include<stdio.h>
void main()
{
    int a[100], n, i, elem;
    printf("Enter the no of elements in the list: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nenter the num to be searched:");
    scanf("%d",&elem);
    for ( i = 0; i < n; i++)
    {
        if(a[i]==elem)
        {
            printf("The element is @ %d",i+1); 
            break;
        }
    }
    if(i==n) printf("Element is not present");   
}