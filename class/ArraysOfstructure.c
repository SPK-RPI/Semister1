#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<cstdio.h>
int i;
struct book{
    char book_name[20];
    int pages;
    int pages;
}book[3];



void main(){
   
    for(i=0;i<3;i++){
        printf("\nEnter book name===");
        gets(book[i].book_name);
        printf("\nEnter no. of pages");
        scanf("%d",&book[i].pages);
        printf("\nEnter price");
        scanf("");
        printf("\nBook details");
    }

}
