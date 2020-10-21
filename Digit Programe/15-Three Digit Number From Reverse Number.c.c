#include<stdio.h>
#include<conio.h>
int main()
{
 int iNo=0,temp=0,dig=0,sum=0,rev=0;
  printf("\n=================================================================\n");
 printf("\n ****************Enter the Number=************************");
 scanf("%d",&iNo);

 temp=iNo;
 while(temp>0)
 {
      temp=temp/10;
      dig++;
 }
 if(dig<3 || dig>3)
 {
       printf("\n Invalid Number");
 }
 else
 {
        temp=iNo;
        while(temp>0)
        {
            sum=temp%10;
            rev=(rev*10)+sum;
            temp=temp/10;
        }
        printf("\n Reverse Number Of %d Is=%d",iNo,rev);
 }
  printf("\n=================================================================\n");
 getch();
 return 0;
}
