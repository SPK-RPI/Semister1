//#include<conio.h>
#include<stdio.h>
#include<math.h>
int i;

int main(){
   for(i=0;i<=2;i++){
       switch(i){
           case 1:printf("%d",i);
           case 2:printf("%d",i);
           default:printf("%d",i);
       }
   }
while(getchar()!="\n");
}