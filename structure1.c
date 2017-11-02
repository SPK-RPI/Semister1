#include<stdio.h>
//#include<conio.h>
struct stdent
{
    int rollno;
    char *name;
    float percentage;
}stud1;
void main(){
    stud1.name="shiba";
stud1.rollno=101;
stud1.percentage=67.5;
printf("\nRollNo=%d",stud1.rollno);
printf("\nName=%s",stud1.name);
printf("\nPercentage=%f",stud1.percentage);
while(getchar());
}