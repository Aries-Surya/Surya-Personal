//IMPLEMENTATION OF BINARY SEARCH
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("IMPLEMENTATION OF BINARY SEARCH");
    int a[10],i,n,m,c=0,f,l,mid;
    //clrscr();
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be search: ");
    scanf("%d",&m);
    f=0,l=n-1;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(m==a[mid])
        {   c=1;
            break;}
        else if(m<a[mid])
            l=mid-1;
        else
            f=mid+1;
    }
    if(c==0)    
        printf("The number is not found.");
    else    
        printf("The number is found.");
    getch();
}
