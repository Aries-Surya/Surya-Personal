#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char str[100];
    char name[50];
    int roll;
    fp=fopen("sp.txt","w+");
    if(fp==NULL) printf("Error This File does not exist");
    fprintf(fp,"This is ny first file handeling usind C program..!\n");
    //READ FORM KEYBOARD
    printf("Enter the name and roll no:");
    fscanf(stdin,"%s %d",&name,&roll);
    fprintf(fp,"NAME: %s \nROLL NUMBER: %d", name,roll);
    //PRINTING THE TXT IN FILE
    while (fscanf(fp,"&s",str)!=EOF)
    printf("The txt in this file is:\n%s",str);
    //fread(str,0,100,fp);
    fclose(fp);
    getch();
}