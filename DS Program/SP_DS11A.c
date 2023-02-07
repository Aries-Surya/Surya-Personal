//Implementation of Hashing with open addressing (Collision Handling By Linear Probing )
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int main()
{ printf("Implementation of Hashing with open addressing (Collision Handling By Linear Probing )");
    int a[MAX],num,key,i;
    char ans;
    int create(int);
    void linear_prob(int [],int,int),display(int []);
    //clrscr();
    printf("\n Collision Handling By Linaer Probling");
    for(i=0;i<MAX;i++)
    a[i]=-1;
    do
    {
        printf("\n Enter the Number ");
        scanf("%d",&num);
        key=create(num);
        linear_prob(a,key,num);
        printf("\n Do U Wish to Contiue?(Y/N");
        ans=getch();
    }while(ans=='y');
    display(a);
    getch();
}
int create(int num)
{ 
    int key;
    key=num%10;
    return key;
}
void linear_prob(int a[MAX],int key,int num) 
{ 
    int flag,i,count=0;
    void display(int a[]);
    flag=0;
    if(a[key]==-1)
        a[key]=num;
    else
    {
        i=0;
        while(i<MAX)
        { 
            if(a[i]!=-1)
            count++;
            i++; 
        } 
        if(count==MAX)
        {
            printf("\n\n Hash Table is Fu;;");
            display(a);
            getch();
            exit(1);
        }
        for(i=key+1;i<MAX;i++)
        if(a[i]==-1) 
        { 
            a[i]=num; 
            flag=1;
            break; 
        } 
        for(i=0;i<key&&flag==0;i++) 
        if(a[i]==-1) 
        { 
            a[i]=num;
            flag=1;
            break;
        }
    }
}
void display(int a[MAX])
{ 
    int i;
    printf("\n\n The Hash Table is....\n");
    for(i=0;i<MAX;i++)
    printf("\n %d %d",i,a[i]);
}
