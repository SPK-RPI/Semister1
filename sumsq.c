#include<stdio.h>
//#include<conio.h>
void main(){
int sum,i,num;
sum=0;
printf("enter a no.");
scanf("\n%d",&num);
for(i=1;i<=num;i++){
sum=sum+(i*i);
}
printf("sum=%d",sum);
while(getchar()!="\n");
}