#include<stdio.h>
#include<conio.h>
int main()
{
  int i=0,j=0,iNo=0,k=10;
   printf("\n=================================================================================\n");

  printf("\n Enter The Number");
  scanf("%d",&iNo);

   for(i=1;i<=iNo;i++)
   {
    for(j=1;j<=iNo;j++)
    {
       if(i==iNo || i==j && iNo/2+1<=i || i>=j && i+j>=iNo+1)
       {
          printf(" %d ",k);
          k++;
       }
       else
       {
          printf("   ");
       }
    }
    printf("\n");
  }
   printf("\n=================================================================================\n");

  getch();
  return 0;

}
