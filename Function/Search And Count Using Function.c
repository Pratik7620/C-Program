#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Arr(int*,int);
void display_Arr(int*,int);
int search_Arr(int*,int,int);
int count_Arr(int*,int,int);



int main()
{

    int iArr[5]={0},src=0,Ret=0,even,cnt;


printf("\n =====================_*******_========================");

    Accept_Arr(iArr,5);

    printf("\n Element Accepted Successfully :");

    getch();

printf("\n =====================_*******_========================");

    display_Arr(iArr,5);

    getch();

    system("cls");

printf("\n =====================_*******_========================");

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

printf("\n =====================_*******_========================");

       Ret=count_Arr(iArr,cnt,5);

       printf("\n Count Is %d Is Number %d",src,Ret);

       getch();

       return 0;

printf("\n =====================_*******_========================");

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


