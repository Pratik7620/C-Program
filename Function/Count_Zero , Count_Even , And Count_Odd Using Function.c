#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Element 4

void Accept_Arr(int*,int);
void display_Arr(int*,int);
int count_Zero(int*,int);
int count_Even(int*,int);
int count_Odd(int*,int);


int main()
{

    int iArr[5]={0};


printf("\n =====================_*******_========================");

    Accept_Arr(iArr,Element);

    printf("\n Element Accepted Successfully :");

    getch();

printf("\n =====================_*******_========================");

    display_Arr(iArr,Element);

    getch();

    system("cls");

printf("\n =====================_*******_========================");


    printf("\n The Count Of Zero Element Is Given Array %d Is",count_Zero(iArr,Element));

    printf("\n The Count Of Even Element Is Given Array %d Is",count_Even(iArr,Element));

    printf("\n The Count Of Odd Element Is Given Array %d Is",count_Odd(iArr,Element));


    getch();
    return 0;
}

int count_Odd(int *iptr , int size)
{
    int i=0,Odd=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]%2==1)
        {
            Odd++;
        }
    }
    return  Odd++;
}
int count_Even(int *iptr , int size)
{
    int i=0,Even=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]%2 == 0 && iptr[i]!=0)
        {
            Even++;
        }
    }
    return  Even;
}

int count_Zero(int *iptr , int size)
{
    int i=0,cnt=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]==0)
        {
            cnt++;
        }
    }
    return cnt;
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


