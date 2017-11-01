#include<stdio.h>
//#include<coinio.h>
 int display(int a,int b);
int display(int a,int b){
    int c;
    c=a+b;
    return c;
}
void main(){
    int r;
    r=display(2,5);
    printf("Type fUCTION WITH ARGUMENTS AND NO RETURN VALUE");
    printf("\n\n Addition is =%d",r);
    while(getchar()!="\n");
}
