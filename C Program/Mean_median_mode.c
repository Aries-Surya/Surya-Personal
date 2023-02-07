#include<stdio.h>
void main()
{
    int a[]={1,3,3,6,7,8,9},i;
    int ele=7,total,mean;
    for(i=0;i<ele;i++){
        total+=a[i];
        mean=total/ele;
    }
printf("The mean value:%d",mean);

    int median,cen,mid;
    if(ele % 2 == 0)
    mid=a[10]/2;
    else
    mid=a[3];
printf("\nThe median value:%d",mid);   

    int big,sma,temp,mode;
    for(i=0;i<ele;i++){
        for(int j=0;j<ele;j++){
            if(a[i]>a[j])
            {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
    }
    for(i=0;i<ele;i++){
        for(int j=0;j<ele;j++){
            mode=0;
            if(a[i]=a[j])
            mode++;
        }}
printf("\nThe mode value:%d",mode);
}}