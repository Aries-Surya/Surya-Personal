#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int i,n,I,pos;
//clrscr();
puts("enter the strings:");
gets(str);
printf("enter the position where the character are to be deleted:");
scanf("%d",&pos);
printf("enter the number of character to be deleted:");
scanf("%d",&n);
I=strlen(str);
for(i=pos+n;i<I;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("the strings is %s",str);
getch();
}