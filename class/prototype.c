//#include<conio.h>
#include<stdio.h>
int addNumbers(int a,int b);
int main(){
    int n1,n2,sum;
    printf("Enter two numbers....== ");
    scanf("%d%d",&n1,&n2);
    sum=addNumbers(n1,n2);
   
    printf("sum of the numbers== %d",sum);
    while(getchar()!="\n");
    return 0;
}
int addNumbers(int a,int b){

    int result;
    result=a+b;
    return result;
}