#include<stdio.h>
//#include<conio.h>
void main(){
    int num;
    printf("enter a no:==");
    scanf("%d",&num);
    if(num%2==0){
        printf("\n%d NO. is even",num);
    }
    else{
        printf("\n%d NO. is odd",num);
    }
    while(getchar()!="\n");
}