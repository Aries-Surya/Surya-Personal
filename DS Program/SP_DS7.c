//Implementation of Heaps Using Priority Queues
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node
{
    int priority;
    int info;
    struct node *next;
}*start=NULL,*q,*temp,*new;
typedef struct node N;
int main()
{
    printf("Implementation of Heaps Using Priority Queues");
    int ch;
    //clrscr();
    do
    {
        printf("\n1.INSERTION\t2.DELETION\t3.DISPLAY \t4.EXIT:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:del();
            break;
            case 3:display();
            break;
            case 4:
            break;
        }
    }while(ch<4);
}
void insert()
{
    int item,itprio;
    new=(N*)malloc(sizeof(N));
    printf("ENTER THE ELEMENT TO BE INSERTED:\t");
    scanf("%d",&item);
    printf("ENTER ITS PRIORITY :\t");
    scanf("%d",&itprio);
    new->info=item;
    new->priority=itprio;
    new->next=NULL;
    if(start==NULL )
    {
        //new->next=start;
        start=new;
    }
    else if(start!=NULL&&itprio<=start->priority)
    {
        new->next=start;
        start=new;
    }
    else
    {
        q=start;
        while(q->next!= NULL && q->next->priority<=itprio)
        q=q->next;
        new->next=q->next;
        q->next=new;
    }
}
void del()
{
    if(start==NULL)
    {
        printf("\nQUEUE UNDERFLOW\n");
    }
    else
    {
        new=start;
        printf("\nDELETED ITEM IS %d\n",new->info);
        start=start->next;
        free(new);
    }
}
void display()
{
    temp=start;
    if(start==NULL)
        printf("QUEUE IS EMPTY\n");
    else
    {
        printf("QUEUE IS:\n");
        if(temp!=NULL)
        for(temp=start;temp!=NULL;temp=temp->next)
            printf("\n%d priority =%d\n",temp->info,temp->priority);
    }
}
