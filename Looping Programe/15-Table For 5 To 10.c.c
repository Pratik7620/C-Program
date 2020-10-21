#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=1,c=0;

    printf("\n\t\t\t*************TABLE FROM 1 TO 10***********************");
    printf("\n=============================================================\n");
    while(b<=10)
    {
       c=a;
       while(c<=10)
       {
          printf("\t%d",c*b);
          c++;
       }
       printf("\n");
       b++;
    }
    printf("\n================================================================\n");
    getch();
    return 0;
}
