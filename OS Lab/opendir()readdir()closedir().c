#include <stdio.h> 
#include<sys/types.h> 
#include<dirent.h>
void main(int age, char *argv[])
{
    DIR *dir;
    struct dirent *rddir;
    printf("\n Listing the directory content\n");
    dir = opendir(argv[1]);
    while ((rddir = readdir(dir)) != NULL)
    {
        printf("%s\t\n", rddir->d_name);
    }
    closedir(dir);
}