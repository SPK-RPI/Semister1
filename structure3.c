#include<stdio.h>
//#include<conio.h>
#include<string.h>
struct employee{
int empid;
char name[20];
struct date{
    int dd;
    int mm;
    int yyyy;
    }doj;
}emp;

void main(){
    emp.empid=101;
    strcpy(emp.name,"shayli patil");
    emp.doj.dd=18;
    emp.doj.mm=9;
    emp.doj.yyyy=2017;
    printf("\nEmployee no=%d",emp.empid);
    printf("\nEmployee name=%s",emp.empid);
    printf("\nEmployee date of joining (dd/mm/yyyy)=%d/%d/%d",emp.doj.dd,emp.doj.mm,emp.doj.yyyy);
    printf("\nEmploy no=%d",emp.empid);
while(getchar()!="\n");
}