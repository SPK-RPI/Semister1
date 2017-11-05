#include<stdio.h>
//#include<conio.h>
int main(){
  int choice;
  printf("\nEnter your choice:== ");
  scanf("%d",&choice);
  switch(choice){
      case 1:printf("\nYou Chose one....");
      break;
      case 2:printf("\nYou Chose two.......");
      break;
      case 3:printf("\nYou Chose three....");
      break;
      default:printf("\nEntered wrong choice......");
  }
    
    
    while(getchar()!="\n");
}