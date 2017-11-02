#include<stdio.h>
//#include<conio.h>
struct Book_info{
    char book_name[30];
    int pages;
    int prices;
}book[3];
void main(){

    int i;
    printf("\nEnter book deteails:");
    for(i=0;i<3;i++){
        printf("\nEnter book name :");
        scanf("%s",&book[i].book_name);
        printf("Enter no of page:");
        scanf("%d",&book[i].pages);
        printf("Enter price: ");
        scanf("%d",&book[i].prices);
        
    }
    printf("========== Book details ========");
    for(i=0;i<3;i++){
        printf("\nBook name =%s",book[i].book_name);
        printf("\nNo of pages=%d",book[i].pages);
        printf("\nPrice =%d",book[i].prices);
        
    }
    while(getchar()!="\n");
}