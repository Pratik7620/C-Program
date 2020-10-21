#include<stdio.h>
#include<conio.h>
int main()
{
   int iNo=0,temp=0,ecnt=0,ocnt=0,ncnt=0,sum=0;
    printf("\n=================================================================================\n");

   printf("\n enter the number");
   scanf("%d",&iNo);
   temp=iNo;
   while(temp>0)
   {
     sum=temp%10;
     if(sum==0)
     {
       ncnt++;
     }
      else if(sum%2==0)
      {
        ecnt++;
      }
      else if(sum%2!=0)
      {
        ocnt++;
      }
       temp=temp/10;
    }
   printf("\nThe given value %d have\n %d even number\n %d odd number\n %d neutral number",iNo,ncnt,ecnt,ocnt);
    printf("\n=================================================================================\n");

   getch();
   return 0;
}
