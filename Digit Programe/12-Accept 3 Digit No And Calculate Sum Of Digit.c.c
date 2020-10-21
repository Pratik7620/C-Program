#include<stdio.h>
#include<conio.h>
int main()
{
   int iNo=0,temp=0,dig=0,num=0,sum=0;
    printf("\n=================================================================================\n");

   printf("\n enter the number");
   scanf("%d",&iNo);
   temp=iNo;
   while(temp>0)
   {
       temp=temp/10;
       dig++;
   }
       if(dig<3 || dig>3)
   {

       printf("\n invalid number");
   }
      else
   {

      temp=iNo;
      while(temp>0)
      {
        sum+=temp%10;
        temp=temp/10;
      }
   printf("\n the sum digit of %d is=%d",iNo,sum);
   }
    printf("\n=================================================================================\n");

   getch();

   return 0;
}
