#include<stdio.h>
#include<math.h>
int main()
{
float p,i;
double f;
int n;
printf("\nenter values for i, p and n" );
scanf ("%f%f%d",&i,&p,&n);
f = p* pow( 1+i,n);
printf("\nthe out is %lf",f);
while(getchar()!="\n");
}