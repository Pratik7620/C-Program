#include<stdio.h>
#include<conio.h>
int main()
{
      int No;
      printf("\n======================================================================\n");

      printf("\n Enter the number");
      scanf("%d",&No);

      if(No%5==0 && No%7==0)
      {
        printf("\n Given number is divisible by both 5 & 7");
      }
     else if(No%5==0)
      {
        printf("\n Given number is divisible by 5");
      }
      else if(No%7==0)
      {
        printf("\n Given number is divisible by 7");
      }
      else
      {
        printf("\n Given number is not divisible by both 5 & 7");
      }
        printf("\n==========================================================================\n");

        getch();
        return 0;
}

