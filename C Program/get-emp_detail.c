#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int ID;
    char Name[100];
    int age;
    float salary;
};
void search(struct employee e,int FID)
{
    if(e.ID==FID)
    {
        printf("Employee details:\n");
        printf("ID: %d",e.ID);
        printf("Name: %s",e.Name);
        printf("age: %d",e.age);
        printf("Salary: %d",e.salary);
    }
}
void main()
{
    struct employee *e;
    int n,i,FID;
    printf("Enter the number of emp:");
    scanf("%d",&n);
    e= (struct employee*)malloc(sizeof(struct employee)*n);
    printf("Enter the employee details:");
    for(i=0;i<n;i++)
    {
        printf("Enter the name:");
        scanf("%s",&e->Name);
        printf("Enter the age:");
        scanf("%d",e->age);
        printf("Enter the salary:");
        scanf("%f",e->salary);
        printf("Enter ID:");
        scanf("%d",e->ID);
    }
    printf("Enter the ID to be searched:");
    scanf("%d",FID);
    int flag=0;
    for(i=0;i<n;i++)
    {
        search(e[i],FID);
        flag=1; 
        break;
    }
    if(flag==0) printf("Invalid user ID..");
}