#include<stdio.h>
#include<math.h>
void main()
{
    int choice;
    float ans, x, y;
    printf("1.sin , 2.cos, 3.tan, 4.log, 5.exp, 6.sqrt, 8.exp, 7.power");
    printf("\nenter ur choice:");
    scanf("%d",&choice);
    if(choice==7){
        printf("Enter x&y :"); scanf("%f %f",&x, &y);
        ans=pow(x,y);
    }
    else if (choice<6 && choice>0)
    {
        switch (choice)
        {
        case 1:
        printf("Enter the x:"); scanf("%f",&x);
        ans=sin(x);
        break;
        case 2:
        printf("Enter the x:"); scanf("%f",&x);
        ans=cos(x);
        break;
        case 3:
        printf("Enter the x:"); scanf("%f",&x);
        ans=tan(x);
        break;
        case 4:
        printf("Enter the x:"); scanf("%f",&x);
        ans=log10(x);
        break;
        case 5:
        printf("Enter the x:"); scanf("%f",&x);
        ans=exp(x);
        break;
        case 6:
        printf("Enter the x:"); scanf("%f",&x);
        ans=sqrt(x);
        break;
        }
    }
    printf("The answer is %f",ans);
}