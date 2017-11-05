#include<stdio.h>
//#include<conio.h>
int factorial(unsigned int i){
    if(i<=1){
        return i;
    }
    return i*factorial(i-1);
}




int main(){
    
    int i =15;
    printf("factorial of %d is %d \n",i,factorial(i));
    

    while(getchar()!="\n");
    return 0;    
}