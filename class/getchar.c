#include<stdio.h>
//#include<conio.h>
int main(){
    //int c;
    printf("\nEnter a value:=== ");
    getchar();
    printf("\nYou entered :=== ");
    putchar(getchar());
  while(  getchar()!="\n");
    return 0;
}