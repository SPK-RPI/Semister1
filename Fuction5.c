#include<stdio.h>
//#include<conio.h>
int display(void);
int main(){
int r;
r=display();
printf("Type Fuction with no arguments but a return value");
printf("\n\n Addition is =%d",r);
while(getchar()!="\n");
}
int display(void){
    int a=2,b=5,c;
    c=a+b;
    return c;
}