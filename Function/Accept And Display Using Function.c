#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Element 4

void Accept_Arr(int*,int);
void display_Arr(int*,int);

int main()
{

    int iArr[5]={0},src=0,Ret=0,even,cnt;


printf("\n =====================_*******_========================");

    Accept_Arr(iArr,Element);

    printf("\n Element Accepted Successfully :");

    getch();

printf("\n =====================_*******_========================");

    display_Arr(iArr,Element);

    getch();

    system("cls");

printf("\n =====================_*******_========================");



printf("\n =====================_*******_========================");



printf("\n =====================_*******_========================");
}


void Accept_Arr(int *iptr , int size)
{
    int i=0;

    printf("\n Enter The Elements --> ");

    for(i=0;i<size;i++)
    {
        printf("\n Element No %d=",i+1);
        scanf("%d",&iptr[i]);

    }
}
void display_Arr(int *iptr , int size)
    {
        int i=0;

        printf("\n Element Are-->");

        for(i=0;i<size;i++)
        {
            printf("\n Element No %d = %d",i+1,iptr[i]);

        }
    }


