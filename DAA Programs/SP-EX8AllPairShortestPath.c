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

// Enter the number of vertices:4
// Enter the number of edges:5
// Enter the end vertices of edge 1 with its weight: 1 3 2
// Enter the end vertices of edge 2 with its weight: 2 1 2
// Enter the end vertices of edge 3 with its weight: 3 2 7 
// Enter the end vertices of edge 4 with its weight: 3 4 1
// Enter the end vertices of edge 5 with its weight: 4 1 6
// Matrix of input data:9999992999
// 2999999999
// 99979991
// 6999999999
// Transitive closure:0 t9 t2 t3 t
// 2 t0 t4 t5 t
// 7 t7 t0 t1 t
// 6 t15 t8 t0 t
// The shortest paths are:
//  <1,2>=9
//  <1,3>=2
//  <1,4>=3
//  <2,1>=2
//  <2,3>=4
//  <2,4>=5
//  <3,1>=7
//  <3,2>=7
//  <3,4>=1
//  <4,1>=6
//  <4,2>=15
//  <4,3>=8