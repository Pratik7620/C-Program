#include<stdio.h>
#include<conio.h>
int main()
{
 int row=0,col=0;

printf("\n=======================================================\n");
 for(row=1;row<=5;row++)
 {

 for(col=1;col<=5;col++)
 {
if(row<=col)

   printf(" * ");

 }
 printf("\n");
}
printf("\n=======================================================\n");
 getch();
 return 0;
}
