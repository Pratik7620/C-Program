#include<stdio.h>
#include<conio.h>
int main()
{
 int iNo=0,sum=0,cnt=1;
 printf("\n=====================================\n");

 while(cnt<11)
 {
  printf("\n Enter The Number=");
  scanf("%d",&iNo);
  sum+=iNo;
  cnt++;
 }
 printf("\n Addition Of Inputed Numbers Is=%d",sum);
 printf("\n=====================================\n");
  getch();
  return 0;
}
