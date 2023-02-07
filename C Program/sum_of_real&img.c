#include<stdio.h>
#include<conio.h>
struct complex
{
    int real;
    int img;
};
void main()
{
    complex c1,c2,c3;
    printf("Enter real and img of first complex num:");
    scanf("%d %d",&c1.real,c1.img);
    printf("Enter real and img of second complex num:");
    scanf("%d %d",&c2.real,c2.img);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("sum of the 2 complex num is:%d+%d",c3.real,c3.img);
}