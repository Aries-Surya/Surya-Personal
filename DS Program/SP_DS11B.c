//Implementation of Hashing with Separate Chaining
#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 3
struct node
{
    int data;
    struct node *next;
};
struct node *head[TABLE_SIZE]={NULL},*c,*p;

void insert(int i,int val)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next = NULL;
    if(head[i] == NULL)
        head[i] = newnode;
    else
    {
        c=head[i];
        while(c->next != NULL)
        c=c->next;
        c->next=newnode;
    }
}
void display(int i)
{
    if(head[i] == NULL)
    {
        printf("No Hash Entry");
        return;
    }
    else
    {
        for(c=head[i];c!=NULL;c=c->next)
        printf("%d->",c->data);
    }
}
int main()
{
    printf("Implementation of Hashing with Separate Chaining");
    int opt,val,i;
    while(1)
    {
        printf("\nPress \t 1. Insert\t 2. Display \t3. Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                printf("\nEnter a value to insert into hash table\n");
                scanf("%d",&val);
                i=val%TABLE_SIZE;
                insert(i,val);
                break;
            case 2: 
                for(i=0;i<TABLE_SIZE;i++)
                {
                    printf("\nEntries at index %d\n",i);
                    display(i);
                }
                break;
            case 3: exit(0);
        }
    }
}