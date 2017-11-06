#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main(){

char str[50];
int len;
strcpy(str,"this is a test");
len=strlen(str);//computes the lenghth of the staring str up to but not including the terminating null charector.
printf("\nLength of | %s | is | %d |\n",str,len);


while(getchar()!="\n");
}