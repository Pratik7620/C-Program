#include<stdio.h>
#include<conio.h>
int main()
{
 int c,a,b;
 printf("\n=====================================\n");
 a=0;
 b=1;
 printf("\n fibonaccies series:");
 while(a<100)
 {
  printf("\n%d",a);
  c=a+b;
  a=b;
  b=c;
 }
 printf("\n=====================================\n");
  getch();
  return 0;
}
