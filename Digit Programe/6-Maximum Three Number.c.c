#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
  a=b=c=0;
 printf("\n=================================================================================\n");
  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);


  if(a==b && a==c)
  {
  printf("given number are equal");
  }
  else if(a>b && a>c)
  {
       printf("%d is greater",a);
  }
  else
  {
    if(b>a && b>c)
    {
    printf("%d is greater",b);
    }
  else
  {
    printf("%d is greater",c);
  }
 }
 printf("\n=================================================================================\n");

 getch();
 return 0;

 }
