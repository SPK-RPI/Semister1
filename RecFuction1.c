#include<stdio.h>
//#include<conio.h>
int addnumber(int num);
void main(){
    int num;
    printf("\nEnter a positive number:==");
    scanf("\n %d",&num);
    printf("\n sum is =%d",addnumber(num));
    while(getchar()!="\n");
}
int addnumber(int num){
    if(num!=0)
    return num+addnumber(num-1);
    else
    return 0;
}