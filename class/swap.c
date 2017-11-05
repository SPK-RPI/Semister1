#include<stdio.h>
void swap(int x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}

int main(){
int a=10;
int b=20;
void swap(&a,&b);
printf("a=%d;b=%d",a,b);

   while(getchar()!="\n");
}