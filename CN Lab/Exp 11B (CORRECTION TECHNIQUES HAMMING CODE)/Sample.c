#include <stdio.h>
#include <conio.h>
void main()
{
    int data[7], rec[7], i, c1, c2, c3, c;
    // clrscr();
    printf("Enter a 4 bit message\n");
    scanf("%d%d%d%d", &data[0], &data[1], &data[2], &data[4]);
    data[6] = data[0] ^ data[2] ^ data[4];
    data[5] = data[0] ^ data[1] ^ data[4];
    data[3] = data[0] ^ data[1] ^ data[2];
    printf("\n The encoded bits are given below\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d", data[i]);
    }
    printf("\n Enter the received bits\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &rec[i]);
    }
    c1 = rec[6] ^ rec[0] ^ rec[2] ^ rec[4];
    c2 = rec[5] ^ rec[0] ^ rec[1] ^ rec[4];
    c3 = rec[3] ^ rec[0] ^ rec[1] ^ rec[2];
    c = c3 * 4 + c2 * 2 + c1;
    if (c == 0)
    {
        printf("\n There is no error\n");
    }
    else
    {
        printf("\n error at position %d\ncorrected message is\n", c);
        if (rec[7 - c] == 0)
        {
            rec[7 - c] = 1;
        }
        else
        {
            rec[7 - c] = 0;
        }
        for (i = 0; i < 7; i++)
        {
            printf("%d", rec[i]);
        }
    }
    // getch();
}
