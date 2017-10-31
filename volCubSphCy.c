#include<stdio.h>
#include<unistd.h>
//#include<conio.h>
void main(){
int s,r,h,cub;
float cy,sp;
printf("\nEnter side of the square:==");
scanf("%d",&s);
printf("\nEnter radius of the sphere:==");
scanf("%f",&r);
printf("\nEnter hight of the cylinder:==");
scanf("%f",&h);
sp=4/3*(3.14*r*r*r);
cub=s*s*s;
cy=3.14*r*r*h;
printf("/nVolume of square:==%d",cub);
printf("/nVolume of sphere:==%f",sp);
printf("/nVolume of cylinder:==%f",cy);
pause();
    //getch();
    return 0;
}