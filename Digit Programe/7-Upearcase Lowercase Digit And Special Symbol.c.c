#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
 printf("\n=================================================================================\n");

printf("\n enter the chracter");
ch=getchar();
  if(ch>'A' && ch<'Z')
  {
   printf("\n given the uppearcse");
  }
  else if(ch>'a' && ch<'z')
  {
    printf("\n given the lowercase");
  }
  else if(ch>'0' && ch<'9')
  {
      printf("\n given the digit");
  }
  else
  {
      printf("\n given the special symbol");
  }
   printf("\n=================================================================================\n");

   getch();
   return 0;

}
