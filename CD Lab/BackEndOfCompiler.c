#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
    int label[20];
int no = 0;
int main()
{
    FILE *fp1, *fp2;
    int check_label(int n);
    char fname[10], op[10], ch;
    char operand1[8], operand2[8], result[8];
    int i = 0;
    clrscr();
    printf("\n\nEnter filename of the intermediate code:");
    scanf("%s", &fname);
    fp1 = fopen(fname, "r");
    fp2 = fopen("target.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("\nError Opening the File.");
        getch();
        exit(0);
    }
    while (!feof(fp1))
    {
        fprintf(fp2, "\n");
        fscanf(fp1, "%s", op);
        i++;
        if (check_label(i))
        {
            fprintf(fp2, "\nlabel#%d:", i);
        }
        if (strcmp(op, "print") == 0)
        {
            fscanf(fp1, "%s", result);
            fprintf(fp2, "\n\tOUT%s", result);
        }
        if (strcmp(op, "goto") == 0)
        {
            fscanf(fp1, "%s", operand2);
            fprintf(fp2, "\n\t JMP labe#%s", operand2);
            label[no++] = atoi(operand2);
        }
        if (strcmp(op, "[]=") == 0)
        {
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\tSTORE%s[%s],%s", operand1, operand2, result);
        }
        if (strcmp(op, "uminus") == 0)
        {
            fscanf(fp1, "%s%s", operand1, result);
            fprintf(fp2, "\n\tMOV R1,-%s", operand1);
            fprintf(fp2, "\n\tMOV %s,R1", result);
        }
        switch (op[0])
        {
        case '*':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t MOV R0,%s", operand1);
            fprintf(fp2, "\n\t MOV R1,%s", operand2);
            fprintf(fp2, "\n\t MUL R0 R1");
            fprintf(fp2, "\n\t MOV %s,R0", result);
            break;
        case '+':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t MOV R0,%s", operand1);
            fprintf(fp2, "\n\t MOV R1,%s", operand2);
            fprintf(fp2, "\n\t ADD R0 R1");
            fprintf(fp2, "\n\t MOV %s,R0", result);
            break;
        case '-':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t MOV R0,%s", operand1);
            fprintf(fp2, "\n\t MOV R1,%s", operand2);
            fprintf(fp2, "\n\t SUB R0 R1");
            fprintf(fp2, "\n\t MOV %s,R0", result);
            break;
        case '/':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t MOV R0,%s", operand1);
            fprintf(fp2, "\n\t MOV R1,%s", operand2);
            fprintf(fp2, "\n\t DIV R0 R1");
            fprintf(fp2, "\n\t MOV %s,R0", result);
            break;
        case '%':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t MOV R0,%s", operand1);
            fprintf(fp2, "\n\t MOV R1,%s", operand2);
            fprintf(fp2, "\n\t DIV R0 R1");
            fprintf(fp2, "\n\t MOV %s,R0", result);
            break;
        case '=':
            fscanf(fp1, "%s%s", operand1, result);
            fprintf(fp2, "\n\t MOV %s,%s", result, operand1);
            break;
        case '>':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t JGT %s,%s label#%s", operand1, operand2, result);
            label[no++] = atoi(result);
            break;
        case '<':
            fscanf(fp1, "%s%s%s", operand1, operand2, result);
            fprintf(fp2, "\n\t JLT%s,%s label#%s", operand1, operand2, result);
            label[no++] = atoi(result);
            break;
        }
    }
    fclose(fp2);
    fclose(fp1);
    fp2 = fopen("target.txt", "r");
    if (fp2 == NULL)
    {
        printf("\nError Opening the File");
        getch();
        exit(0);
    }
    do
    {
        ch = fgetc(fp2);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(fp2);
    getch();
    return 0;
}
int check_label(int k)
{
    int i;
    for (i = 0; i < no; i++)
    {
        if (k == label[i])
            return 1;
    }
    return 0;
}

// INPUT: (IN.TXT)
// []=a i 1
// * x y t1
// + t1 z t2
// > t2 num 6
// goto 8
// + x x x
// + y y y
// print x
// = y z
// print z

// OUTPUT: (TARGET.TXT)
// MOV R0,x
// MOV R1,y
// MUL R0 R1
// MOV t1,R0
// MOV R0,t1
// MOV R1,z
// ADD R0 R1
// MOV t2,R0
// JGT t2,num label#6
// JMP labe#8
// label#8:
// MOV R0,x
// MOV R1,x
// ADD R0 R1
// MOV x,R0
// MOV R0,y
// MOV R1,y
// ADD R0 R1
// MOV y,R0
// OUTx
// MOV z,y
// OUTz