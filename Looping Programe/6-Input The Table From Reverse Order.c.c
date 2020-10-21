#include<stdio.h>
#include<conio.h>
int main()
{
   int iNo=0,i=10;
    printf("\n=================================================================================\n");

   printf("\n Enter The Number=");
   scanf("%d",&iNo);

   if(iNo<=0)
   {
       printf("\n Invalid Number");
   }
   else
     while(i>=1)
     {
        printf("\n %d",iNo*i);
        i--;
     }
      printf("\n=================================================================================\n");

     getch();
     return 0;
}
