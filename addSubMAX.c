#include<stdio.h>
//#include<conio.h>
void main(){
    int a[10][10],b[10][10];
    int c,r,i,j,k;
    printf("Enter rows and columns");
    scanf("%d%d",&r,&c);
    printf("\nEnter value for matrix A ");
    for(i=0;i<r,i++){
        for (j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of the matrix B");
    for(i=0;i<r,i++){
        for (j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
}