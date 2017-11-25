//#include<conio.h>
#include<stdio.h>
int main(){
int a,b,c;
printf("\nEnter three numbers====>> ");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c){
printf("\nfirst no.(%d)is the largest",a);

}
else if(b>=a&&b>=c){
printf("\nSecond no.(%d)is the largest",b);
}
else{
    printf("\nThird no.(%d)is the largest",c);

}


    while(getchar()!="\n");
}