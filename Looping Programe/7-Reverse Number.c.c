#include<stdio.h>
#include<conio.h>
int main()
{
 int iNo=0,sum=0,temp=0,rev=0;
 printf("\n================================================================================\n");
 printf("\n enter any number");
 scanf("%d",&iNo);

 temp=iNo;
 while(temp>0)
 {
   sum=temp%10;
   rev=(rev*10)+sum;
   temp=temp/10;
 }
   printf("\n revese number %d is=%d",iNo,rev);
    printf("\n=================================================================================\n");

 getch();
 return 0;
}
