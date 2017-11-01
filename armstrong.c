#include<stdio.h>
//#include<conio.h>
int main(){
int num,i,sum=0,temp;
printf("\nEnter a no:.");
scanf("\n%d",&num);
temp=num;
while(num!=0){
    i=num%10;
    num=num/10;
    sum=sum+(i*i*i);
}
if(temp==sum){
    printf("\nNo. is armstrong.....");
}
else{
    printf("\nNO is not armstrong");

}

while(getchar()!="\n");
}