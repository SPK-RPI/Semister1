#include<stdio.h>
#include<string.h>
int i;
void main(){
    for(i=0;i<=15;i++){
        if(i==6)
        break;
    printf("\nThis is a test %d",i);
    }
    while(getchar()!="\n");
}