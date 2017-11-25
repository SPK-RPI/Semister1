//#include<conio.h>
#include<stdio.h>
#include<math.h>
int i,n,sum;

int main(){
    printf("\nenter no. of terms ==== >> ");
    scanf("%d",&n);
for(i=0;i<=n;i++){

sum=sum+(i*i);
printf("\ni incriment to %d",i);
}
printf("\n  %d ",sum);
while(getchar()!="\n");
}