#include<stdio.h>
void main()
{
    char a[50],temp;
    int len=0, i;
    printf("Enter the string: ");
    scanf("%s",&a);
    //length of the string
    while (a[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length is %d",len);
    //reverse
    for(i=0;i<len/2;i++)
    {
        temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    printf("Now the string is: %s",a);
}