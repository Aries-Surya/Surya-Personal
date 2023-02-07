//Implementation of Merge Sort
#include<stdio.h>
#include<conio.h>
void quicksort(int[],int,int);
int partition(int [],int,int);
int main()
{
    printf("Implementation of Merge Sort");
    int a[20],i,n;
    //clrscr();
    printf("Enter the size of array (max is 20)");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements in the array:");
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    getch();
}
void quicksort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=partition(a,lb,ub);
        quicksort(a,lb,mid-1);
        quicksort(a,mid+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int i,p,q,t;
    p=lb+1;
    q=ub;
    i=a[lb];
    while(q>=p)
    {
        while(a[p]<i)
        p++;
        while(a[q]>i)
        q--;
        if(q>p)
        {
            t=a[p];
            a[p]=a[q];
            a[q]=t;
        }
    }
    t=a[lb];
    a[lb]=a[q];
    a[q]=t;
    return q;
}