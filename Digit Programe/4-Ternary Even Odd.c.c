#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0;
  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

     printf("\n++++++++++++++ enter the number**************");
     scanf("%d",&no);
  {
     if(no==0)
     printf("\n number is neutral!!!");
  }
      printf("\n Given number %d is:%s",no,(no%2==0)?"Even":"Odd");

     printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

     getch();
     return 0;
}
