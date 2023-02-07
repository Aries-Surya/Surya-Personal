#include<stdio.h>
void main()
{
    int i, j, det=0, a[3][3];
    printf("Enter the 9 elements in the 3*3 matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
            if (j == 3 - 1) printf("\n"); 
                
        }
    }
    //determinant
    for(i=0;i<3;i++){
        det=det+(a[0][i]*((a[1][(i+1)%3]*a[2][(i+2)%3])-(a[1][(i+2)%3]*a[2][(i+1)%3])));
    }
    printf("The determinant of this matrix is %d",det);
}