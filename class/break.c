#include<stdio.h>
//#include<conio.h>
void main(){

    int i;
    for(i=0;i<=15;i++){
        if(i==10)
        break;
        printf("\t%d",i);

        
    }
    while(getchar()!="\n");
}