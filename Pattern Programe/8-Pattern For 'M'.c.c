#include<stdio.h>
#include<conio.h>
int main()
{
  int i=0,j=0,No=0;
  printf("\n=======================================================\n");
   printf("\n Enter The Number Of Pattern:");
   scanf("%d",&No);

   for(i=1;i<=No;i++)
   {
        for(j=1;j<=No;j++)
        {
            if( j==1 || j==No || i==j && i+j<=No+1 || i+j==No+1 && i<=j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
            printf("\n");
   }
   printf("\n=======================================================\n");
    getch();
    return 0;
}

