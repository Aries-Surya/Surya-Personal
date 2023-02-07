#include<stdio.h>
struct student
{
int sno;
char sname[30];
float marks;
};
void main ()
{
struct student s;
struct student *st;
printf("enter sno, sname, marks:");
scanf ("%d %s %f", & s.sno, &s.sname, &s. marks);
st = &s;
printf ("details of the student are:");
printf ("Number = %d\n", st ->sno);
printf ("name = %s\n", st->sname);
printf ("marks =%f\n", st ->marks);
//getch ( );
}