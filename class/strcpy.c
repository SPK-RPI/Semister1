//#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
char str0[10]="awesome";
char str1[10]="is";
char str2[10]="me";
strcpy(str0,str1);//this fuction copies the string pointed by source to the charector arrays destination.this fuction returns charector arrays destination. 
strcpy(str2,"well");
puts(str0);
//puts(str1);
    while(getchar()!="\n");
}