#include <stdio.h> 
#include<unistd.h> 
void main()
{
    int i, pid;
    pid = fork();
    if (pid==-1)
    {
        perror("fork failed");
        exit(0);
    }
    else if(pid==0)
    {
        printf("\n Childprocessstarts");
        for(i = 0; i < 5; i++)
        {
            printf("\n Child process % d is called", i);
        }
        printf("\n Child process ends");
    }
    else
    {
        wait(0);
        printf("\n Parent process ends");
    }
    exit(0);
}