#include<stdio.h>
#include<conio.h>
int main()
{
 int iNo=0,sum=0,temp=0,rev=0;
 printf("\n=======================================================================\n");
 printf("\n enter any number");
 scanf("%d",&iNo);

 temp=iNo;
 while(temp>0)
 {
   sum=temp%10;
   rev=(rev*10)+sum;
   temp=temp/10;
 }
 if(rev==iNo)
 {
     printf("\n number is pailndron");
 }
 else
 {
     printf("\n number is not pailndron");
 }
  printf("\n=================================================================================\n");

 getch();
 return 0;
}
