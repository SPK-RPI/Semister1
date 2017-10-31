#include<stdio.h>
//#include<conio.h>
int main(){
    int d;
    printf("\nEnter a number:== ");
    scanf("%d",&d);
    if(d==0){
        printf("\nEntered number is Zero.........");
    }
    if(d>0){
        printf("\nEntered number is even.......");
    }
         if(d<0){
    printf("\nEntered number is negtive.......");
    }
    while(getchar()!="\n");
    }

