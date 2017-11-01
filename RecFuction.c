#include<stdio.h>
//#include<conio.h>
int fact(int num);
void main(){
    int num;
    printf("Enter a posittive number");
    scanf("\n%d",&num);
    printf("\n Factorial of %d is %d",num,fact(num));
    while(getchar()!="\n");
}
int fact(int num){
    if (num>=1)
    return num*fact(num-1);
    else
    return 1;
}