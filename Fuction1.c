#include<stdio.h>
//#include<conio.h>
void printline();
void main(){
    printline();
    printline();
    printf("HELLO WORLD\n");
    printline();
    printline();
    while(getchar()!="\n");

}

void printline(){
    int i;
    for(i=1;i<=40;i++){
        printf("*");
    }
    printf("\n");
}