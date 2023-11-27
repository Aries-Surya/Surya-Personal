#include <stdio.h> 
#include<unistd.h> 
void main()
{
    printf("\n exec system call");
    printf("displaying the date");
    execlp("/bin/date", "date", 0);
}
