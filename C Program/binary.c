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
    //binear
    int start=0,end=n ,mid;
    while (start<=end)
    {
        a[mid]=(start+end)/2;
        if(a[mid]==elem)
        {
            printf("The elemt is @ %d",a[mid]+1);
            break;
        }
        else
        {
            if(a[mid]>elem) end=a[mid]-1;
            else start=a[mid]+1;   
        }
    }
    if(start>end) printf("the value is not there..");
}