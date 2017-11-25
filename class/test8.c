#include <math.h>
#include <stdio.h>
int main(void)
{
double x = 0.0, result;
printf("\nEnter a number ==== >>");
scanf("%lf",&x);
result = sqrt(sqrt(x));
printf("The square root of %lf is %lfn", x, result);
while(getchar()!="\n");
return 0;
}