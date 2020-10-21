#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0;
  char stud[10];
  char co[10];
  char ci[10];
  no=0;
  printf("\n********************************************************\n");
  printf("\nEnter the student name,roll no,course,city");
  scanf("%s%d%s%s",&stud,&no,&co,&ci);

  printf("\n********************************************************\n");
  printf("\n\t Student name=%s  \n\t roll no     =%d  \n\t course      =%s  \n\t city        =%s",stud,no,co,ci);
  printf("\n********************************************************\n");
  getch();
  return 0;
}
