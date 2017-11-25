#include <stdio.h>
#define area length * width
#define sqarea length*length
int main( )
{
int length, width;
printf("length =");
scanf("%d", &length);
printf("width = ");
scanf("%d",&width);
printf( "\n area of rectangle = %d",area);
printf( "\n area of square = %d",sqarea);
while(getchar()!="\n");
}