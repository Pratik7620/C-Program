#include<stdio.h>
#include<conio.h>
int main()
{
 int row=0,col=0;
 char ch='A';
  printf("\n=================================================================================\n");

 for(row=1;row<=5;row++)
 {
     ch='Q';
 for(col=1;col<=row;col++)
 {
   printf(" %c ",ch);


 }
 printf("\n");
}
 printf("\n=================================================================================\n");

 getch();
 return 0;
}
