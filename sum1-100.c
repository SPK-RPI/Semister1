//#include<conio.h>
#include<stdio.h>
int i,sum;
int main(){
for(i=0;i<=100;i++){
   sum=sum+i;
   printf(" %d +",i);
}

printf(" ==%d",sum);
   while(getchar()!="\n");
}