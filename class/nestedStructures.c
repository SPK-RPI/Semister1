#include<stdio.h>
//#include<conio.h>
#include<string.h>

struct employee{
int id;
char name [20];
struct Date {
    int dd;
    int mm;
    int yyyy;
}dob;
}emp1;

int main(){
    strcpy(emp1.name,"shiba");
    emp1.id=101;
  
    emp1.dob.dd=12;
    emp1.dob.mm=14;
    emp1.dob.yyyy=2017;
printf("\nEmploee id=%d",emp1.id);
printf("\nEmploee name=%s",emp1.name);
printf("\nJoning  Date=%d/%d/%d",emp1.dob.dd,emp1.dob.mm,emp1.dob.yyyy);
while(getchar()!="\n");
}