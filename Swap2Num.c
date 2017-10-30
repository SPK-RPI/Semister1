#include<stdio.h>
//#include<conio.h>
void main(){
    int num1,num2;
    printf("\nEnter two numbers:==");
    scanf("%d%d",&num1,&num2);
    printf("\nBefore Swap:==");
    printf("\n Num1=%d\tNum2=%d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n\n After Swap:");
    printf("\nNum1=%d\tNum2=%d",num1,num2);
    getchar();
}