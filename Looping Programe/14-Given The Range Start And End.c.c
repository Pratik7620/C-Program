#include<stdio.h>
#include<conio.h>
int main()
{
  int start=0,end=0,temp=0,cnt=1;
   printf("\n=================================================================================\n");

  printf("\n Enter the range to get table:");
  scanf("%d%d",&start,&end);
  temp=start;
  if(temp>end)
  {
      printf("\n Invalid Number:");
  }
  else
  {
       while(cnt<=10)
       {
          temp=start;
          while(temp<=end)
          {
            printf("\t%d",temp*cnt);
            temp++;
          }
          printf("\n");
          cnt++;
       }
       printf("\n==============================================================================\n");
  }
  getch();
  return 0;
}
