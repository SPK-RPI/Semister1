#include<stdio.h>
//#include<conio.h>
int num;
void main(){
    printf("\nPlease enter a number :=== ");
    scanf("%d",num);
if(num%2==0)
printf("\nEntered number is positive %d",num);
else
{
    printf("\nEnter number is odd %d",num);
}
while(getchar()!="\n");
}