//#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
float x1,x2,d, a,b,c;
printf("\nEnter the coefficient of 1 === ");
scanf("%f",&a);
printf("\nEnter the coefficient of 2 ==== ");
scanf("%f",&b);
printf("\nEnter the coefficient of 3 ===== ");
scanf("%f",&c);


d=sqrt((b*b)-4*a*c);
x1=(-b+d)/2*a;
x2=(-b-d)/2*a;
printf("roots are %e   and  %e  ",x1,x2);




    while(getchar()!="\n");
}