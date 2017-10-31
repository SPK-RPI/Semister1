#include<stdio.h>
//#include<conio.h>
void main(){
float circle,r;
int s,l,b,rect,squ;
printf("\nEnter side:==");
scanf("%d",&s);
printf("\nEnter radius:==");
scanf("%f",&r);
printf("\nEnter base and hight:");
scanf("%d%d",&l,&b);
circle=3.14*r*r;
squ=s*s;
rect=l*b;
printf("\nArea of circle =%f",circle);
printf("\nArea of square =%f",squ);
printf("\nArea of rectangle=%f",rect);

getchar();
}