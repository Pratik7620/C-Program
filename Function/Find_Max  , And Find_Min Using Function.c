#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Element 5

void Accept_Arr(int*,int);
void display_Arr(int*,int);
int Find_Max(int*,int);
int Find_Min(int*,int);


int main()
{

    int iArr[5]={0};


printf("\n =====================_*******_========================");

    Accept_Arr(iArr,Element);

    printf("\n\n Element Accepted Successfully :");

    getch();

printf("\n\n =====================_*******_========================");

    display_Arr(iArr,Element);

    getch();

    system("cls");

printf("\n\n =====================_*******_========================");


    printf("\n\n The Largest Element In Given Array %d Is",Find_Max(iArr,Element));

    printf("\n\n The Smallest Element In Given Array %d Is",Find_Min(iArr,Element));

printf("\n\n =====================_*******_========================");

    getch();
    return 0;
}

int Find_Max(int *iptr , int size)
{
    int i=0,Max=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]>Max)
        {
            Max=iptr[i];
        }
    }
    return  Max;
}

int Find_Min(int *iptr , int size)
{
    int i=0,Min=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]<Min)
        {
            Min=iptr[i];
        }
    }
    return Min;
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


