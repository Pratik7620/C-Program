#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=0,c=0,cnt=0;
    printf("\n====================================================================\n");
    printf("\n Enter The Till The Range For Fibonacci Series");
    scanf("%d",&cnt);
    printf("\n ************************Fibonacci Series:**********************");

    while(cnt>0)
    {
       printf("\n %d",c);
       c=a+b;
       a=b;
       b=c;
       cnt--;
      }
       printf("\n=================================================================\n");
    getch();
    return 0;
}
