#include <unistd.h>
#include<stdio.h>
//#include<conio.h>
void main(){
float circle,r;
float s,l,b,rec,squ;
printf("\nEnter side:==");
scanf("%f",&s);
printf("\nEnter radius:==");
scanf("%f",&r);
printf("\nEnter base:");
scanf("%f",&b);
printf("\nEnter hight:");
scanf("%f",&l);
circle=3.14*r*r;
squ=s*s;
rec=b*l;
printf("\nArea of circle =%f",circle);
printf("\nArea of square =%f",squ);
printf("\nArea of rectangle =%f",rec);
pause();
}