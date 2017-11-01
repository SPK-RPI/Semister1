#include<stdio.h>
//#include<conio.h>
void main(){
    int a[100],num,max,c;
    printf("Enter no of elements in array:");
    scanf("%d",&num);
    for (c=0;c<num;c++){
        scanf("%d",&a[c]);
            }
            max=a[0];
            for(c=1;c<num;c++){
                if (a[c]>max){
                    max=a[c];
                }
            }
            printf("\nLargest number =%d",max);
            
    while(getchar()!="\n");
}