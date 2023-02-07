#include<stdio.h>
#include<conio.h>
int min(int,int);
void floyds(int p[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(i==j)
    p[i][j]=0;
    else
    p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
}
int min(int a,int b)
{
    if(a<b)
    return(a);
    else
    return(b);
}
void main()
{
    int p[10][10],w,n,e,u,v,i,j;;
    //clrscr();
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the number of edges:");
    scanf("%d",&e);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            p[i][j]=999;
    }
    for(i=1;i<=e;i++)
    {
        printf("Enter the end vertices of edge %d with its weight:",i);
        scanf("%d%d%d",&u,&v,&w);
        p[u][v]=w;
    }
    printf("Matrix of input data:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d",p[i][j]);
        printf("\n");
    }
    floyds(p,n);
    printf("Transitive closure:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d t",p[i][j]);
        printf("\n");
    }
    printf("The shortest paths are:");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            printf("\n <%d,%d>=%d",i,j,p[i][j]);
        }
    }
    getch();
}