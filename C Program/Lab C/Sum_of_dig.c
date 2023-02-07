/*Sum of Digits*/ 
#include<stdio.h> 
#include<conio.h> 
#include<process.h> 
void main() 
{ 
int n,r,sum=0; 
//clrscr(); 
printf("Enter the number:"); 
scanf("%d",&n); 
while(n >0) 
{ 
r=n%10;  
sum=sum+r; 
n=n/10; 
} 
printf("Sum of digits =%d",sum); 
//getch(); 
} 
