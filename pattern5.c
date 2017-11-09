#include<stdio.h>
//#include<conio.h>
void main(){
    int r,c,s;
    //clrscr();
    for(r=1;r<=40;r++){
        for(s=40;s>=r;s--){
            printf(" ");
        }
        for(c=1;c<=r;c++){
        printf(" *");
        }
        printf("\n");
    }
    while(getchar()!="\n");
}


//        *
//       ***
//      *****
//     *******
//    ********* 