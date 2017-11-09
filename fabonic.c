#include<stdio.h>
//#include<conio.h>
int main(){
int n,t1=0,t2=1,nextterm,i;
printf("\nEnter a number.: ");
scanf("\n%d",&n);
for(i=1;i<=n;i++){
printf("\t%d",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
while(getchar()!="/n");
}