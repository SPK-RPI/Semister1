#include<stdio.h>
void swapv(int,int);
void swapr(int,int );
int main(){
int a, b;
printf("\nEnter the values of a nd b =====>> ");
scanf("%d%d",&a,&b);
swapv(a,b);
printf("%d %d\n",a,b); // will display original
swapr(a,b);
printf("%d %d\n",a,b); // will display swapped
while(getchar()!="\n");
}
//########################################################
void swapv(int v1,int v2){
int temp;
temp = v1;
v1 = v2;
v2 = temp;
printf("%d %d\n",v1,v2); // will display swapped
}
//########################################################
void swapr(int v1,int v2){
int temp;
temp = v1;
v1 = v2;
v2 = temp;
printf("%d %d\n",v1,v2); // will display swapped
}
//#######################################################