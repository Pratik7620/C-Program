#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Element 4

void Accept_Arr(int*,int);
void display_Arr(int*,int);
int search_Arr(int*,int,int);
int count_Arr(int*,int,int);
int count_Zero(int*,int);
int count_Even(int*,int);
int count_Odd(int*,int);
int Find_Max(int*,int);
int Find_Min(int*,int);

int main()
{

    int iArr[5]={0},src=0,Ret=0,cnt=0;

printf("\n\n ==================================*******======================================\n");

    Accept_Arr(iArr,Element);

    printf("\n Element Accepted Successfully :");

    getch();

printf("\n\n ==================================*******======================================\n");

    display_Arr(iArr,Element);

    getch();

    system("cls");

printf("\n\n ==================================*******======================================\n");

    printf("\n Enter an Element To Search Is An Using Array:");

    scanf("%d",&src);

    Ret=search_Arr(iArr,src,5);

    if(Ret == -1)
    {
        printf("\n Element Are Not Found in Array !!!!! ");
    }
    else
    {
        printf("\n Element %d Is Found At Location %d",src,Ret);
    }

printf("\n\n ==================================*******======================================");

       Ret=count_Arr(iArr,cnt,5);

       printf("\n Count Is %d Is Number %d",src,Ret);

       getch();

       system("cls");

printf("\n\n ==================================*******======================================");

    printf("\n The Count Of Zero Element Is Given Array %d Is",count_Zero(iArr,Element));

    printf("\n The Count Of Even Element Is Given Array %d Is",count_Even(iArr,Element));

    printf("\n The Count Of Odd Element Is Given Array %d Is",count_Odd(iArr,Element));

    getch();

    system("cls");

printf("\n\n ==================================*******======================================");

    printf("\n\n The Largest Element In Given Array %d Is",Find_Max(iArr,Element));

    printf("\n\n The Smallest Element In Given Array %d Is",Find_Min(iArr,Element));

    getch();

printf("\n\n ==================================*******======================================\n");

    printf("\n\t ==========_*****_Thank you_*****_=============");

printf("\n\n ==================================*******======================================\n");

    printf("\n\n Press Any Key To Continue !!!!!\n\n");

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

int count_Arr(int *iptr,int Ele,int size)
{
    int i=0,cnt=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]==Ele)
        {
            cnt++;
        }
    }
    return cnt;
}

int search_Arr(int *iptr,int Ele,int size)
{
    int i=0;

    for(i=0;i<size;i++)
    {
        if(iptr[i]==Ele)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;
    }
    return i;
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



