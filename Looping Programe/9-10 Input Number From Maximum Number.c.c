#include<stdio.h>
#include<conio.h>
int main()
{
  int iNo=0,max=0,min=1,cnt=1;
   printf("\n================================================================\n");

  while(cnt<11)
  {
      printf("\n Enter The Number=");
      scanf("%d",&iNo);

      if(max<iNo)
      {
        max=iNo;
      }
      if(min>iNo)
      {
        min=iNo;
      }
      cnt++;
  }
  printf("\n Enter The Maximum Number Is %d And Minimum Number Is %d",max,min);
   printf("\n================================================================\n");

  getch();
  return 0;
}
