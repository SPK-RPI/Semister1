//#include<conio.h>
#include<stdio.h>
int a,b,c,i,d;
int add();
int add(){
    c=a+b;
    }
int main(){
printf("\nEnter two numbers:");
scanf("%d %d",&a,&b);
printf("\n1.add");
printf("\n2.sub");
printf("\n3.divide");
printf("\n4.mul");
printf("\nPlease enter an option:====>>> ");
scanf("%d",&i);
switch(i){
case 1: printf("%d",add());
break;
case 2:printf("\a");
break;
case 3:printf("\nthree");
break;
case 4:printf("\nfour");
break;
default:printf("\nfuck you");
break;
}


while(getchar()!="\n");
}
