#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b=0;
  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

  printf("\n++++++++++++++ enter the number**************");
  scanf("%d%d",&a,&b);
  {
    if(a==b)
    printf("\n number is neutral!!!");
  }
     printf("\n maximum number:=%d",(a>=b)? a:b);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    getch();
    return 0;
}
