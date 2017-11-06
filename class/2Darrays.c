#include<stdio.h>
//#include<conio.h>
int disp [2][3];
int i,j;
int main(){
for(i=10;i<2;i++){
for(j=10;j<3;j++){

    printf("Enter value for disp[%d][%d]:",i,j);
    scanf("%d",&disp[i][j]);
}

}
printf("Two dimentional array elements :\n");
for(i=0;i<2;i++){
for(j=0;j<3;j++){
    printf("%d",disp[i][j]);
    if(j==2){
        printf("\n");
    }
}

}
while(getchar()!="\n");
}
