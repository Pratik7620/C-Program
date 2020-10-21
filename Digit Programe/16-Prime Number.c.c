#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0,div=0;
  printf("\n=================================================================================\n");
  printf("\n enter the number");
  scanf("%d",&no);
  div=2;
  while(div<no)
  {
  if(no%div==0)
  {
  break;
  }
  div++;
  }
  printf("\n given number %d is=%s",no,(no==div)?"prime":"not prime");
   printf("\n=================================================================================\n");

  getch();
  return 0;
}
