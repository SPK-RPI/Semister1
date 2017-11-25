#include <stdio.h>
int main()
{
int a[10];
int no,i;
printf("\nEnter 10 numbers in the array");
for (int i=0, i<10,i++){
scanf("%d",&a[i]);
prinf("\nEnter the number to be searched");
scanf("%d", &no);
}
for (int i=0, i<10,i++){
if ( no == a[i]){
printf("\nThe number %d is found at position %d",no, i+1);
goto abc;
}
}
printf("\nThe number %d is not found", no);
abc
while(getchar()!="\n");
}