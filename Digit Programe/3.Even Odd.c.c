 #include<stdio.h>
#include<conio.h>
int main()
{
  int no=0;
  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

  printf("\n++++++++++++++ enter the number**************");
  scanf("%d",&no);
  {
    if(no==0)
    printf("\n number is neutral!!!");
  }
     if(no%2==0)
    {
    printf("\n number is even:%d",no);
    }
    else
    {
    printf("\n number is odd:%d",no);
    }
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    getch();
    return 0;
}
