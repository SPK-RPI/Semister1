#include<stdio.h>
//#include<conio.h>
void main(){
    int a[10][10],b[10][10];
    addm[10][10],subm[10][10];
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
    printf("\n Matrix  A :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            addm[i][j]=a[i][j]+b[i][j];
            subm[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\nAddition of matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",addm[i][j]);
        }
        printf("\n");
    }
    printf("\nSubstraction of matrix is :\n");
    for(i=0;j<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",subm[i][j]);

        }
        printf("\n");
    }
    while(getchar()!="\n");
}