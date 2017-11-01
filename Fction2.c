#include<stdio.h>
//#include<conio.h>
void display();
void main(){
    printf("Type Fuction without arguments and no return value\n");
    display();
    while(getchar()!="\n");

}
void display(){
    int a,b,c;
    a=2;
    b=3;
    c=a+b;
    printf("Addition is =%d",c);
}