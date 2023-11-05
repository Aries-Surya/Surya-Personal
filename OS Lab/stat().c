#include<stdio.h> 
#include<sys/types.h> 
#include<sys/stat.h> 
#include<unistd.h> 
#include<fcntl.h> 
void main()
{
    int fd1, fd2, n;
    char source[30], ch[5];
    struct stat s, t, w;
    fd1 = creat("text.txt", 0644);
    printf("Enter the file to be copied\n");
    scanf("%s", source);
    fd2 = open(source, 0);
    if (fd2 == -1)
    {
        perror("file doesnot exist");
        exit(0);
    }
    while ((n = read(fd2, ch, 1)) > 0)
        write(fd1, ch, n);
    close(fd2);
    stat(source, &s);
    printf("Source file size=%d\n", s.st_size);
    fstat(fd1, &t);
    printf("Destination file size =%d\n", t.st_size);
    close(fd1);
}