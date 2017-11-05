#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<cstdio.h>
int i;
struct book{
    char book_name[20];
    int pages;
    int prices;
}book[3];



void main(){
   
    for(i=0;i<3;i++){
        printf("Enter book name== ");
        gets(book[i].book_name);
        printf("\nEnter no. of pages== ");
        scanf("%d",&book[i].pages);
        printf("\nEnter price== ");
        scanf("%d",&book[i].prices);
       
        
}
for(i=0;i<3;i++){
    printf("\n=======Book details======= ");
    printf("\nName of the book=%s",book[i].book_name);
    printf("\nNo of pages=%d",book[i].pages);
    printf("\n Price=%d",book[i].prices);
}

while(getchar()!="\n");
getchar()
}