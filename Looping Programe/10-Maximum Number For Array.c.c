#include<stdio.h>
#include<conio.h>
int main()
{
 int i=0,num[10],max=0;
  printf("\n=================================================================================\n");

  printf("Enter the any integer values:\n");
     for(i=0;i<10;i++)
        scanf("%d",&num[i]);
        {

     for(i=0;i<10;i++)
  {
     if(num[i]>num[i+1])
     num[i+1]=num[i];
 }
 printf("the maximum number of given 10 number is %d\t",num[9]);
 }
  printf("\n=================================================================================\n");

 getch();
 return 0;

}
