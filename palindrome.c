#include<stdio.h>
//#include<conio.h>
int main(){
int num,sum,rem,temp;
sum=0;
printf("Enter a number:==");
scanf("\n%d",&num);
temp=num;
while(num!=0){
    rem=num%10;
    sum=sum*10+rem;
    num=num/10;
}
printf("\nOriginal no.=%d",temp);
printf("\nReverse no.%d",sum);
if(temp==sum){
    printf("\nNumber is a palindrome.");
}
else{
    printf("\nNumber is not a palindrome.");
}
while(getchar()!="\n");
}