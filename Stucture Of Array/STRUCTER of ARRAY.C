#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct product
 {
   int ID;
   char p_name[15];
   float p_price;
   float s_price;
 };
 int main()
 {
     printf("\n\n=======================================================\n");
     int i=0;
  struct product Arr[3];
 printf("\n accepting the number:");
 for(i=0;i<3;i++)
 {
  printf("\n Enter ID=");
  scanf("%d",&Arr[i].ID);

  printf("\n Enter name=");
  scanf("%s",&Arr[i].p_name);


  printf("\n Enter purches price=");
  scanf("%f",&Arr[i].p_price);


  printf("\n Enter selling price=");
  scanf("%f",&Arr[i].s_price);
  }
   system("cls");
printf("\n resulting the value");
printf("\n\n======================******************===============================");
for(i=0;i<3;i++)
{
printf("\n\n ID = %d\n name = %s\n purches price = %0.2f\n selling price =%0.2f",Arr[i].ID,Arr[i].p_name,Arr[i].p_price,Arr[i].s_price);
printf("\n\n======================================================================================\n");
}
getch();
return 0;
}
