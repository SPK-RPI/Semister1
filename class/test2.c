//#include<conio.h>
#include<stdio.h>
int main(){
int a,b,c;
printf("\nEnter three numbers====>> ");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
    if(a>c){
        printf("%d",a);
    }
}
    else if (b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }


    while(getchar()!="\n");
}