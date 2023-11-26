#include <stdio.h> 
#include<stdlib.h>
#include<string.h> 
void main()
{
    FILE *fp;
    char c[100], pat[10];
    int l, i, j = 0, count = 0, len, k, flag = 0;
    printf("\n enter the pattern: ");
    scanf("%s", pat);
    len = strlen(pat);
    fp = fopen("nn.txt", "r");
    while (!feof(fp))
    {
        fscanf(fp, "%s", c);
        l = strlen(c);
        count++;
        for (i = 0; i < count; i++)
        {
            if (c[i] == pat[j])
            {
                flag = 0;
                for (k = 1; k < i; k++)
                {
                    if (c[i + k] != pat[k])
                        flag = 1;
                }
                if (flag == 0)
                    printf("\n the pattern %s is present in word %d", pat, count);
            }
        }
    }
}
