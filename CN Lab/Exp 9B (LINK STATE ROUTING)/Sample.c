#include <stdio.h>
void main()
{
    int n, a[10][10], i, j, k;
    // clrscr();
    printf("\n ENTER THE NO.OF NODES: ");
    scanf("%d", &n);
    printf("\n ENTER THE MATRIX ELEMENTS: ");
    for (i = 0; i < n; i++)
    {
        printf("\nENTER THE DISTANCE FOR NODE:%d\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("STATE STATE PACKETS FOR NODE:%d\n", i + 1);
        printf("\n NODE\tDISTANCE\n");
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0 && a[i][j] != -1)
            {
                printf("%d\t%d\n", j + 1, a[i][j]);
            }
        }
        printf("\n\n");
    }
    // getch();
}
