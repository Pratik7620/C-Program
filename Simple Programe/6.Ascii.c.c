#include<stdio.h>
#include<conio.h>
int main()
{
   int ascii;

    printf("\n=================================================================================\n");

   for(ascii=0;ascii<=127;ascii++)
   {
   printf("the ascii valueof %d=%c\n",ascii,ascii);
   }
    printf("\n=================================================================================\n");

    getch();
    return 0;
}
