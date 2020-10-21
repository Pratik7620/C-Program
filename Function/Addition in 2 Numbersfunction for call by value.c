#include<stdio.h>
#include<conio.h>

int Addition(int,int);

int main()
{
    int No1=0,No2=0,sum=0;

    printf("\n Enter The Two Numbers:");

    scanf("%d%d",&No1,&No2);

    sum=Addition(No1,No2);

    printf("\n Addition of %d Is %d=%d",No1,No2,sum);

    getch();

    return 0;
}
 int Addition(int N1,int N2)
{
    int Res=0;

    Res=N1+N2;

    return Res;
}
