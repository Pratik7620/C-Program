#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
 printf("\n=================================================================================\n");

printf("\n enter the chracter");
scanf("%c",&ch);
switch(ch)

  {
   case 'a':
   case 'A':
           printf("Welcome");
           break;

   case 'b':
   case 'B':
           printf("Good Bye");
           break;

   case 'c':
   case 'C':
           printf("Have a nice day");
           break;

   case 'd':
   case 'D':
           printf("Good Day");
           break;

   Default:
           printf("invalid chracter");
  }
   printf("\n=================================================================================\n");

     getch();
     return 0;
}
