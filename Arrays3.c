
#include<stdio.h>
//#include<conio.h>
void main(){
    int a[10][10],b[10][10],
    mulm[10][10];
    int c,r,i,j,k;
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("\nEnter value for matrix A== ");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter values for matrix B== ");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Matrix  A :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
 }
    
 for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mulm[i][j]=0;
        for(k=0;k<c;k++){
            mulm[i][j]=mulm[i][j]+a[i][j]*b[i][j];
        }
    }
    }

    printf("\nMultiplication of matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",mulm[i][j]);
        }
        printf("\n");
    }
   
    
    while(getchar()!="\n");
}